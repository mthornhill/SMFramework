/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface IndexData : NSObject {
@private
	int flags;	// 4 = 0x4
	int ivSize;	// 8 = 0x8
	NSArray *chunkList;	// 12 = 0xc
}
- (id)initWithBuffer:(id)buffer length:(unsigned)length;	// 0x34de7f78
- (void)dealloc;	// 0x34de7f18
- (id)getChunks;	// 0x34de7f04
- (int)getFlags;	// 0x34de7edc
- (int)getIVSize;	// 0x34de7ef0
@end

