/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRContextMenuUtility.h"
#import <Foundation/Foundation.h> // Unknown library


@interface BRMusicContextMenuUtility : NSObject <BRContextMenuUtility> {
@private
	BOOL _onTheGoEnabled;	// 4 = 0x4
	BOOL _startGeniusEnabled;	// 5 = 0x5
	BOOL _airTunesSettingsEnabled;	// 6 = 0x6
	BOOL _browseArtistEnabled;	// 7 = 0x7
	BOOL _browseAlbumEnabled;	// 8 = 0x8
	BOOL _navigateToArtistForBrowseArtist;	// 9 = 0x9
	BOOL _navigateToAlbumForBrowseAlbum;	// 10 = 0xa
}
@property(assign) BOOL airTunesSettingsEnabled;	// G=0x34dcfa29; S=0x34dcfa19; converted property
@property(assign) BOOL browseAlbumEnabled;	// G=0x34dcfa69; S=0x34dcfa59; converted property
@property(assign) BOOL browseArtistEnabled;	// G=0x34dcfa49; S=0x34dcfa39; converted property
@property(assign) BOOL navigateToAlbumForBrowseAlbum;	// G=0x34dcfaa9; S=0x34dcfa99; converted property
@property(assign) BOOL navigateToArtistForBrowseArtist;	// G=0x34dcfa89; S=0x34dcfa79; converted property
@property(assign) BOOL onTheGoEnabled;	// G=0x34dcf9e9; S=0x34dcf9d9; converted property
@property(assign) BOOL startGeniusEnabled;	// G=0x34dcfa09; S=0x34dcf9f9; converted property
+ (void)setImplementationClass:(Class)aClass;	// 0x34dcf959
+ (id)utility;	// 0x34dcf91d
- (id)init;	// 0x34dcf965
// converted property getter: - (BOOL)airTunesSettingsEnabled;	// 0x34dcfa29
// converted property getter: - (BOOL)browseAlbumEnabled;	// 0x34dcfa69
// converted property getter: - (BOOL)browseArtistEnabled;	// 0x34dcfa49
- (id)contextMenuProviderForObject:(id)object target:(id)target selector:(SEL)selector;	// 0x34dcfab9
- (void)handleSelectionForObject:(id)object sender:(id)sender context:(id)context;	// 0x34dcfabd
// converted property getter: - (BOOL)navigateToAlbumForBrowseAlbum;	// 0x34dcfaa9
// converted property getter: - (BOOL)navigateToArtistForBrowseArtist;	// 0x34dcfa89
// converted property getter: - (BOOL)onTheGoEnabled;	// 0x34dcf9e9
// converted property setter: - (void)setAirTunesSettingsEnabled:(BOOL)enabled;	// 0x34dcfa19
// converted property setter: - (void)setBrowseAlbumEnabled:(BOOL)enabled;	// 0x34dcfa59
// converted property setter: - (void)setBrowseArtistEnabled:(BOOL)enabled;	// 0x34dcfa39
// converted property setter: - (void)setNavigateToAlbumForBrowseAlbum:(BOOL)browseAlbum;	// 0x34dcfa99
// converted property setter: - (void)setNavigateToArtistForBrowseArtist:(BOOL)browseArtist;	// 0x34dcfa79
// converted property setter: - (void)setOnTheGoEnabled:(BOOL)enabled;	// 0x34dcf9d9
// converted property setter: - (void)setStartGeniusEnabled:(BOOL)enabled;	// 0x34dcf9f9
// converted property getter: - (BOOL)startGeniusEnabled;	// 0x34dcfa09
@end

