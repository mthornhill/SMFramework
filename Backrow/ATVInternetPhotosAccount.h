/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class ATVInternetPhotosCollection, NSString, NSArray, NSDate;

__attribute__((visibility("hidden")))
@interface ATVInternetPhotosAccount : NSObject {
@private
	NSString *_accountName;	// 4 = 0x4
	NSString *_accountID;	// 8 = 0x8
	NSString *_displayName;	// 12 = 0xc
	NSArray *_mediaAssets;	// 16 = 0x10
	NSArray *_subAccounts;	// 20 = 0x14
	NSArray *_mediaCollections;	// 24 = 0x18
	ATVInternetPhotosCollection *_lastModifiedCollection;	// 28 = 0x1c
	NSDate *_modDate;	// 32 = 0x20
	NSDate *_lastCheckedDate;	// 36 = 0x24
	NSString *_accountIconPath;	// 40 = 0x28
}
@property(retain) NSString *accountID;	// G=0x34c120a5; S=0x34c1216d; converted property
@property(retain) NSString *accountIconPath;	// G=0x34c12c1d; S=0x34c12ce5; converted property
@property(retain) NSString *accountName;	// G=0x34c11f09; S=0x34c11fd1; converted property
@property(retain) NSString *displayName;	// G=0x34c12241; S=0x34c12309; converted property
@property(retain) NSDate *lastCheckedDate;	// G=0x34c12a81; S=0x34c12b49; converted property
@property(retain) ATVInternetPhotosCollection *lastModifiedCollection;	// G=0x34c12411; S=0x34c124d9; converted property
@property(retain) NSArray *mediaCollections;	// G=0x34c12749; S=0x34c12811; converted property
@property(retain) NSDate *modDate;	// G=0x34c128e5; S=0x34c129ad; converted property
@property(retain) NSArray *subAccounts;	// G=0x34c125ad; S=0x34c12675; converted property
+ (id)account;	// 0x34c11de5
// converted property getter: - (id)accountID;	// 0x34c120a5
// converted property getter: - (id)accountIconPath;	// 0x34c12c1d
// converted property getter: - (id)accountName;	// 0x34c11f09
- (void)dealloc;	// 0x34c11e21
// converted property getter: - (id)displayName;	// 0x34c12241
// converted property getter: - (id)lastCheckedDate;	// 0x34c12a81
// converted property getter: - (id)lastModifiedCollection;	// 0x34c12411
// converted property getter: - (id)mediaCollections;	// 0x34c12749
// converted property getter: - (id)modDate;	// 0x34c128e5
// converted property setter: - (void)setAccountID:(id)anId;	// 0x34c1216d
// converted property setter: - (void)setAccountIconPath:(id)path;	// 0x34c12ce5
// converted property setter: - (void)setAccountName:(id)name;	// 0x34c11fd1
// converted property setter: - (void)setDisplayName:(id)name;	// 0x34c12309
// converted property setter: - (void)setLastCheckedDate:(id)date;	// 0x34c12b49
// converted property setter: - (void)setLastModifiedCollection:(id)collection;	// 0x34c124d9
// converted property setter: - (void)setMediaCollections:(id)collections;	// 0x34c12811
// converted property setter: - (void)setModDate:(id)date;	// 0x34c129ad
// converted property setter: - (void)setSubAccounts:(id)accounts;	// 0x34c12675
// converted property getter: - (id)subAccounts;	// 0x34c125ad
@end

