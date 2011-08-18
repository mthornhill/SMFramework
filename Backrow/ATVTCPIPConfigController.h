/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"
#import "ATVDottedQuadEntryDelegate.h"

@class ATVDottedQuadEntryController, NSString;
@protocol ATVTCPIPConfigDelegate;

@interface ATVTCPIPConfigController : BRMenuController <BRMenuListItemProvider, ATVDottedQuadEntryDelegate> {
@private
	id<ATVTCPIPConfigDelegate> _delegate;	// 104 = 0x68
	NSString *_address;	// 108 = 0x6c
	NSString *_subnetMask;	// 112 = 0x70
	NSString *_router;	// 116 = 0x74
	NSString *_dns;	// 120 = 0x78
	ATVDottedQuadEntryController *_ipController;	// 124 = 0x7c
	ATVDottedQuadEntryController *_maskController;	// 128 = 0x80
	ATVDottedQuadEntryController *_routerController;	// 132 = 0x84
	ATVDottedQuadEntryController *_dnsController;	// 136 = 0x88
	unsigned _forWireless : 1;	// 140 = 0x8c
	unsigned _useDHCP : 1;	// 140 = 0x8c
}
- (id)initWithWireless:(BOOL)wireless notifying:(id)notifying;	// 0x34c3b745
- (void)_readCurrentConfiguration;	// 0x34c3bfe9
- (void)_saveConfiguration;	// 0x34c3c12d
- (void)dealloc;	// 0x34c3b895
- (void)entryComplete:(id)complete;	// 0x34c3bbf9
- (float)heightForRow:(long)row;	// 0x34c3bbf1
- (long)itemCount;	// 0x34c3bba9
- (id)itemForRow:(long)row;	// 0x34c3bb21
- (void)itemSelected:(long)selected;	// 0x34c3b969
- (BOOL)rowSelectable:(long)selectable;	// 0x34c3bbf5
- (id)titleForRow:(long)row;	// 0x34c3bbad
@end

