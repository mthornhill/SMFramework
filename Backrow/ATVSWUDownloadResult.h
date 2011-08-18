/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVSWUDownloadResult : NSObject {
@private
	BOOL _canceled;	// 4 = 0x4
	NSString *_failedURL;	// 8 = 0x8
}
+ (id)resultWithFailedURL:(id)failedURL wasCanceled:(BOOL)canceled;	// 0x34c51dfd
- (id)initWithFailedURL:(id)failedURL wasCanceled:(BOOL)canceled;	// 0x34c51e35
- (void)dealloc;	// 0x34c51e91
- (id)missingFileURL;	// 0x34c51ee5
- (BOOL)wasCanceled;	// 0x34c51ed5
@end

