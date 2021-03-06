/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class BRListView;

__attribute__((visibility("hidden")))
@interface ListViewAnimationDelegate : NSObject {
@private
	BRListView *_list;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithList:(id)list;	// 0x34d15661
- (void)animationDidStart:(id)animation;	// 0x34d15749
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x34d1575d
- (void)clearScroll;	// 0x34d156a1
- (void)decrementBalance;	// 0x34d156f5
- (void)incrementBalance;	// 0x34d156b1
- (BOOL)scrolling;	// 0x34d15731
@end

