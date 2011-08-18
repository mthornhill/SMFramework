/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <Foundation/Foundation.h> // Unknown library

@class ATVSedonaCatalogItem;

__attribute__((visibility("hidden")))
@interface ATVSedonaRateListItemProvider : NSObject <BRProvider> {
@private
	ATVSedonaCatalogItem *_catalogItem;	// 4 = 0x4
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x34c7141d
- (id)init;	// 0x34c71451
- (id)initWithCatalogItem:(id)catalogItem;	// 0x34c71469
- (id)controlFactory;	// 0x34c71565
- (id)dataAtIndex:(long)index;	// 0x34c7153d
- (long)dataCount;	// 0x34c7154d
- (void)dealloc;	// 0x34c714b5
- (id)hashForDataAtIndex:(long)index;	// 0x34c714f9
@end

