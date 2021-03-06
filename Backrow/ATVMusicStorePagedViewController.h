/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSArray, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVMusicStorePagedViewController : NSObject {
@private
	NSDictionary *_storeDict;	// 4 = 0x4
	NSMutableArray *_pages;	// 8 = 0x8
	NSArray *_items;	// 12 = 0xc
}
+ (id)pagedViewControllerForStoreItem:(id)storeItem;	// 0x34c60439
- (id)init;	// 0x34c60509
- (id)initWithStoreItem:(id)storeItem;	// 0x34c6050d
- (long)_itemsPerPage;	// 0x34c61141
- (long)_pageCount;	// 0x34c61145
- (BOOL)datasourceShouldBeRetainedByPagedView:(id)datasource;	// 0x34c60a69
- (void)dealloc;	// 0x34c607bd
- (BOOL)delegateShouldBeRetainedByPagedView:(id)delegate;	// 0x34c60bd9
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x34c61131
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x34c60c65
- (long)numberOfItemsInGrid:(id)grid;	// 0x34c60bdd
- (long)pageCountForPagedView:(id)pagedView;	// 0x34c60a55
- (void)pagedView:(id)view didSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x34c60bd5
- (id)pagedView:(id)view itemForPage:(long)page;	// 0x34c60901
- (void)pagedView:(id)view willSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x34c60a6d
- (void)toggleCursorMode:(id)mode;	// 0x34c6084d
- (id)view;	// 0x34c608fd
@end

