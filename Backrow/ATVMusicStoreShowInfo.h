/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMusicStoreUtility.h"

@class NSMutableDictionary, NSString, NSDictionary;

@interface ATVMusicStoreShowInfo : BRMusicStoreUtility {
@private
	NSString *_key;	// 4 = 0x4
	ATVMediaTypeRef _mediaType;	// 8 = 0x8
	NSString *_itemID;	// 12 = 0xc
	NSMutableDictionary *_episodeData;	// 16 = 0x10
	NSDictionary *_itemDictionary;	// 20 = 0x14
}
@property(assign) long bookmarkTimeInMS;	// G=0x34c66a6d; S=0x34c66aa1; converted property
@property(assign) BOOL hasBeenPlayed;	// G=0x34c66b4d; S=0x34c66b81; converted property
@property(assign) BOOL hasBeenRented;	// G=0x34c66bbd; S=0x34c66bf1; converted property
@property(assign) BOOL isMarkedAsUnwatched;	// G=0x34c66c49; S=0x34c66c7d; converted property
@property(readonly, retain) NSDictionary *itemDictionary;	// G=0x34bf61c9; converted property
@property(readonly, retain) NSString *itemID;	// G=0x34c66cc9; converted property
@property(readonly, assign) ATVMediaTypeRef mediaType;	// G=0x34c66cb9; converted property
@property(assign) long playCount;	// G=0x34c66add; S=0x34c66b11; converted property
+ (id)_guidForItemDictionary:(id)itemDictionary;	// 0x34c65fdd
+ (id)_guidForTypeName:(id)typeName episodeID:(id)anId;	// 0x34c65f9d
+ (id)_lookupShowInfoForTypeName:(id)typeName forEpisodeID:(id)episodeID initIfNotFound:(BOOL)found;	// 0x34c66cd9
+ (void)beginBulkUpdate;	// 0x34c666e5
+ (void)commitBulkUpdate:(id)update;	// 0x34c66721
+ (void)fetchBookmarkTimeForAsset:(id)asset completionHandler:(id)handler;	// 0x34c665c5
+ (void)fetchRemoteShowInfoForIDs:(id)ids ofType:(ATVMediaTypeRef)type handler:(id)handler;	// 0x34c66555
+ (void)fetchRemoteShowInfoForIDs:(id)ids ofTypes:(id)types handler:(id)handler;	// 0x34c66095
+ (id)lookupShowInfoForItemDictionary:(id)itemDictionary initIfNotFound:(BOOL)found;	// 0x34c65eb5
+ (id)lookupShowInfoForMediaItem:(ATVMediaItemRef)mediaItem initIfNotFound:(BOOL)found;	// 0x34c65da9
- (id)_initWithDictionary:(id)dictionary withKey:(id)key withItemID:(id)itemID withMediaType:(ATVMediaTypeRef)mediaType;	// 0x34c66e21
- (id)_objectForKey:(id)key;	// 0x34c66f69
- (void)_saveToDictionary:(id)dictionary;	// 0x34c66f45
- (void)_setObject:(id)object forKey:(id)key;	// 0x34c66f91
// converted property getter: - (long)bookmarkTimeInMS;	// 0x34c66a6d
- (void)dealloc;	// 0x34c669dd
// converted property getter: - (BOOL)hasBeenPlayed;	// 0x34c66b4d
// converted property getter: - (BOOL)hasBeenRented;	// 0x34c66bbd
// converted property getter: - (BOOL)isMarkedAsUnwatched;	// 0x34c66c49
// converted property getter: - (id)itemDictionary;	// 0x34bf61c9
// converted property getter: - (id)itemID;	// 0x34c66cc9
- (void)markAsUnwatched;	// 0x34c670b9
- (void)markAsWatched;	// 0x34c67059
// converted property getter: - (ATVMediaTypeRef)mediaType;	// 0x34c66cb9
// converted property getter: - (long)playCount;	// 0x34c66add
// converted property setter: - (void)setBookmarkTimeInMS:(long)ms;	// 0x34c66aa1
// converted property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x34c66b81
// converted property setter: - (void)setHasBeenRented:(BOOL)rented;	// 0x34c66bf1
// converted property setter: - (void)setIsMarkedAsUnwatched:(BOOL)unwatched;	// 0x34c66c7d
// converted property setter: - (void)setPlayCount:(long)count;	// 0x34c66b11
@end

