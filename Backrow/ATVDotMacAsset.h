/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoMediaAsset.h"

@class NSString, ATVDotMacSecondaryAccount;

__attribute__((visibility("hidden")))
@interface ATVDotMacAsset : BRPhotoMediaAsset {
@private
	NSString *_parentAccountName;	// 40 = 0x28
	NSString *_parentCollectionIdentifier;	// 44 = 0x2c
	ATVDotMacSecondaryAccount *_secondaryAccount;	// 48 = 0x30
	NSString *_dotMacIdentifier;	// 52 = 0x34
	NSString *_dateString;	// 56 = 0x38
}
@property(retain) NSString *dotMacIdentifier;	// G=0x34bfb0cd; S=0x34bfb195; converted property
@property(retain) NSString *parentAccountName;	// G=0x34bfad95; S=0x34bfae5d; converted property
@property(retain) NSString *parentCollectionIdentifier;	// G=0x34bfaf31; S=0x34bfaff9; converted property
@property(retain) ATVDotMacSecondaryAccount *secondaryAccount;	// G=0x34bfabf9; S=0x34bfacc1; converted property
+ (id)assetWithParentAccountName:(id)parentAccountName parentCollectionIdentifier:(id)identifier secondaryAccount:(id)account assetInfo:(id)info;	// 0x34bfa9e1
- (id)initWithParentAccountName:(id)parentAccountName parentCollectionIdentifier:(id)identifier secondaryAccount:(id)account assetInfo:(id)info;	// 0x34bfaa31
- (void)configureWithAssetInfo:(id)assetInfo;	// 0x34bfb389
- (id)dateTaken;	// 0x34bfb269
- (void)dealloc;	// 0x34bfab29
// converted property getter: - (id)dotMacIdentifier;	// 0x34bfb0cd
- (id)imageProxy;	// 0x34bfabd9
- (BOOL)isLocal;	// 0x34bfabb5
- (id)mediaType;	// 0x34bfabb9
// converted property getter: - (id)parentAccountName;	// 0x34bfad95
// converted property getter: - (id)parentCollectionIdentifier;	// 0x34bfaf31
// converted property getter: - (id)secondaryAccount;	// 0x34bfabf9
// converted property setter: - (void)setDotMacIdentifier:(id)identifier;	// 0x34bfb195
// converted property setter: - (void)setParentAccountName:(id)name;	// 0x34bfae5d
// converted property setter: - (void)setParentCollectionIdentifier:(id)identifier;	// 0x34bfaff9
// converted property setter: - (void)setSecondaryAccount:(id)account;	// 0x34bfacc1
@end

