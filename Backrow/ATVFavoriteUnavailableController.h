/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BROptionDialog.h"

@class ATVStoreFavorite;

__attribute__((visibility("hidden")))
@interface ATVFavoriteUnavailableController : BROptionDialog {
@private
	ATVStoreFavorite *_favorite;	// 128 = 0x80
}
- (id)initWithStoreFavorite:(id)storeFavorite;	// 0x34bf76d5
- (void)_optionSelected:(id)selected;	// 0x34bf78c1
- (id)_textForFavoriteType:(int)favoriteType;	// 0x34bf7885
- (void)dealloc;	// 0x34bf7841
@end

