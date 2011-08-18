/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library
#import "ATVScreenSaverPluginProtocol.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface ATVBlackScreenSaver : NSObject <ATVScreenSaverPluginProtocol> {
@private
	BRControl *_blackShroudOfDeath;	// 4 = 0x4
}
- (id)init;	// 0x34c47139
- (void)dealloc;	// 0x34c471b9
- (id)screenSaverControl;	// 0x34c471fd
- (void)setScreenSaverAutoFired:(BOOL)fired;	// 0x34c4720d
- (BOOL)usesVideoPlayback;	// 0x34c47211
@end

