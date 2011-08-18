/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSString;

@interface BRPreferences : NSObject {
@private
	NSString *_domain;	// 4 = 0x4
}
@property(readonly, retain) NSString *domain;	// G=0x34dd1e65; converted property
+ (id)sharedFrontRowPreferences;	// 0x34dd230d
- (id)initWithDomain:(id)domain;	// 0x34dd1dd1
- (BOOL)boolForKey:(id)key;	// 0x34dd2051
- (BOOL)boolForKey:(id)key withValueForMissingPrefs:(BOOL)missingPrefs;	// 0x34dd2099
- (BOOL)canSetPreferencesForKey:(id)key;	// 0x34dd2161
- (void)dealloc;	// 0x34dd1e21
- (id)descriptionForKey:(id)key;	// 0x34dd2121
// converted property getter: - (id)domain;	// 0x34dd1e65
- (double)doubleForKey:(id)key;	// 0x34dd2011
- (float)floatForKey:(id)key;	// 0x34dd1f81
- (float)floatForKey:(id)key withValueForMissingPrefs:(float)missingPrefs;	// 0x34dd1fc9
- (int)integerForKey:(id)key;	// 0x34dd1ef1
- (int)integerForKey:(id)key withValueForMissingPrefs:(int)missingPrefs;	// 0x34dd1f39
- (id)objectForKey:(id)key;	// 0x34dd1eb1
- (BOOL)setBool:(BOOL)aBool forKey:(id)key;	// 0x34dd227d
- (BOOL)setDouble:(double)aDouble forKey:(id)key;	// 0x34dd2231
- (BOOL)setFloat:(float)aFloat forKey:(id)key;	// 0x34dd21e9
- (BOOL)setInteger:(int)integer forKey:(id)key;	// 0x34dd21a1
- (BOOL)setObject:(id)object forKey:(id)key;	// 0x34dd22c5
- (id)stringForKey:(id)key;	// 0x34dd20e1
- (void)syncNow;	// 0x34dd1e75
@end

