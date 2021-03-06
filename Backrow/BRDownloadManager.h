/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSMutableArray;

@interface BRDownloadManager : NSObject {
@private
	NSMutableArray *_downloads;	// 4 = 0x4
	NSMutableArray *_playableNotifications;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *downloads;	// G=0x34dc1929; converted property
+ (id)allDownloads;	// 0x34dc0d19
+ (id)displayStringForDownloadEstimatedTimeUntilPlayableForItem:(id)item;	// 0x34dc1215
+ (id)displayStringForDownloadState:(int)downloadState context:(int)context;	// 0x34dc0e55
+ (id)displayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x34dc0ffd
+ (id)downloadManagerForMediaType:(id)mediaType;	// 0x34dc0a7d
+ (id)downloadTestManager;	// 0x34dc0c09
+ (BOOL)downloadsInProgress;	// 0x34dc0cc5
+ (void)initialize;	// 0x34dc0871
+ (void)registerDownloadManager:(id)manager forMediaType:(id)mediaType;	// 0x34dc08c9
+ (void)registerDownloadTestManager:(id)manager;	// 0x34dc0b4d
+ (void)removeDownloadManagerForMediaType:(id)mediaType;	// 0x34dc09b1
+ (id)shortDisplayStringForDownloadState:(int)downloadState;	// 0x34dc0f35
+ (id)shortDisplayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x34dc1111
- (id)init;	// 0x34dc1459
- (void)_assetPlayable:(id)playable;	// 0x34dc1b09
- (void)addDownload:(id)download;	// 0x34dc15a5
- (void)cancelNetworkSpeedTest;	// 0x34dc1d59
- (void)dealloc;	// 0x34dc1525
- (void)deleteDownloadFromITunesQueue:(id)itunesQueue removeFromDisk:(BOOL)disk;	// 0x34dc1915
// converted property getter: - (id)downloads;	// 0x34dc1929
- (id)downloadsWithQualifiedState:(int)qualifiedState;	// 0x34bf362d
- (BOOL)networkDiagnosticsAvailable;	// 0x34dc1d51
- (void)pauseCurrentDownloads;	// 0x34bf36e9
- (void)prioritizeDownload:(id)download;	// 0x34dc19f9
- (void)removeDownload:(id)download;	// 0x34dc170d
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x34dc1d55
@end

