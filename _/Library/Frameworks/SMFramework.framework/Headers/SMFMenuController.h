//
//  SMFMenuController.h
//  Untitled
//
//  Created by Thomas Cool on 10/22/10.
//  Copyright 2010 tomcool.org. All rights reserved.
//
#import <Backrow/Backrow.h>
#import <Foundation/Foundation.h>
#import "SMFDefines.h"
@interface SMFMenuController : BRMenuController {
    NSMutableArray *_items;
    NSMutableArray *_options;
}

-(float)heightForRow:(long)row;
-(BOOL)rowSelectable:(long)row;
-(long)itemCount;
-(id)itemForRow:(long)row;
-(long)rowForTitle:(id)title;
-(id)titleForRow:(long)row;
-(int)getSelection;
-(id)everyLoad;

- (void)setSelection:(int)sel;
/*
 *  Action Called Every Time someone Presses on Left Arrow
 */
-(void)leftActionForRow:(long)row;

/*
 *  Action Called Every Time someone Presses on Right Arrow
 */
-(void)rightActionForRow:(long)row;


@end
