/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaAsset.h"
#import <Foundation/Foundation.h> // Unknown library

@protocol BRMediaProvider;

@interface BRBaseMediaAsset : NSObject <BRMediaAsset> {
@private
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x34cdd12d; S=0x34cdd0f5; converted property
@property(assign) unsigned bookmarkTimeInSeconds;	// G=0x34cdd0f9; S=0x34cdd0d9; converted property
@property(assign) BOOL hasBeenPlayed;	// G=0x34cdd001; S=0x34cdd005; converted property
@property(retain) id lastPlayed;	// G=0x34cdd131; S=0x34cdd135; converted property
@property(assign) float userStarRating;	// G=0x34cdd091; S=0x34cdd099; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x34cdce81
- (id)artist;	// 0x34cdcf3d
- (id)artistCollection;	// 0x34cdd19d
- (id)artistForSorting;	// 0x34cdcf41
- (id)assetID;	// 0x34cdcf21
- (id)authorName;	// 0x34cdd2a1
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x34cdd12d
// converted property getter: - (unsigned)bookmarkTimeInSeconds;	// 0x34cdd0f9
- (id)broadcaster;	// 0x34cdd07d
- (BOOL)canBePlayedInShuffle;	// 0x34cdd2bd
- (id)cast;	// 0x34cdcf95
- (id)category;	// 0x34cdd2ad
- (void)cleanUpPlaybackContext;	// 0x34cdd389
- (BOOL)closedCaptioned;	// 0x34cdd0a9
- (id)collections;	// 0x34cdd1e9
- (id)composer;	// 0x34cdd0bd
- (id)composerForSorting;	// 0x34cdd0c1
- (id)copyright;	// 0x34cdcf89
- (void *)createMovieWithProperties:(void *)properties count:(long)count;	// 0x34cdd3a5
- (id)dateAcquired;	// 0x34cdd031
- (id)dateAcquiredString;	// 0x34cdd209
- (id)dateCreated;	// 0x34cdd035
- (id)dateCreatedString;	// 0x34cdd22d
- (id)datePublished;	// 0x34cdd039
- (id)datePublishedString;	// 0x34cdd251
- (void)dealloc;	// 0x34cdcecd
- (id)directors;	// 0x34cdcfb5
- (BOOL)dolbyDigital;	// 0x34cdd0ad
- (long)duration;	// 0x34cdcf8d
- (unsigned)episode;	// 0x34cdd089
- (id)episodeNumber;	// 0x34cdd081
- (BOOL)forceHDCPProtection;	// 0x34cdd0d1
- (id)genres;	// 0x34cdd045
- (int)grFormat;	// 0x34cdd2b5
// converted property getter: - (BOOL)hasBeenPlayed;	// 0x34cdd001
- (BOOL)hasCoverArt;	// 0x34cdd02d
- (BOOL)hasVideoContent;	// 0x34cdd0c5
- (unsigned)hash;	// 0x34cdd361
- (id)imageProxy;	// 0x34cdd015
- (id)imageProxyWithBookMarkTimeInMS:(unsigned)ms;	// 0x34cdd019
- (void)incrementPerformanceCount;	// 0x34cdcff5
- (void)incrementPerformanceOrSkipCount:(unsigned)count;	// 0x34cdcff9
- (BOOL)isAvailable;	// 0x34cdd2f9
- (BOOL)isCheckedOut;	// 0x34cdd3ad
- (BOOL)isDisabled;	// 0x34cdd0c9
- (BOOL)isEqual:(id)equal;	// 0x34cdd305
- (BOOL)isExplicit;	// 0x34cdd395
- (BOOL)isHD;	// 0x34cdd0a1
- (BOOL)isInappropriate;	// 0x34cdd2b1
- (BOOL)isLocal;	// 0x34cdd2c1
- (BOOL)isPlaying;	// 0x34cdd3e5
- (BOOL)isPlayingOrPaused;	// 0x34cdd50d
- (BOOL)isProtectedContent;	// 0x34cdd0cd
- (BOOL)isValid;	// 0x34cdcf25
- (BOOL)isWidescreen;	// 0x34cdd0a5
- (id)keywords;	// 0x34cdd2a5
// converted property getter: - (id)lastPlayed;	// 0x34cdd131
- (void)logDescription;	// 0x34cdd275
- (id)mediaCollections;	// 0x34cdd08d
- (id)mediaDescription;	// 0x34cdcf85
- (id)mediaObjectID;	// 0x34cdcf29
- (id)mediaSummary;	// 0x34cdcf81
- (id)mediaType;	// 0x34cdd03d
- (id)mediaURL;	// 0x34cdd009
- (long)parentalControlRatingRank;	// 0x34cdd391
- (long)parentalControlRatingSystemID;	// 0x34cdd38d
- (void)performSelector:(SEL)selector target:(id)target;	// 0x34cdd3b1
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x34cdd3c9
- (long)performanceCount;	// 0x34cdcf91
- (int)physicalMediaID;	// 0x34cdd06d
- (BOOL)playable;	// 0x34cdd399
- (id)playbackMetadata;	// 0x34cdd39d
- (id)playbackRightsOwner;	// 0x34cdd0d5
- (void)preparePlaybackContext;	// 0x34cdd385
- (id)previewURL;	// 0x34cdd00d
- (id)primaryCollection;	// 0x34cdd199
- (int)primaryCollectionOrder;	// 0x34cdd065
- (id)primaryCollectionTitle;	// 0x34cdd1a1
- (id)primaryCollectionTitleForSorting;	// 0x34cdd1c5
- (id)primaryGenre;	// 0x34cdd041
- (id)producers;	// 0x34cdcfd5
- (id)provider;	// 0x34cdcf11
- (id)publisher;	// 0x34cdd0b9
- (id)rating;	// 0x34cdd09d
- (id)resolution;	// 0x34cdd281
- (unsigned)season;	// 0x34cdd085
- (id)seriesName;	// 0x34cdd075
- (id)seriesNameForSorting;	// 0x34cdd079
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x34cdd0f5
// converted property setter: - (void)setBookmarkTimeInSeconds:(unsigned)seconds;	// 0x34cdd0d9
// converted property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x34cdd005
// converted property setter: - (void)setLastPlayed:(id)played;	// 0x34cdd135
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;	// 0x34cdd3a1
// converted property setter: - (void)setUserStarRating:(float)rating;	// 0x34cdd099
- (void)skip;	// 0x34cdd2fd
- (id)sourceID;	// 0x34cdd3a9
- (float)starRating;	// 0x34cdd0b1
- (id)startDate;	// 0x34cdd16d
- (unsigned)startTimeInMS;	// 0x34cdd169
- (unsigned)startTimeInSeconds;	// 0x34cdd139
- (unsigned)stopTimeInMS;	// 0x34cdd195
- (unsigned)stopTimeInSeconds;	// 0x34cdd171
- (id)title;	// 0x34cdcf45
- (id)titleForSorting;	// 0x34cdcf6d
- (id)trickPlayURL;	// 0x34cdd011
// converted property getter: - (float)userStarRating;	// 0x34cdd091
- (id)viewCount;	// 0x34cdd2a9
- (void)willBeDeleted;	// 0x34cdd301
- (void)willBeginPlayback;	// 0x34cdcffd
@end

