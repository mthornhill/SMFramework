/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTitleProvider.h"
#import <Foundation/Foundation.h> // Unknown library

@class BRMediaType, NSURL, NSMutableArray, NSString, NSDictionary;

@interface ATVMusicStorePresentsProvider : NSObject <BRTitleProvider> {
@private
	NSString *_requestID;	// 4 = 0x4
	BRMediaType *_mediaType;	// 8 = 0x8
	NSURL *_url;	// 12 = 0xc
	NSURL *_fallbackURL;	// 16 = 0x10
	NSMutableArray *_items;	// 20 = 0x14
	NSDictionary *_catalogCollection;	// 24 = 0x18
	BOOL _storeLoadInProgress;	// 28 = 0x1c
	double _lastStoreLoadTime;	// 32 = 0x20
	BOOL _networkIsOK;	// 40 = 0x28
	BOOL _storeRestricted;	// 41 = 0x29
	NSString *_title;	// 44 = 0x2c
	unsigned _collectionNumber;	// 48 = 0x30
	unsigned _fallbackCollectionNumber;	// 52 = 0x34
	BOOL _usingFallback;	// 56 = 0x38
}
@property(readonly, retain) NSString *title;	// G=0x34c559a5; converted property
+ (id)_cachedResultsDirectory;	// 0x34c55f05
+ (id)_cachedResultsPathForRequestID:(id)requestID;	// 0x34c55f49
+ (id)providerWithMediaType:(id)mediaType forID:(id)anId;	// 0x34c5596d
- (id)_cachedResultModDate;	// 0x34c56835
- (void)_clearStoreData;	// 0x34c55fbd
- (id)_initWithMediaType:(id)mediaType forID:(id)anId;	// 0x34c55cd9
- (void)_loadCachedEntry;	// 0x34c56371
- (void)_loadStoreDataFromURL:(id)url;	// 0x34c56391
- (void)_networkChanged:(id)changed;	// 0x34c56891
- (BOOL)_okToFetchNewData;	// 0x34c56349
- (void)_parentalControlAccessChanged:(id)changed;	// 0x34c56981
- (void)_parseCatalogCollection:(id)collection;	// 0x34c5663d
- (void)_resetStoreData;	// 0x34c560a1
- (void)_setTitle:(id)title;	// 0x34c55e91
- (void)_supplementalResponseReceived:(id)received;	// 0x34c5650d
- (id)controlFactory;	// 0x34c55ad9
- (id)dataAtIndex:(long)index;	// 0x34c55b2d
- (long)dataCount;	// 0x34c55af9
- (void)dealloc;	// 0x34c559b5
- (id)hashForDataAtIndex:(long)index;	// 0x34c55c69
- (BOOL)isLoading;	// 0x34c55ac9
- (void)reloadStoreData;	// 0x34c55a7d
// converted property getter: - (id)title;	// 0x34c559a5
@end

