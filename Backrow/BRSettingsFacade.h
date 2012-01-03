/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSArray;

@interface BRSettingsFacade : BRSingleton {
@private
	NSArray *_allMarimbaSlideshowThemeIdentifiers;	// 4 = 0x4
	NSArray *_allMarimbaSlideshowThemeTitleKeys;	// 8 = 0x8
}
@property(assign) BOOL UISoundsEnabled;	// G=0x34dd25ad; S=0x34dd2619; converted property
@property(assign) int audioFormatSetting;	// G=0x34dd2af1; S=0x34dd2b61; converted property
@property(assign) int audioOutputQuality;	// G=0x34dd2bb9; S=0x34dd2bf5; converted property
@property(assign) BOOL crashReportingEnabled;	// G=0x34dd2cd1; S=0x34dd2c4d; converted property
@property(retain) id defaultAudioLanguage;	// G=0x34dd27fd; S=0x34dd2835; converted property
@property(retain) id defaultSubtitleLanguage;	// G=0x34dd276d; S=0x34dd27a5; converted property
@property(assign) BOOL displayNewSlideshowThemes;	// G=0x34dd3641; S=0x34dd3679; converted property
@property(assign) int favoritesSortMode;	// G=0x34dd2f39; S=0x34dd2f75; converted property
@property(retain) id keyboardLanguageKeys;	// G=0x34dd3d4d; S=0x34dd3d81; converted property
@property(retain) id lastUsedKeyboardLanguage;	// G=0x34dd3e21; S=0x34dd3e55; converted property
@property(retain) id marimbaSlideshowDefaultMusicPlaylistID;	// G=0x34dd3ce1; S=0x34dd3d15; converted property
@property(retain) id marimbaSlideshowDefaultMusicServerID;	// G=0x34dd3b49; S=0x34dd3ca9; converted property
@property(retain) id marimbaSlideshowStyle;	// G=0x34dd3ac1; S=0x34dd3a89; converted property
@property(assign) int musicRepeatMode;	// G=0x34dd2915; S=0x34dd294d; converted property
@property(assign) BOOL musicVolumeControlEnabled;	// G=0x34dd2991; S=0x34dd29cd; converted property
@property(assign) BOOL playlistsEverywhereEnabled;	// G=0x34dd2dad; S=0x34dd2de9; converted property
@property(assign) BOOL preferHDVideo;	// G=0x34dd2e9d; S=0x34dd2ed9; converted property
@property(assign) BOOL screenSaverAllowedOverMusic;	// G=0x34dd2e25; S=0x34dd2e61; converted property
@property(assign) BOOL slideshowPanAndZoom;	// G=0x34dd3265; S=0x34dd32a1; converted property
@property(assign) BOOL slideshowPlayMusic;	// G=0x34dd32dd; S=0x34dd3319; converted property
@property(assign) BOOL slideshowRepeat;	// G=0x34dd30d1; S=0x34dd3139; converted property
@property(assign) int slideshowSecondsPerSlide;	// G=0x34dd3021; S=0x34dd3095; converted property
@property(retain) id slideshowSelectedPlaylistName;	// G=0x34dd352d; S=0x34dd3561; converted property
@property(retain) id slideshowSelectedTransitionName;	// G=0x34dd359d; S=0x34dd3605; converted property
@property(assign) BOOL slideshowShuffleMusic;	// G=0x34dd31ed; S=0x34dd3229; converted property
@property(assign) BOOL slideshowShufflePhotos;	// G=0x34dd3175; S=0x34dd31b1; converted property
@property(assign) int videoClosedCaptionMode;	// G=0x34dd269d; S=0x34dd26d5; converted property
+ (void)setSingleton:(id)singleton;	// 0x34dd2455
+ (id)singleton;	// 0x34dd2449
// converted property getter: - (BOOL)UISoundsEnabled;	// 0x34dd25ad
- (id)_availableDefaultAVLanguages;	// 0x34dd4e39
- (id)_existingSlideshowThemeKeys;	// 0x34dd4ee5
- (id)_existingSlideshowThemeTitleKeys;	// 0x34dd4f8d
- (id)_newSlideshowThemeKeys;	// 0x34dd5035
- (id)_newSlideshowThemeTitleKeys;	// 0x34dd507d
- (long)_preferredTrackIDForMedia:(id)media forType:(id)type;	// 0x34dd4b0d
- (void)_removeSavedPreferredTrackIDsForType:(id)type;	// 0x34dd4dcd
- (void)_savePreferredTrackID:(long)anId forMedia:(id)media forType:(id)type;	// 0x34dd4ba5
- (void)_setSlideshowSelectedPlaylistName:(id)name forHost:(id)host;	// 0x34dd491d
- (id)_slideshowSelectedPlaylistNameForHost:(id)host;	// 0x34dd4a3d
// converted property getter: - (int)audioFormatSetting;	// 0x34dd2af1
// converted property getter: - (int)audioOutputQuality;	// 0x34dd2bb9
- (id)availableDefaultAudioLanguages;	// 0x34dd2759
- (id)availableDefaultSubtitleLanguages;	// 0x34dd2745
- (BOOL)bootedFromRecoveryPartition;	// 0x34dd4071
// converted property getter: - (BOOL)crashReportingEnabled;	// 0x34dd2cd1
- (BOOL)crashReportingPreferenceSet;	// 0x34dd2d6d
// converted property getter: - (id)defaultAudioLanguage;	// 0x34dd27fd
// converted property getter: - (id)defaultSubtitleLanguage;	// 0x34dd276d
- (int)deviceActivationState;	// 0x34dd4079
// converted property getter: - (BOOL)displayNewSlideshowThemes;	// 0x34dd3641
// converted property getter: - (int)favoritesSortMode;	// 0x34dd2f39
- (void)flushDiskChanges;	// 0x34dd2525
- (id)hwDeviceName;	// 0x34dd3f25
- (BOOL)isAutomaticTimeZoneSelectionEnabled;	// 0x34dd44f1
- (BOOL)isTimeZoneSet;	// 0x34dd43b5
- (BOOL)keyboardLanguageEnabled:(id)enabled;	// 0x34dd3db9
// converted property getter: - (id)keyboardLanguageKeys;	// 0x34dd3d4d
// converted property getter: - (id)lastUsedKeyboardLanguage;	// 0x34dd3e21
// converted property getter: - (id)marimbaSlideshowDefaultMusicPlaylistID;	// 0x34dd3ce1
// converted property getter: - (id)marimbaSlideshowDefaultMusicServerID;	// 0x34dd3b49
// converted property getter: - (id)marimbaSlideshowStyle;	// 0x34dd3ac1
- (id)marimbaSlideshowThemeIdentifiers;	// 0x34dd36c5
- (id)marimbaSlideshowThemeTitleKeys;	// 0x34dd38b9
// converted property getter: - (int)musicRepeatMode;	// 0x34dd2915
- (float)musicVolume;	// 0x34dd2a59
// converted property getter: - (BOOL)musicVolumeControlEnabled;	// 0x34dd2991
- (id)parentalControlsPasscode;	// 0x34dd2fb1
- (int)parentalControlsYTMode;	// 0x34dd2fe9
// converted property getter: - (BOOL)playlistsEverywhereEnabled;	// 0x34dd2dad
// converted property getter: - (BOOL)preferHDVideo;	// 0x34dd2e9d
- (long)preferredAlternateAudioTrackIDForMedia:(id)media;	// 0x34dd28d1
- (long)preferredSubtitleTrackIDForMedia:(id)media;	// 0x34dd288d
- (BOOL)saveConfiguration:(id)configuration;	// 0x34dd4075
- (void)saveMusicVolume:(float)volume;	// 0x34dd2a95
- (void)savePreferredAlternateAudioTrackID:(long)anId forMedia:(id)media;	// 0x34dd28ed
- (void)savePreferredSubtitleTrackID:(long)anId forMedia:(id)media;	// 0x34dd28a9
// converted property getter: - (BOOL)screenSaverAllowedOverMusic;	// 0x34dd2e25
// converted property setter: - (void)setAudioFormatSetting:(int)setting;	// 0x34dd2b61
// converted property setter: - (void)setAudioOutputQuality:(int)quality;	// 0x34dd2bf5
- (BOOL)setAutomaticTimeZoneSelectionEnabled:(BOOL)enabled;	// 0x34dd455d
// converted property setter: - (void)setCrashReportingEnabled:(BOOL)enabled;	// 0x34dd2c4d
// converted property setter: - (void)setDefaultAudioLanguage:(id)language;	// 0x34dd2835
// converted property setter: - (void)setDefaultSubtitleLanguage:(id)language;	// 0x34dd27a5
- (void)setDeviceActivationFailureState:(int)state;	// 0x34dd4111
- (void)setDeviceActivationWasSkipped:(BOOL)skipped;	// 0x34dd41b5
// converted property setter: - (void)setDisplayNewSlideshowThemes:(BOOL)themes;	// 0x34dd3679
// converted property setter: - (void)setFavoritesSortMode:(int)mode;	// 0x34dd2f75
- (void)setHWDeviceName:(id)name;	// 0x34dd3f9d
- (void)setKeyboardLanguageEnabled:(id)enabled enabled:(BOOL)enabled2;	// 0x34dd3ded
// converted property setter: - (void)setKeyboardLanguageKeys:(id)keys;	// 0x34dd3d81
// converted property setter: - (void)setLastUsedKeyboardLanguage:(id)language;	// 0x34dd3e55
// converted property setter: - (void)setMarimbaSlideshowDefaultMusicPlaylistID:(id)anId;	// 0x34dd3d15
// converted property setter: - (void)setMarimbaSlideshowDefaultMusicServerID:(id)anId;	// 0x34dd3ca9
// converted property setter: - (void)setMarimbaSlideshowStyle:(id)style;	// 0x34dd3a89
// converted property setter: - (void)setMusicRepeatMode:(int)mode;	// 0x34dd294d
// converted property setter: - (void)setMusicVolumeControlEnabled:(BOOL)enabled;	// 0x34dd29cd
// converted property setter: - (void)setPlaylistsEverywhereEnabled:(BOOL)enabled;	// 0x34dd2de9
// converted property setter: - (void)setPreferHDVideo:(BOOL)video;	// 0x34dd2ed9
// converted property setter: - (void)setScreenSaverAllowedOverMusic:(BOOL)music;	// 0x34dd2e61
// converted property setter: - (void)setSlideshowPanAndZoom:(BOOL)zoom;	// 0x34dd32a1
// converted property setter: - (void)setSlideshowPlayMusic:(BOOL)music;	// 0x34dd3319
// converted property setter: - (void)setSlideshowRepeat:(BOOL)repeat;	// 0x34dd3139
// converted property setter: - (void)setSlideshowSecondsPerSlide:(int)slide;	// 0x34dd3095
// converted property setter: - (void)setSlideshowSelectedPlaylistName:(id)name;	// 0x34dd3561
// converted property setter: - (void)setSlideshowSelectedTransitionName:(id)name;	// 0x34dd3605
// converted property setter: - (void)setSlideshowShuffleMusic:(BOOL)music;	// 0x34dd3229
// converted property setter: - (void)setSlideshowShufflePhotos:(BOOL)photos;	// 0x34dd31b1
- (BOOL)setTimeZoneFromCityID:(id)cityID;	// 0x34dd4225
// converted property setter: - (void)setUISoundsEnabled:(BOOL)enabled;	// 0x34dd2619
- (BOOL)setUserAllowedAutomaticTimeZoneSelection:(BOOL)selection;	// 0x34dd444d
// converted property setter: - (void)setVideoClosedCaptionMode:(int)mode;	// 0x34dd26d5
// converted property getter: - (BOOL)slideshowPanAndZoom;	// 0x34dd3265
// converted property getter: - (BOOL)slideshowPlayMusic;	// 0x34dd32dd
- (id)slideshowPlaylists;	// 0x34dd3355
// converted property getter: - (BOOL)slideshowRepeat;	// 0x34dd30d1
// converted property getter: - (int)slideshowSecondsPerSlide;	// 0x34dd3021
// converted property getter: - (id)slideshowSelectedPlaylistName;	// 0x34dd352d
// converted property getter: - (id)slideshowSelectedTransitionName;	// 0x34dd359d
// converted property getter: - (BOOL)slideshowShuffleMusic;	// 0x34dd31ed
// converted property getter: - (BOOL)slideshowShufflePhotos;	// 0x34dd3175
- (id)slideshowTransitionNames;	// 0x34dd3599
- (id)syncHostName;	// 0x34dd3ee9
- (id)timeZone;	// 0x34dd4205
- (id)timeZoneCityDisplayNameIncludingCountry:(BOOL)country;	// 0x34dd46c9
- (id)timeZoneCityID;	// 0x34dd4801
- (void)updateHostID:(id)anId to:(id)to;	// 0x34dd2461
- (BOOL)userAllowedAutomaticTimeZoneSelection;	// 0x34dd4411
- (id)versionEFI;	// 0x34dd3edd
- (id)versionGF;	// 0x34dd3ee5
- (id)versionIR;	// 0x34dd3ee1
- (id)versionOS;	// 0x34dd3ed5
- (id)versionOSBuild;	// 0x34dd3ed9
- (id)versionSoftware;	// 0x34dd3e8d
- (id)versionSoftwareBuild;	// 0x34dd3ed1
// converted property getter: - (int)videoClosedCaptionMode;	// 0x34dd269d
- (BOOL)wasDeviceActivationSkipped;	// 0x34dd4179
- (BOOL)wasTimeZoneSetByCoreLocation;	// 0x34dd4489
@end
