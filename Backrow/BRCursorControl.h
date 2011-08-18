/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRHorizontalSegmentedWidget, NSTimer, BRCursorLayer;

@interface BRCursorControl : BRControl {
@private
	BRControl *_trackedControl;	// 44 = 0x2c
	BRControl *_previousTrackedControl;	// 48 = 0x30
	BRCursorLayer *_cursorLayer;	// 52 = 0x34
	int _style;	// 56 = 0x38
	BOOL _cursorInactive;	// 60 = 0x3c
	BRHorizontalSegmentedWidget *_previousBadge;	// 64 = 0x40
	BRHorizontalSegmentedWidget *_badge;	// 68 = 0x44
	NSTimer *_removePreviousBadgeTimer;	// 72 = 0x48
}
@property(assign) BOOL cursorInactive;	// G=0x34cfee5d; S=0x34cfedad; converted property
@property(readonly, retain) BRCursorLayer *cursorLayer;	// G=0x34cfee6d; converted property
@property(assign) int cursorStyle;	// G=0x34cfed9d; S=0x34cfeced; converted property
- (id)init;	// 0x34cfeab1
- (void)_addCursor;	// 0x34cff039
- (void)_cursorFrameChanged:(id)changed;	// 0x34cff909
- (void)_focusChanged:(id)changed;	// 0x34cff971
- (void)_removeCursor;	// 0x34cff10d
- (void)_removePreviousBadgeTimerFired:(id)fired;	// 0x34cffd71
- (void)_removePreviousTrackedControl;	// 0x34cffdc9
- (void)_trackFocusedControl:(id)control;	// 0x34cff6f5
- (void)_trackedBadgeUpdated:(id)updated;	// 0x34cff91d
- (void)_updateBadgeForTrackedControl;	// 0x34cffd41
- (void)_updateCursorPositioning;	// 0x34cff17d
- (void)_updateMyBadge:(id *)badge withTrackedControl:(id)trackedControl;	// 0x34cff9f1
- (void)_updatePreviousBadge;	// 0x34cffd11
- (void)controlWasActivated;	// 0x34cfee7d
// converted property getter: - (BOOL)cursorInactive;	// 0x34cfee5d
// converted property getter: - (id)cursorLayer;	// 0x34cfee6d
// converted property getter: - (int)cursorStyle;	// 0x34cfed9d
- (void)dealloc;	// 0x34cfeba5
- (void)layoutSubcontrols;	// 0x34cfeeb9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x34cfeecd
- (id)preferredActionForKey:(id)key;	// 0x34cfef75
// converted property setter: - (void)setCursorInactive:(BOOL)inactive;	// 0x34cfedad
// converted property setter: - (void)setCursorStyle:(int)style;	// 0x34cfeced
- (void)setOpacity:(float)opacity;	// 0x34cff5a5
@end

