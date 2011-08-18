/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSConditionLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRTaskManager : BRSingleton {
@private
	NSMutableArray *_taskQueue;	// 4 = 0x4
	NSConditionLock *_queueLock;	// 8 = 0x8
	int _numberOfTaskThreadsRunning;	// 12 = 0xc
	int _numberOfFinishingThreads;	// 16 = 0x10
}
+ (void)setSingleton:(id)singleton;	// 0x34dbade9
+ (id)singleton;	// 0x34dbaddd
- (id)init;	// 0x34dbadf5
- (void)_processTasks;	// 0x34dbb1a9
- (void)cancelTask:(id)task;	// 0x34dbb04d
- (void)dealloc;	// 0x34dbae91
- (void)scheduleTask:(id)task;	// 0x34dbaee9
@end

