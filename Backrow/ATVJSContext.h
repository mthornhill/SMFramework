/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <Foundation/Foundation.h> // Unknown library

@class ATVJSStorage, ATVMerchant, ATVJSRoot;

__attribute__((visibility("hidden")))
@interface ATVJSContext : NSObject {
@private
	ATVMerchant *_merchant;	// 4 = 0x4
	OpaqueJSContext *_context;	// 8 = 0x8
	dispatch_queue_s *_queue;	// 12 = 0xc
	ATVJSStorage *_atvLocalStorage;	// 16 = 0x10
	ATVJSStorage *_atvSessionStorage;	// 20 = 0x14
	ATVJSRoot *_atvRoot;	// 24 = 0x18
}
@property(retain, nonatomic) ATVJSStorage *atvLocalStorage;	// G=0x34cb3eed; S=0x34cb3efd; @synthesize=_atvLocalStorage
@property(retain, nonatomic) ATVJSRoot *atvRoot;	// G=0x34cb3f55; S=0x34cb3f65; @synthesize=_atvRoot
@property(retain, nonatomic) ATVJSStorage *atvSessionStorage;	// G=0x34cb3f21; S=0x34cb3f31; @synthesize=_atvSessionStorage
@property(assign, nonatomic) OpaqueJSContext *context;	// G=0x34cb3ead; S=0x34cb3ebd; @synthesize=_context
@property(readonly, assign, nonatomic) ATVMerchant *merchant;	// G=0x34cb3e9d; @synthesize=_merchant
@property(assign, nonatomic) dispatch_queue_s *queue;	// G=0x34cb3ecd; S=0x34cb3edd; @synthesize=_queue
+ (id)contextFromJSContext:(OpaqueJSContext *)jscontext;	// 0x34cb3311
+ (id)contextWithMerchant:(id)merchant;	// 0x34cb32d1
- (id)initWithMerchant:(id)merchant;	// 0x34cb31f9
- (void)_setupGlobalObjects;	// 0x34cb3f89
- (void)appEntry;	// 0x34cb47a1
- (void)appExit;	// 0x34cb47bd
// declared property getter: - (id)atvLocalStorage;	// 0x34cb3eed
// declared property getter: - (id)atvRoot;	// 0x34cb3f55
// declared property getter: - (id)atvSessionStorage;	// 0x34cb3f21
- (void)authenticateUsername:(id)username password:(id)password object:(id)object completionHandler:(id)handler;	// 0x34cb45a1
- (void)callFunction:(id)function;	// 0x34cb3e59
- (void)callFunction:(id)function withArguments:(id)arguments;	// 0x34cb3e79
- (void)callFunction:(id)function withArguments:(id)arguments completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x34cb3979
// declared property getter: - (OpaqueJSContext *)context;	// 0x34cb3ead
- (void)dealloc;	// 0x34cb3321
- (void)destroyJSContext;	// 0x34cb3375
- (void)evaluateBlockInContextsQueue:(id)contextsQueue;	// 0x34cb3469
- (void)evaluateScript:(id)script completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x34cb3531
- (void)evaluateScriptAtURL:(id)url completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x34cb377d
- (BOOL)generateRequest:(id)request;	// 0x34cb4329
- (void)logout;	// 0x34cb4785
// declared property getter: - (id)merchant;	// 0x34cb3e9d
- (void)pageLoad:(id)load;	// 0x34cb47d9
- (void)pageUnload:(id)unload;	// 0x34cb4819
// declared property getter: - (dispatch_queue_s *)queue;	// 0x34cb3ecd
// declared property setter: - (void)setAtvLocalStorage:(id)storage;	// 0x34cb3efd
// declared property setter: - (void)setAtvRoot:(id)root;	// 0x34cb3f65
// declared property setter: - (void)setAtvSessionStorage:(id)storage;	// 0x34cb3f31
// declared property setter: - (void)setContext:(OpaqueJSContext *)context;	// 0x34cb3ebd
// declared property setter: - (void)setQueue:(dispatch_queue_s *)queue;	// 0x34cb3edd
@end
