/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <QuartzCore/CALayer.h> // Unknown library


@interface CALayer (ControlCheaters)
- (id)_owningControl;	// 0x34cba131
@end

@interface CALayer (DirtyLayout)
- (void)setNeedsLayoutOnAllSublayers;	// 0x34cbe505
@end

@interface CALayer (BRScalingLayoutManager)
@property(assign) CGRect scaledFrame;	// G=0x34d80965; S=0x34d808c1; converted property
// converted property getter: - (CGRect)scaledFrame;	// 0x34d80965
// converted property setter: - (void)setScaledFrame:(CGRect)frame;	// 0x34d808c1
@end

@interface CALayer (BRCALayerAdditions)
- (void)addBasicAnimationForProperty:(id)property fromValue:(id)value toValue:(id)value3 duration:(double)duration timingFunction:(id)function delegate:(id)delegate;	// 0x34dbe571
- (id)firstLayerNamed:(id)named;	// 0x34dbe4f9
@end

