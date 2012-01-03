/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuItem.h"

@class NSArray;

@interface BRHiddenSelectionMenuItem : BRMenuItem {
@private
	NSArray *_events;	// 136 = 0x88
	int _eventCount;	// 140 = 0x8c
}
@property(retain) NSArray *events;	// G=0x34d109ed; S=0x34d109fd; converted property
@property(retain) id hiddenSelectionHandler;	// G=0x34d10a61; S=0x34d10a45; converted property
- (BOOL)brEventAction:(id)action;	// 0x34d108bd
- (void)dealloc;	// 0x34d10879
// converted property getter: - (id)events;	// 0x34d109ed
// converted property getter: - (id)hiddenSelectionHandler;	// 0x34d10a61
// converted property setter: - (void)setEvents:(id)events;	// 0x34d109fd
// converted property setter: - (void)setHiddenSelectionHandler:(id)handler;	// 0x34d10a45
@end
