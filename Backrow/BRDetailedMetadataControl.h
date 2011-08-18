/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRMetadataDetailControl, BRDividerControl, BRMetadataTitleControl;

@interface BRDetailedMetadataControl : BRControl {
@private
	int _displayOption;	// 44 = 0x2c
	BRMetadataDetailControl *_detailControl;	// 48 = 0x30
	BRMetadataTitleControl *_titleControl;	// 52 = 0x34
	BRDividerControl *_topDivider;	// 56 = 0x38
	BRDividerControl *_middleDivider;	// 60 = 0x3c
	BRTextControl *_summaryControl;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x34d04ac9; @synthesize=_titleControl
- (id)init;	// 0x34d03d61
- (id)accessibilityLabel;	// 0x34d04a69
- (void)addDetailControls:(id)controls withLabel:(id)label;	// 0x34d04485
- (void)addDetailStrings:(id)strings withLabel:(id)label;	// 0x34d042a5
- (void)dealloc;	// 0x34d03efd
- (void)layoutSubcontrols;	// 0x34d044ad
- (float)renderedHeightForWidth:(float)width;	// 0x34d0489d
- (void)setRating:(id)rating;	// 0x34d03fc9
- (void)setSummary:(id)summary;	// 0x34d03fe9
- (void)setTitle:(id)title;	// 0x34d03f89
- (void)setTitleSubtext:(id)subtext;	// 0x34d03fa9
- (void)setTopRightImage:(id)image;	// 0x34d0419d
// declared property getter: - (id)titleControl;	// 0x34d04ac9
- (void)toggleSummaryMetadataView;	// 0x34d041bd
@end

