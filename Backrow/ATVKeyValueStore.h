/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString;

@interface ATVKeyValueStore : NSObject {
@private
	sqlite3 *_db;	// 4 = 0x4
	dispatch_queue_s *_dbQueue;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
}
+ (id)defaultStore;	// 0x34c76679
- (void)_dbDataValuesForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x34c78855
- (void)_dbDeleteCleanRowsNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x34c78ecd
- (void)_dbDropAllWithCompletionHandler:(id)completionHandler;	// 0x34c79031
- (void)_dbSetDataValues:(id)values versions:(id)versions forKeys:(id)keys dirtyFlag:(BOOL)flag;	// 0x34c78525
- (void)_dbVersionsForKeys:(id)keys handler:(id)handler;	// 0x34c78261
- (void)_getItemsFromKVSWithKeys:(id)keys resultValues:(id)values sinceVersions:(id)versions handler:(id)handler;	// 0x34c77e79
- (id)_initWithDomain:(id)domain withCacheFilename:(id)cacheFilename;	// 0x34c76e11
- (void)_internalPutItemsToKVS:(id)kvs resolvedKeys:(id)keys resolver:(id)resolver completionHandler:(id)handler;	// 0x34c778ad
- (void)_objectsForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x34c775ed
- (void)_putItemsToKVS:(id)kvs resolver:(id)resolver completionHandler:(id)handler;	// 0x34c77869
- (void)_setObjects:(id)objects forKeys:(id)keys resolver:(id)resolver handler:(id)handler;	// 0x34c77151
- (void)dealloc;	// 0x34c76765
- (id)objectForKey:(id)key;	// 0x34c76a25
- (void)objectForKey:(id)key option:(int)option completionHandler:(id)handler;	// 0x34c768e1
- (void)objectForKey:(id)key option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x34c76921
- (void)objectsForKeys:(id)keys option:(int)option completionHandler:(id)handler;	// 0x34c76901
- (void)objectsForKeys:(id)keys option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x34c767f1
- (void)purgeCacheDataNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x34c76cd1
- (void)resetForRetailWithCompletionHandler:(id)completionHandler;	// 0x34c76d79
- (void)setObject:(id)object forKey:(id)key;	// 0x34c76811
- (void)setObject:(id)object forKey:(id)key withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x34c76885
- (void)setObjects:(id)objects forKeys:(id)keys;	// 0x34c76861
- (void)setObjects:(id)objects forKeys:(id)keys withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x34c767d1
@end

