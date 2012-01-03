//
//  SMFListDropShadowControl.m
//  SMFramework
//
//  Created by Thomas Cool on 1/21/11.
//  Copyright 2011 tomcool.org. All rights reserved.
//

#define ZOOM_TO_POINT CGPointMake(591.5999755859375, 284.39999389648438)


#import "SMFListDropShadowControl.h"
#import "SMFThemeInfo.h"
#import "SMFMenuItem.h"
#import "SMFDefines.h"
#import "SMFMockMenuItem.h"
#import "SMFAnimation.h"

/*
 
 sender is a new variable to determine the bounds and position for zoom animations, if it descends from BRMenuItem we synthesize a stub class 
 that only has position and bounds variables, i can't figure out how to get the proper bounds/position from BRListControl from and standard BRMenuController
 so what i do is take the blue lozenge from the list grab its position and modify the x value (the y variables are accurate here, only X needs an attitude adjustment) 
 
 
 */

@implementation SMFListDropShadowControl
@synthesize cDelegate, cDatasource, list, isAnimated, sender;
-(id)init
{
    self =[super init];
    if (self!=nil) {
        self.list = [[[BRListControl alloc]init]autorelease];
        [self.list setDatasource:self];
        self.isAnimated = FALSE; //up to you, can be false by default if you dont like it
		self.backgroundColor=[[SMFThemeInfo sharedTheme]blackColor];
        self.borderColor=[[SMFThemeInfo sharedTheme] whiteColor];
        self.borderWidth=3.0;
		self.inhibitsFocusForChildren = TRUE;
		self.avoidsCursor = TRUE;
        [self setContent:self.list];
    }
    return self;
}
-(void)reloadList
{
    [list reload];
}


-(void)addToController:(BRController *)ctrl
{
    CGRect f = [self rectForSize:CGSizeMake(528., 154.)];
	
    [self setFrame:f];
	
	if (self.isAnimated == TRUE)
	{
		CAAnimationGroup *zoomInAnimation = nil;
		
		if (sender != nil)
		{
			[self updateSender];
			zoomInAnimation = [SMFAnimation zoomInFadedToRect:[sender bounds]];
		} else {
			zoomInAnimation = [SMFAnimation zoomInFadedToRect:CGRectZero];
		}
		
		[self setZoomInPosition]; //if we dont set this the position goes haywire
		
		[zoomInAnimation setValue:@"zoomInAnimation" forKey:@"Name"];
		[zoomInAnimation setDelegate:self];
		[self addAnimation:zoomInAnimation forKey:@"zoomInAnimation"];
		
	}
    [ctrl addControl:self];
    [ctrl setFocusedControl:self];
    [ctrl _setFocus:self];
}
-(void)controlWasActivated
{    
//    [list setSelection:0];
	[self setFocusedControl:list];
    [self _setFocus:list];
    [super controlWasActivated];
}
- (float)heightForRow:(long)row				
{ 
    if (cDatasource && [cDatasource respondsToSelector:@selector(popupHeightForRow:)]) {
        return [cDatasource popupHeightForRow:row];
    }
    return 0.0f;
}
- (BOOL)rowSelectable:(long)row				
{ 
    if(cDatasource && [cDatasource respondsToSelector:@selector(popupRowSelectable:)])
        return [cDatasource popupRowSelectable:row];
    return YES;
}

- (long)itemCount							
{ 
    if(cDatasource && [cDatasource respondsToSelector:@selector(popupItemCount)])
        return [cDatasource popupItemCount];
    return (long)3;
}
- (id)itemForRow:(long)row					
{ 
    if(cDatasource && [cDatasource respondsToSelector:@selector(popupItemForRow:)])
        return [cDatasource popupItemForRow:row];
    SMFMenuItem *it = [SMFMenuItem menuItem];
    [it setTitle:@"Default Item"];
    return it;
}
- (id)titleForRow:(long)row					
{ 
    if(cDatasource && [cDatasource respondsToSelector:@selector(popupTitleForRow:)])
        return [cDatasource popupTitleForRow:row];
    if (row>=[self itemCount])
        return nil;
    return [[self itemForRow:row] text];
}
- (long)defaultIndex						
{ 
    if(cDatasource && [cDatasource respondsToSelector:@selector(popupDefaultIndex)])
        return [cDatasource popupDefaultIndex];
    return 0;
}
-(void)itemSelected:(long)selected
{

    if (cDelegate && [cDelegate respondsToSelector:@selector(popup:itemSelected:)])
        [cDelegate popup:self itemSelected:selected];
    else if (cDelegate && [cDelegate respondsToSelector:@selector(popupItemSelected:)]) {
        [cDelegate popupItemSelected:selected];
    }
    else {
        [self removeFromParent];
    }
}

- (void)removeFromParent
{
	if (self.isAnimated == TRUE)
	{
		[self setZoomOutPosition];
		
		CAAnimationGroup *zoomOutAnimation = nil;
		if (sender != nil)
			zoomOutAnimation = [SMFAnimation zoomOutFadedToRect:[sender bounds]];
		else
			zoomOutAnimation = [SMFAnimation zoomOutFadedToRect:CGRectZero];
		
		[zoomOutAnimation setDelegate:self];
		[zoomOutAnimation setValue:@"removeFromParent" forKey:@"Name"];
		[[self layer] addAnimation:zoomOutAnimation forKey:@"removeFromParent"];

	} else {
		
		
		[super removeFromParent];
	}
	
}
	 
