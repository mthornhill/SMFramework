/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAccount.h"

@class NSString;

@interface BRUserPasswordAccount : BRAccount {
@private
	NSString *_password;	// 28 = 0x1c
}
@property(retain) NSString *password;	// G=0x34d9e241; S=0x34d9e251; converted property
- (void)_readProtectedInfo:(id)info;	// 0x34d9e379
- (void)_writeProtectedInfo:(id)info;	// 0x34d9e335
- (void)dealloc;	// 0x34d9e1fd
// converted property getter: - (id)password;	// 0x34d9e241
// converted property setter: - (void)setPassword:(id)password;	// 0x34d9e251
@end

