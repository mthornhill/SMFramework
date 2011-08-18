/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ID3Header : NSObject {
@private
	int dataOffset;	// 4 = 0x4
	int headerSize;	// 8 = 0x8
}
@property(assign, nonatomic) int dataOffset;	// G=0x34de9104; S=0x34de9118; @synthesize
@property(assign, nonatomic) int headerSize;	// G=0x34de912c; S=0x34de9140; @synthesize
- (id)initWithByteData:(char *)byteData withLength:(int)length;	// 0x34de9340
- (id)initWithData:(id)data;	// 0x34de93a8
- (void)buildWithByteData:(char *)byteData withLength:(int)length;	// 0x34de9154
// declared property getter: - (int)dataOffset;	// 0x34de9104
- (void)dealloc;	// 0x34de9304
// declared property getter: - (int)headerSize;	// 0x34de912c
// declared property setter: - (void)setDataOffset:(int)offset;	// 0x34de9118
// declared property setter: - (void)setHeaderSize:(int)size;	// 0x34de9140
@end

