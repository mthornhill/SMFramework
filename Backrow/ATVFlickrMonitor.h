/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInternetPhotosMonitor.h"

@class BRBackgroundTask;

@interface ATVFlickrMonitor : ATVInternetPhotosMonitor {
@private
	BRBackgroundTask *_backgroundTask;	// 32 = 0x20
}
@property(readonly, retain) BRBackgroundTask *backgroundTask;	// G=0x34c0c3b5; converted property
+ (void)initialize;	// 0x34c0b75d
+ (void)setSingleton:(id)singleton;	// 0x34c0b751
+ (id)singleton;	// 0x34c0b745
- (id)init;	// 0x34c0b7bd
- (id)_loadFlickrURL:(id)url;	// 0x34c0dd89
- (void)_performAccountIconImageLoad:(id)load;	// 0x34c0da9d
- (void)_performAccountLoad:(id)load;	// 0x34c0c3d1
- (void)_performAccountMediaLoad:(id)load;	// 0x34c0c555
- (void)_performAccountSubAccountsLoad:(id)load;	// 0x34c0d195
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x34c0da5d
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x34c0da7d
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x34c0db85
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x34c0d91d
- (void)_performCollectionAssetsLoad:(id)load;	// 0x34c0d2f9
- (void)_performSearch:(id)search;	// 0x34c0d93d
- (id)_savedSearchesFilePath;	// 0x34c0deb1
- (void)addAccount:(id)account;	// 0x34c0b97d
// converted property getter: - (id)backgroundTask;	// 0x34c0c3b5
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x34c0c159
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x34c0c1b9
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x34c0c2f5
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x34c0c355
- (void)cancelLoadMediaForAccount:(id)account;	// 0x34c0c035
- (void)cancelLoadSubAccountsForAccount:(id)account;	// 0x34c0c0f9
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x34c0c295
- (void)dealloc;	// 0x34c0b899
- (void)loadAccountIconForAccount:(id)account;	// 0x34c0bb35
- (void)loadAccountWithName:(id)name;	// 0x34c0b9f9
- (void)loadAssetsForCollection:(id)collection;	// 0x34c0bba5
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x34c0bcb5
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x34c0bd25
- (void)loadMediaForAccount:(id)account;	// 0x34c0ba55
- (void)loadSubAccountsForAccount:(id)account;	// 0x34c0bac5
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x34c0bc45
- (void)removeAccountWithName:(id)name;	// 0x34c0b915
- (void)removeSavedSearchTerm:(id)term;	// 0x34c0bebd
- (void)saveSearchTerm:(id)term;	// 0x34c0bdb9
- (id)savedSearchTerms;	// 0x34c0c005
- (void)searchWithSearchTerm:(id)searchTerm;	// 0x34c0bd95
- (id)taskContext;	// 0x34c0c3c5
@end

