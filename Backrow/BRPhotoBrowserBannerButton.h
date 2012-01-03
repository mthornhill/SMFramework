/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, NSDictionary, BRImage, BRImageControl;

@interface BRPhotoBrowserBannerButton : BRControl {
@private
	float _minimumWidth;	// 44 = 0x2c
	BRControl *_focusControl;	// 48 = 0x30
	BRImageControl *_imageControl;	// 52 = 0x34
	BRImage *_focusedImage;	// 56 = 0x38
	BRImage *_unFocusedImage;	// 60 = 0x3c
	BRTextControl *_textControl;	// 64 = 0x40
	NSDictionary *_textAttributes;	// 68 = 0x44
}
@property(retain) BRImage *focusedImage;	// G=0x34d6fbc1; S=0x34d6fb79; converted property
@property(retain) id text;	// G=0x34d6fb49; S=0x34d6fac9; converted property
@property(retain) BRImage *unFocusedImage;	// G=0x34d6fc19; S=0x34d6fbd1; converted property
+ (id)button;	// 0x34d6f619
+ (id)removeSavedSearchButton;	// 0x34d6f7b9
+ (id)saveSearchButton;	// 0x34d6f765
+ (id)settingsButton;	// 0x34d6f80d
+ (id)slideshowButton;	// 0x34d6f649
- (id)init;	// 0x34d6f861
- (void)_updateContents;	// 0x34d700e5
- (id)accessibilityLabel;	// 0x34d700a5
- (id)accessibilityTraits;	// 0x34d700b9
- (void)controlWasFocused;	// 0x34d6fa51
- (void)controlWasUnfocused;	// 0x34d6fa8d
- (void)dealloc;	// 0x34d6f9b1
// converted property getter: - (id)focusedImage;	// 0x34d6fbc1
- (BOOL)isAccessibilityElement;	// 0x34d700a1
- (void)layoutSubcontrols;	// 0x34d6fdd5
// converted property setter: - (void)setFocusedImage:(id)image;	// 0x34d6fb79
// converted property setter: - (void)setText:(id)text;	// 0x34d6fac9
// converted property setter: - (void)setUnFocusedImage:(id)image;	// 0x34d6fbd1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34d6fc29
// converted property getter: - (id)text;	// 0x34d6fb49
// converted property getter: - (id)unFocusedImage;	// 0x34d6fc19
@end
