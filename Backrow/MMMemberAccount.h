/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "MMCredential.h"
#import <Foundation/Foundation.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface MMMemberAccount : NSObject <MMCredential> {
@private
	NSString *_name;	// 4 = 0x4
	NSString *_password;	// 8 = 0x8
	NSString *_app_id;	// 12 = 0xc
	NSString *_user_agent;	// 16 = 0x10
}
@property(readonly, retain) NSString *name;	// G=0x34de0ce1; converted property
@property(readonly, retain) NSString *password;	// G=0x34de0cf1; converted property
+ (id)accountWithName:(id)name password:(id)password applicationID:(id)anId;	// 0x34de0dcd
- (id)initWithName:(id)name password:(id)password applicationID:(id)anId;	// 0x34de0d21
- (id)applicationID;	// 0x34de0d11
- (void)dealloc;	// 0x34de0e15
// converted property getter: - (id)name;	// 0x34de0ce1
- (id)owner;	// 0x34de0d01
// converted property getter: - (id)password;	// 0x34de0cf1
@end

