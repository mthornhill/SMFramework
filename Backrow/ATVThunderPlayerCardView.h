/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRAsyncImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVThunderPlayerCardView : BRControl {
@private
	BRAsyncImageControl *_background;	// 44 = 0x2c
	BRAsyncImageControl *_playerImage;	// 48 = 0x30
	BRTextControl *_playerNumber;	// 52 = 0x34
	BRTextControl *_playerName;	// 56 = 0x38
}
- (id)initWithDictionary:(id)dictionary;	// 0x34c8bec1
- (id)accessibilityLabel;	// 0x34c8c53d
- (void)dealloc;	// 0x34c8c2d1
- (void)layoutSubcontrols;	// 0x34c8c34d
@end

