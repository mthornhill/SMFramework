/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATViTunesKeyValueStoreGetItem : NSObject {
@private
	NSString *key;	// 4 = 0x4
	NSString *sinceVersion;	// 8 = 0x8
}
+ (id)getItemWithKey:(id)key sinceVersion:(id)version;	// 0x34c764e1
- (id)_initWithKey:(id)key withSinceVersion:(id)sinceVersion;	// 0x34c76405
- (void)dealloc;	// 0x34c76489
@end

