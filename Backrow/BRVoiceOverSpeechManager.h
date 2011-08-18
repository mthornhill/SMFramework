/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <Foundation/Foundation.h> // Unknown library

@class NSThread, NSMutableArray;
@protocol VSSpeechHiddenProtocol;

__attribute__((visibility("hidden")))
@interface BRVoiceOverSpeechManager : NSObject {
@private
	NSMutableArray *_speechQueue;	// 4 = 0x4
	NSObject<VSSpeechHiddenProtocol> *_synthesizer;	// 8 = 0x8
	NSThread *_runThread;	// 12 = 0xc
	BOOL _runLoopEnabled;	// 16 = 0x10
	BOOL _didInitialize;	// 17 = 0x11
	BOOL _isSpeaking;	// 18 = 0x12
	BOOL _speechEnabled;	// 19 = 0x13
}
@property(readonly, assign) BOOL isSpeaking;	// G=0x34cc43dd; converted property
@property(assign, nonatomic) BOOL speechEnabled;	// G=0x34cc45c5; S=0x34cc4039; @synthesize=_speechEnabled
@property(assign, nonatomic) float speechRate;	// G=0x34cc4441; S=0x34cc44e5; @dynamic
+ (URegularExpression *)createRegularExpressionFromString:(id)string;	// 0x34cc3841
+ (id)matchedRangesForString:(id)string withRegularExpression:(URegularExpression *)regularExpression;	// 0x34cc38a5
- (id)init;	// 0x34cc3579
- (void)_clearSpeechQueue;	// 0x34cc4189
- (void)_continueSpeaking;	// 0x34cc42d5
- (void)_dispatchSpeechAction:(id)action;	// 0x34cc4065
- (void)_initialize;	// 0x34cc3701
- (void)_isSpeaking:(id)speaking;	// 0x34cc4391
- (void)_pauseSpeaking;	// 0x34cc4275
- (id)_preprocessString:(id)string;	// 0x34cc3ea5
- (id)_processDurationStrings:(id)strings;	// 0x34cc3c85
- (void)_setSpeechRate:(id)rate;	// 0x34cc4481
- (void)_speechJobFinished:(BOOL)finished;	// 0x34cc39b9
- (void)_startNextSpeechJob;	// 0x34cc3a81
- (void)_stopSpeaking;	// 0x34cc4331
- (void)clearSpeechQueue;	// 0x34cc41a9
- (void)continueSpeaking;	// 0x34cc42f5
- (void)dealloc;	// 0x34cc365d
- (void)dispatchSpeechAction:(id)action;	// 0x34cc41e5
// converted property getter: - (BOOL)isSpeaking;	// 0x34cc43dd
- (void)pauseSpeaking;	// 0x34cc4299
- (void)setMaintainConnection:(BOOL)connection;	// 0x34cc3999
// declared property setter: - (void)setSpeechEnabled:(BOOL)enabled;	// 0x34cc4039
// declared property setter: - (void)setSpeechRate:(float)rate;	// 0x34cc44e5
// declared property getter: - (BOOL)speechEnabled;	// 0x34cc45c5
// declared property getter: - (float)speechRate;	// 0x34cc4441
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;	// 0x34cc4599
- (void)stopSpeaking;	// 0x34cc4355
@end

