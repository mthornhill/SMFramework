/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRUserPasswordAccount.h"

@class AAAccount;

@interface ATVCupidAccount : BRUserPasswordAccount {
@private
	AAAccount *_appleAccount;	// 32 = 0x20
}
@property(readonly, assign) AAAccount *appleAccount;	// G=0x34cab511; @synthesize=_appleAccount
// declared property getter: - (id)appleAccount;	// 0x34cab511
- (void)dealloc;	// 0x34cab4a5
- (void)setPassword:(id)password;	// 0x34cab585
- (id)type;	// 0x34cab565
@end

