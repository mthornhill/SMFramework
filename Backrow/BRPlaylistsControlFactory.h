/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"
#import <Foundation/Foundation.h> // Unknown library

@class NSSet, BRMediaType;

__attribute__((visibility("hidden")))
@interface BRPlaylistsControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	BOOL _showMetadata;	// 4 = 0x4
	BRMediaType *_missingType;	// 8 = 0x8
	NSSet *_mediaTypes;	// 12 = 0xc
	BOOL _useMultilineItems;	// 16 = 0x10
	BOOL _showIconForVideo;	// 17 = 0x11
	BOOL _resolveArtworkFromParent;	// 18 = 0x12
}
@property(readonly, retain) NSSet *mediaTypes;	// G=0x34d77341; converted property
@property(assign) BOOL shouldUseMultilineItems;	// G=0x34d77361; S=0x34d77351; converted property
@property(assign) BOOL showIconForVideo;	// G=0x34d77381; S=0x34d77371; converted property
+ (id)factoryWithMissingType:(id)missingType mediaTypes:(id)types showMetadata:(BOOL)metadata;	// 0x34d76b69
+ (id)factoryWithMissingType:(id)missingType mediaTypes:(id)types showMetadata:(BOOL)metadata resolveArtworkFromParentCollections:(BOOL)parentCollections;	// 0x34d76ba9
- (id)initWithMissingType:(id)missingType mediaTypes:(id)types showMetadata:(BOOL)metadata;	// 0x34d76bed
- (id)initWithMissingType:(id)missingType mediaTypes:(id)types showMetadata:(BOOL)metadata resolveArtworkFromParentCollections:(BOOL)parentCollections;	// 0x34d76c0d
- (BOOL)_showUnplayedIconForAsset:(id)asset;	// 0x34d77391
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x34d76cf5
- (void)dealloc;	// 0x34d76c9d
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x34d7723d
// converted property getter: - (id)mediaTypes;	// 0x34d77341
// converted property setter: - (void)setShouldUseMultilineItems:(BOOL)useMultilineItems;	// 0x34d77351
// converted property setter: - (void)setShowIconForVideo:(BOOL)video;	// 0x34d77371
// converted property getter: - (BOOL)shouldUseMultilineItems;	// 0x34d77361
// converted property getter: - (BOOL)showIconForVideo;	// 0x34d77381
@end

