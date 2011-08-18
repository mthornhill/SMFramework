/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRAXTitleChangeProtocol.h"
#import "BRAXSelectionChangeProtocol.h"
#import "BRController.h"

@class BRTextControl, BRAlignmentAdjustingTextControl, BRHeaderControl, BRImageControl;

@interface BRAlertController : BRController <BRAXSelectionChangeProtocol, BRAXTitleChangeProtocol> {
@private
	id _eventDelegate;	// 60 = 0x3c
	SEL _eventSelector;	// 64 = 0x40
	BRHeaderControl *_header;	// 68 = 0x44
	int _type;	// 72 = 0x48
	BRTextControl *_primary;	// 76 = 0x4c
	BRAlignmentAdjustingTextControl *_secondary;	// 80 = 0x50
	BRImageControl *_image;	// 84 = 0x54
}
@property(retain) id primaryText;	// G=0x34cf4e01; S=0x34cf4d2d; converted property
@property(retain) id secondaryText;	// G=0x34cf4e85; S=0x34cf4e41; converted property
+ (id)alertForError:(id)error;	// 0x34cf45ad
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x34cf4641
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x34cf4685
- (id)_imageForType:(int)type;	// 0x34cf4fd9
- (id)accessibilityLabel;	// 0x34cf4f99
- (id)axSelectedItemText;	// 0x34cf5025
- (id)axTitleText;	// 0x34cf5011
- (BOOL)brEventAction:(id)action;	// 0x34cf4b81
- (void)dealloc;	// 0x34cf47e9
- (BOOL)isAccessibilityElement;	// 0x34cf4f95
- (void)layoutSubcontrols;	// 0x34cf4875
// converted property getter: - (id)primaryText;	// 0x34cf4e01
- (id)primaryTextControl;	// 0x34cf4e31
- (BOOL)recreateOnReselect;	// 0x34cf4b7d
// converted property getter: - (id)secondaryText;	// 0x34cf4e85
- (id)secondaryTextControl;	// 0x34cf4eb5
- (void)setEventDelegate:(id)delegate selector:(SEL)selector;	// 0x34cf4f45
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x34cf4d2d
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x34cf4d71
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x34cf4e41
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x34cf4ec5
- (void)setTitle:(id)title;	// 0x34cf4cf5
- (void)wasPushed;	// 0x34cf4ca1
@end

