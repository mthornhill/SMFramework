/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRDataStoreProvider.h"


@interface BRSeriesProvider : BRDataStoreProvider {
}
- (id)initWithDataStore:(id)dataStore;	// 0x34d887d1
- (void)_dataStoreInsertionNotification:(id)notification;	// 0x34d88931
- (void)_dataStoreModificationNotification:(id)notification;	// 0x34d88995
- (void)_dataStoreRemovedNotification:(id)notification;	// 0x34d889f9
- (void)_databaseObjectWasAdded:(id)added;	// 0x34d88a5d
- (void)dealloc;	// 0x34d888a1
- (id)hashForDataAtIndex:(long)index;	// 0x34d888f5
@end

