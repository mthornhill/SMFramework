/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class BRScrollControl;

__attribute__((visibility("hidden")))
@interface ScrollAnimationDelegate : NSObject {
@private
	BRScrollControl *_scroll;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithScroll:(id)scroll;	// 0x34d2f7bd
- (void)animationDidStart:(id)animation;	// 0x34d2f825
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x34d2f8b1
- (void)clearScroll;	// 0x34d2f815
- (BOOL)scrolling;	// 0x34d2f7fd
@end

