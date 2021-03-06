/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSMutableData, BRImageManager, BRImageLoadJob;

__attribute__((visibility("hidden")))
@interface BRImageLoadDelegate : NSObject {
@private
	BRImageManager *_manager;	// 4 = 0x4
	BRImageLoadJob *_job;	// 8 = 0x8
	NSMutableData *_data;	// 12 = 0xc
}
@property(readonly, retain) BRImageLoadJob *job;	// G=0x34dcac8d; converted property
+ (id)imageLoadDelegateForManager:(id)manager withJob:(id)job;	// 0x34dcaaad
- (id)initForManager:(id)manager withJob:(id)job;	// 0x34dcaae5
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x34dcabed
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x34dcac21
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x34dcab99
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x34dcac89
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x34dcabe9
- (void)connectionDidFinishLoading:(id)connection;	// 0x34dcac65
- (id)content;	// 0x34dcac9d
- (void)dealloc;	// 0x34dcab41
// converted property getter: - (id)job;	// 0x34dcac8d
@end

