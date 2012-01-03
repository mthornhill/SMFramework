/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreUserReviewsControl : BRControl {
@private
	NSDictionary *_itemDictionary;	// 44 = 0x2c
}
+ (id)userReviewsControlWithDictionary:(id)dictionary;	// 0x34c70285
- (id)initWithDictionary:(id)dictionary;	// 0x34c702b9
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size xOrigin:(float)origin topLine:(float)line;	// 0x34c70ed1
- (CGRect)_addTextControlWithText:(id)text attributes:(id)attributes maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x34c70de1
- (id)_largeImageForRating:(float)rating;	// 0x34c710a1
- (id)_smallImageForRating:(float)rating;	// 0x34c70f95
- (id)accessibilityLabel;	// 0x34c70dc9
- (void)dealloc;	// 0x34c70309
- (void)layoutSubcontrols;	// 0x34c7034d
@end
