/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextField.h"
#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, NSMutableString, NSTimer, NSDictionary;

@interface BRTextFieldControl : BRControl <BRTextField> {
@private
	id _delegate;	// 44 = 0x2c
	id _characterDelegate;	// 48 = 0x30
	BRMarqueeTextControl *_displayString;	// 52 = 0x34
	NSMutableString *_clearString;	// 56 = 0x38
	NSDictionary *_savedAttributes;	// 60 = 0x3c
	BOOL _useSecureText;	// 64 = 0x40
	BOOL _processingDeleteChar;	// 65 = 0x41
	BOOL _showCursor;	// 66 = 0x42
	BOOL _cursorVisible;	// 67 = 0x43
	int _textLengthLimit;	// 68 = 0x44
	NSTimer *_textObscureTimer;	// 72 = 0x48
	NSTimer *_cursorBlinkTimer;	// 76 = 0x4c
}
@property(assign) id characterDelegate;	// G=0x34d4d805; S=0x34d4d815; converted property
@property(assign) id delegate;	// G=0x34d4d7e5; S=0x34d4d7f5; converted property
@property(assign) BOOL showCursor;	// G=0x34d4d825; S=0x34d4d835; converted property
@property(retain) id textAttributes;	// G=0x34d4d971; S=0x34d4d981; converted property
@property(assign) int textLengthLimit;	// G=0x34d4d951; S=0x34d4d961; converted property
@property(assign) BOOL useSecureText;	// G=0x34d4d901; S=0x34d4d911; converted property
- (id)init;	// 0x34d4d609
- (void)_blinkCursorTimerFired:(id)fired;	// 0x34d4e3e9
- (id)_secureTextFromClearText;	// 0x34d4e17d
- (void)_secureTextObscureTimerFired:(id)fired;	// 0x34d4e359
- (void)_startSecureTextObscureTimer;	// 0x34d4e281
- (void)_stopBlinkCursorTimer;	// 0x34d4e3b1
- (void)_stopSecureTextObscureTimer;	// 0x34d4e321
- (id)accessibilityTraits;	// 0x34d4dbb5
- (id)accessibilityValue;	// 0x34d4db95
- (BOOL)brKeyEvent:(id)event;	// 0x34d4dc69
// converted property getter: - (id)characterDelegate;	// 0x34d4d805
- (void)controlWasDeactivated;	// 0x34d4d7a9
- (void)dealloc;	// 0x34d4d731
// converted property getter: - (id)delegate;	// 0x34d4d7e5
- (float)maxScrollPosition;	// 0x34d4db55
- (BOOL)needsScrollingInBounds:(CGRect)bounds;	// 0x34d4db1d
// converted property setter: - (void)setCharacterDelegate:(id)delegate;	// 0x34d4d815
- (void)setClearString:(id)string;	// 0x34d4da91
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x34d4d7f5
- (void)setDisplayString:(id)string;	// 0x34d4d9f9
- (void)setScrollPosition:(float)position;	// 0x34d4db75
// converted property setter: - (void)setShowCursor:(BOOL)cursor;	// 0x34d4d835
- (void)setString:(id)string;	// 0x34d4dc11
// converted property setter: - (void)setTextAttributes:(id)attributes;	// 0x34d4d981
// converted property setter: - (void)setTextLengthLimit:(int)limit;	// 0x34d4d961
// converted property setter: - (void)setUseSecureText:(BOOL)text;	// 0x34d4d911
// converted property getter: - (BOOL)showCursor;	// 0x34d4d825
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34d4dae1
- (id)stringValue;	// 0x34d4dbe1
// converted property getter: - (id)textAttributes;	// 0x34d4d971
// converted property getter: - (int)textLengthLimit;	// 0x34d4d951
// converted property getter: - (BOOL)useSecureText;	// 0x34d4d901
@end

