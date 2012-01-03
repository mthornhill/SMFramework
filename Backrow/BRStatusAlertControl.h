/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRStatusAlertControlDelegate, BRImageControl;

@interface BRStatusAlertControl : BRControl {
@private
	BRStatusAlertControlDelegate *_animationDelegate;	// 44 = 0x2c
	BRImageControl *_background;	// 48 = 0x30
	BRImageControl *_overlay;	// 52 = 0x34
	int _fadeHalfCount;	// 56 = 0x38
}
+ (id)alertWithType:(int)type;	// 0x34cf5ea5
+ (void)postStatusAlertOfType:(id)type;	// 0x34cf5ef9
- (void)_cancel;	// 0x34cf65b9
- (void)_setType:(int)type;	// 0x34cf623d
- (id)accessibilityLabel;	// 0x34cf621d
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x34cf61a1
- (void)dealloc;	// 0x34cf5fe9
- (BOOL)isAccessibilityElement;	// 0x34cf6219
- (void)layoutSubcontrols;	// 0x34cf6065
@end
