/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class AlertInfo;

__attribute__((visibility("hidden")))
@interface ActionManager : NSObject {
@private
	AlertInfo *mAlertInfo;	// 4 = 0x4
}
+ (void)cleanup;	// 0x34dec798
+ (id)instance;	// 0x34dec7cc
- (id)init;	// 0x34deb6a0
- (id)alertMessage;	// 0x34deb900
- (id)alertType;	// 0x34deb978
- (id)alertUrlString;	// 0x34deb8a0
- (void)dealloc;	// 0x34dec820
- (id)getAlert;	// 0x34deb934
- (id)getDictionary;	// 0x34deb7c4
- (BOOL)haveAlert;	// 0x34deb684
- (void)registerAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x34debdc8
- (void)registerAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x34debca8
- (void)registerAlertByPriority:(id)priority;	// 0x34dec978
- (void)registerBadCredentialsErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x34dec228
- (void)registerBadCredentialsErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x34dec108
- (void)registerErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x34debff8
- (void)registerErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x34debed8
- (void)registerFatalErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x34dec688
- (void)registerFatalErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x34dec568
- (void)registerNoNetworkErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x34dec458
- (void)registerNoNetworkErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x34dec338
- (void)registerUrlAlert:(id)alert urlStr:(id)str error:(unsigned)error priority:(unsigned)priority;	// 0x34debb80
- (void)registerUrlAlert:(id)alert urlStr:(id)str error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x34deba48
- (void)removeAlert;	// 0x34dec880
- (id)stringActioninJson;	// 0x34deb734
@end
