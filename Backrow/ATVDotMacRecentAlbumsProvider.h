/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <Foundation/Foundation.h> // Unknown library

@class NSMutableArray, NSArray;
@protocol BRControlFactory;

@interface ATVDotMacRecentAlbumsProvider : NSObject <BRProvider> {
@private
	NSMutableArray *_accountsBeingLoaded;	// 4 = 0x4
	NSArray *_mostRecentAlbums;	// 8 = 0x8
	NSMutableArray *_accountProviders;	// 12 = 0xc
	NSMutableArray *_collectionProviders;	// 16 = 0x10
	NSMutableArray *_collectionsBeingLoaded;	// 20 = 0x14
	id<BRControlFactory> _controlFactory;	// 24 = 0x18
	BOOL _queryInProgress;	// 28 = 0x1c
	double _lastQueryTime;	// 32 = 0x20
}
+ (id)cacheFolderPath;	// 0x34c58031
+ (id)mainMenuProvider;	// 0x34c57ff1
+ (id)standardProvider;	// 0x34c57fb1
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x34c58085
- (void)_accountsInserted:(id)inserted;	// 0x34c58841
- (void)_accountsRemoved:(id)removed;	// 0x34c588d1
- (void)_aggregateRecentAlbums:(id)albums forAccountName:(id)accountName;	// 0x34c590dd
- (void)_collectionImageUpdated:(id)updated;	// 0x34c58585
- (void)_collectionProviderUpdated:(id)updated;	// 0x34c583cd
- (void)_loadAccounts;	// 0x34c5876d
- (void)_loadCollection:(id)collection;	// 0x34c592f1
- (void)_loadRSSFeedWithAccountName:(id)accountName;	// 0x34c58ca9
- (void)_loadRecentAlbumsFromCache;	// 0x34c5953d
- (void)_networkChanged:(id)changed;	// 0x34c58ad5
- (BOOL)_okToFetchNewData;	// 0x34c58b7d
- (id)_persistentAccountNames;	// 0x34c5870d
- (void)_removeRecentCachedAlbumsFromAccount:(id)account;	// 0x34c59a85
- (void)_rssFeedRequestReady:(id)ready;	// 0x34c58dd5
- (void)_saveRecentAlbumsToCache;	// 0x34c59911
- (void)_sortCollectionsBeingLoaded;	// 0x34c59375
- (id)controlFactory;	// 0x34c58075
- (id)dataAtIndex:(long)index;	// 0x34c5834d
- (long)dataCount;	// 0x34c5832d
- (void)dealloc;	// 0x34c58265
- (id)hashForDataAtIndex:(long)index;	// 0x34c5836d
- (void)reload;	// 0x34c5839d
@end

