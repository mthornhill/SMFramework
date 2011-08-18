/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMediaParadeLayer, BRMediaParadeProvider;

@interface BRMediaParadeControl : BRControl {
@private
	BRMediaParadeLayer *_layer;	// 44 = 0x2c
	BRMediaParadeProvider *_provider;	// 48 = 0x30
	BOOL _waitingForQueue;	// 52 = 0x34
	BOOL _pumpPrimed;	// 53 = 0x35
}
- (id)init;	// 0x34d213f1
- (void)_queueReady:(id)ready;	// 0x34d217b9
- (void)_startFeeding;	// 0x34d2182d
- (void)_startFeedingWhenQueueReady;	// 0x34d217e5
- (void)controlWasActivated;	// 0x34d21605
- (void)controlWasDeactivated;	// 0x34d21679
- (void)dealloc;	// 0x34d21571
- (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x34d21769
- (void)setImageProxies:(id)proxies;	// 0x34d2171d
- (void)setSerializeArtwork:(BOOL)artwork;	// 0x34d21789
@end