- (void)actuallyRemove //deprecated
	 
{ [super removeFromParent]; }

-(BOOL)brEventAction:(BREvent*)event
{

    int remoteAction = [event remoteAction];
    switch (remoteAction)
    {
        case kBREventRemoteActionMenu:
            [self removeFromParent];
            return YES;
            break;
        case kBREventRemoteActionPlay:
            [self itemSelected:[list selection]];
            return YES;
            break;
    }
    return [super brEventAction:event];
}


-(CGRect)rectForSize:(CGSize)s
{
    CGRect r;
    r.size.width=s.width;
    SMFMenuItem *a = [SMFMenuItem menuItem];
    CGSize ss = [a sizeThatFits:s];
    int it = [self itemCount];
    if (it>6)
        it=6;
    r.size.height=52.+ss.height*it;
    CGSize windowSize = [BRWindow maxBounds];
    r.origin.y=(windowSize.height-r.size.height)/2.0f;
    r.origin.x=(windowSize.width-r.size.width)/2.0f;
    return r;
}

# pragma mark animation stuff

- (void)animationDidStart:(CAAnimation *)anim
{
	
		//NSLog(@"animationDidStart: %@", anim);
}

- (void)animationDidStop:(CAAnimation *)anim finished:(BOOL)flag
{
	NSString *animationName = [anim valueForKey:@"Name"];
	if ([animationName isEqualToString:@"removeFromParent"])
	{
		
		[super removeFromParent];
	}
	[self removeAnimationForKey:animationName];	
	
}


- (void)setZoomInPosition
{
	CABasicAnimation *pos = [CABasicAnimation animationWithKeyPath:@"position"];
	if (sender != nil)
	{
		pos.fromValue = [NSValue valueWithCGPoint:[sender position]];
	} else {
		pos.fromValue = [NSValue valueWithCGPoint:ZOOM_TO_POINT]; //
	}
	
	pos.toValue = [NSValue valueWithCGPoint:CGPointMake(640.0, 360.0)];
	pos.fillMode = kCAFillModeForwards;
	[[self layer] addAnimation:pos forKey:@"position"];
}

- (void)setZoomOutPosition
{
	CABasicAnimation *pos = [CABasicAnimation animationWithKeyPath:@"position"];
	pos.fromValue = [NSValue valueWithCGPoint:CGPointMake(640.0, 360.0)];
	if (sender != nil)
	{
		pos.toValue = [NSValue valueWithCGPoint:[sender position]];
	} else {
		pos.toValue = [NSValue valueWithCGPoint:ZOOM_TO_POINT];
	}
	
	pos.fillMode = kCAFillModeForwards;
	[[self layer] addAnimation:pos forKey:@"position"];
}

/*
 
if we are a BRMenuItem there are very minimal chances that you will get a usable position and bounds from it for zooming purposes
here are all the functions where i handle what is mentioned at the top (the comments about sender)
 
 */

- (void)updateSender
{
	if ([sender isKindOfClass:[BRMenuItem class]]) //is or descends from BRMenuItem
	{
		id newSender = [self synthesizeMockItem]; //create our stub menu item that has 2 variables total.
		if (newSender != nil)
		{
				//	NSLog(@"setting new sender to: %@", newSender);
			
			sender = newSender;
				//NSLog(@"sender check: %@", sender);
		}
		
	}
	
}

	// find the list given the BRMenuItem (or said subclass of BRMenuItem)

- (id)getListFromMenuItem:(id)menuItem
{
	id listControl = [[[menuItem parent] parent] parent]; //parent = BRGridControl, grand parent = BRScrollControl, great grand parent = BRListControl
	NSString *class = NSStringFromClass([listControl class]);
	if (![class isEqualToString:@"BRListControl"])
	{
		NSLog(@"cant find list control!!!, found %@ instead!", class); //bail!!!
		return nil;
	}
	return listControl;
}

	//given the BRBlueGlowSelectionLozengeLayer control, spit out our stub class with the proper positioning.

- (id)synthesizeMockItemFrom:(id)theSender withX:(float)xValue
{
	
	SMFMockMenuItem *menuItem = [[SMFMockMenuItem alloc] init];
	CGPoint newPosition = [theSender position];
	newPosition.x = xValue; //said attitude adjustment, without setting this x variable properly, all hell breaks loose.
	
	[menuItem setBounds:[theSender bounds]];
	[menuItem setPosition:newPosition];
	
	return menuItem;
	
}

- (id)synthesizeMockItem
{
	id theList = [self getListFromMenuItem:sender];
	if (theList == nil)
		return nil;
	
	CGPoint listPosition = [theList position];
	float xValue = listPosition.x;
	NSEnumerator *controlEnum = [[theList controls] objectEnumerator];
	id current = nil;
	while ((current = [controlEnum nextObject]))
	{
		NSString *currentClass = NSStringFromClass([current class]);
		if ([currentClass isEqualToString:@"BRBlueGlowSelectionLozengeLayer"])
		{
			
			return [self synthesizeMockItemFrom:current withX:xValue];
			
		}
	}
	return nil;
}


-(void)dealloc
{
	[sender release];
	self.sender = nil;
    self.cDelegate=nil;
    self.cDatasource=nil;
    self.list=nil;
    [super dealloc];
}
@end
