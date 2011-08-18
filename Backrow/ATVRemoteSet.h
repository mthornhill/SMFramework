/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVRCPatternMatcherDelegate.h"
#import "AppleTV-Structs.h"
#import <Foundation/Foundation.h> // Unknown library

@class NSString, NSArray;

@interface ATVRemoteSet : NSObject <ATVRCPatternMatcherDelegate> {
@private
	NSArray *_remoteSet;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	BOOL _custom;	// 12 = 0xc
}
@property(assign) BOOL custom;	// G=0x34c40d31; S=0x34c40d41; converted property
@property(retain) NSString *name;	// G=0x34c40ce9; S=0x34c40cf9; converted property
- (id)init;	// 0x34c40659
- (id)initWithDictionary:(id)dictionary;	// 0x34c406e1
- (id)_initPatternMatcherArray;	// 0x34c40eb5
- (void)_releasePatternMatchers;	// 0x34c40fb5
- (void)_setupTargetEventForMatcher:(id)matcher index:(int)index;	// 0x34c41011
- (void)_setupTargetRemoteEvents;	// 0x34c40f71
- (void)applyLearnedButtonsToSet:(id)set buttons:(NSRange)buttons;	// 0x34c40e01
// converted property getter: - (BOOL)custom;	// 0x34c40d31
- (void)dealloc;	// 0x34c40929
- (id)encodeToDictionary;	// 0x34c40ac9
- (int)findIdenticalButtonPattern:(id)pattern;	// 0x34c40e61
- (id)getPatternMatcher:(int)matcher;	// 0x34c40a25
- (id)getPatternSet:(int)set;	// 0x34c40a01
- (BOOL)hasExtendedSet;	// 0x34c40c6d
- (BOOL)isEqual:(id)equal;	// 0x34c40d51
- (void)matcherButtonDown:(id)down;	// 0x34c40a45
- (void)matcherButtonRelease:(id)release;	// 0x34c40ac5
// converted property getter: - (id)name;	// 0x34c40ce9
- (int)processEvent:(id)event;	// 0x34c4097d
- (void)resetMatchers;	// 0x34c40ca9
// converted property setter: - (void)setCustom:(BOOL)custom;	// 0x34c40d41
// converted property setter: - (void)setName:(id)name;	// 0x34c40cf9
- (void)setPairingInfo:(unsigned long)info pairingMask:(unsigned long)mask payloadMask:(unsigned long)mask3;	// 0x34c40dad
@end

