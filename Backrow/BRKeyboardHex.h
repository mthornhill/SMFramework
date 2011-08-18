/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRKeyboard.h"


__attribute__((visibility("hidden")))
@interface BRKeyboardHex : BRKeyboard {
}
- (id)init;	// 0x34d3c9ad
- (id)_keyboardDataFileName;	// 0x34d3caa1
- (id)_mainKeyRowWithKeys:(id)keys index:(int)index;	// 0x34d3cae5
- (CGSize)_mainKeysContainerSize:(id)size resolutionScale:(float)scale;	// 0x34d3cbfd
- (float)_mainKeysVerticalSpacing;	// 0x34d3cb5d
- (CGSize)_minTextEntryControlSize:(id)size resolutionScale:(float)scale;	// 0x34d3cbcd
- (int)_numberOfColumnsForMainKeyRowIndex:(int)mainKeyRowIndex;	// 0x34d3cad1
- (int)_numberOfMainKeyRows;	// 0x34d3cacd
- (id)_optionCharactersForKeyboardInput;	// 0x34d3cac9
- (Class)_popupKeyboardClass;	// 0x34d3cb65
- (id)_popupKeyboardDataFileName;	// 0x34d3ca91
- (float)_preferredGlyphHeight:(id)height;	// 0x34d3cac1
- (float)_preferredGlyphWidth:(id)width;	// 0x34d3cab9
- (CGRect)mainKeysContainerFrame:(id)frame resolutionScale:(float)scale;	// 0x34d3cb85
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x34d3ca39
- (id)name;	// 0x34d3ca29
- (id)switchToThisKeyboardIdentifier;	// 0x34d3ca01
@end

