/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSTimer, NSMutableArray;

@interface ATVFavoritesManager : BRSingleton {
@private
	NSMutableArray *_favorites;	// 4 = 0x4
	NSTimer *_saveTimer;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *favorites;	// G=0x34bf67cd; converted property
+ (void)setSingleton:(id)singleton;	// 0x34bf63a9
+ (id)singleton;	// 0x34bf639d
- (id)init;	// 0x34bf63b5
- (void)_keyValueStoreAccountDidSignOut:(id)_keyValueStoreAccount;	// 0x34bf6fe9
- (void)_keyValueStoreIsAvailable:(id)available;	// 0x34bf6fc9
- (void)_loadFavorites;	// 0x34bf680d
- (void)_musicStoreItemAcquired:(id)acquired;	// 0x34bf7019
- (unsigned)_nextUserOrderForType:(int)type;	// 0x34c55185
- (id)_orderedFavoritesForType:(int)type orderedBy:(int)by;	// 0x34c5532d
- (void)_removeFavorites:(id)favorites;	// 0x34bf68d9
- (void)_saveFavorites;	// 0x34bf70a9
- (void)_saveTimerFired:(id)fired;	// 0x34bf66ad
- (void)_updateFavoritesFromDictionaryRepresentations:(id)dictionaryRepresentations;	// 0x34bf6b29
- (void)_updateFromKeyValueStoreIfAvailable:(id)keyValueStoreIfAvailable;	// 0x34bf6acd
- (void)_updateFromKeyValueStoreInternal:(id)keyValueStoreInternal;	// 0x34bf6ecd
- (void)dealloc;	// 0x34bf64d1
- (BOOL)favoriteExistsForItemID:(id)itemID;	// 0x34bf67ad
- (id)favoriteForItemID:(id)itemID;	// 0x34bf6735
// converted property getter: - (id)favorites;	// 0x34bf67cd
- (id)favoritesForType:(int)type;	// 0x34c55239
- (id)orderedFavoritesForType:(int)type;	// 0x34c555ad
- (id)radioFavorites;	// 0x34c575c9
- (void)reloadFavorites;	// 0x34bf7209
- (void)removeFavorite:(id)favorite;	// 0x34bf66d9
- (void)removeFavorites:(id)favorites;	// 0x34bf670d
- (void)saveFavorite:(id)favorite;	// 0x34bf653d
- (void)saveFavorites;	// 0x34bf6635
- (void)setNeedsSave;	// 0x34bf6649
- (void)sortModeChangedFrom:(int)from to:(int)to;	// 0x34c555fd
- (void)updateFromKeyValueStore:(id)keyValueStore;	// 0x34bf67f9
@end

