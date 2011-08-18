/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRContainerViewCell.h"
#import "BRControl.h"

@class BRDotArrayControl, BRImage, CATransition, BRImageControl;

@interface BRPagedView : BRControl <BRContainerViewCell> {
@private
	id _delegate;	// 44 = 0x2c
	id _dataSource;	// 48 = 0x30
	unsigned _currentPage;	// 52 = 0x34
	BRControl *_contentPanel;	// 56 = 0x38
	BRControl *_content;	// 60 = 0x3c
	BRImage *_arrowImage;	// 64 = 0x40
	BRImageControl *_rightArrow;	// 68 = 0x44
	BRImageControl *_leftArrow;	// 72 = 0x48
	BRDotArrayControl *_pageDots;	// 76 = 0x4c
	CATransition *_prevPageTransition;	// 80 = 0x50
	CATransition *_nextPageTransition;	// 84 = 0x54
	BOOL _showsArrows;	// 88 = 0x58
	BOOL _showsDots;	// 89 = 0x59
	id _loadCompletionBlock;	// 92 = 0x5c
}
@property(readonly, assign) unsigned currentPage;	// G=0x34d8d7b5; @synthesize=_currentPage
@property(assign) id dataSource;	// G=0x34d8d715; S=0x34d8d725; @synthesize=_dataSource
@property(assign) id delegate;	// G=0x34d8cdd9; S=0x34d8cde9; 
@property(retain) CATransition *nextPageTransition;	// G=0x34d8d735; S=0x34d8d74d; @synthesize=_nextPageTransition
@property(retain) CATransition *prevPageTransition;	// G=0x34d8d775; S=0x34d8d78d; @synthesize=_prevPageTransition
@property(assign) BOOL showsArrows;	// G=0x34d8cb61; S=0x34d8cb71; 
@property(assign) BOOL showsDots;	// G=0x34d8cbdd; S=0x34d8cbed; 
- (id)init;	// 0x34d8c5ed
- (BOOL)brEventAction:(id)action;	// 0x34d8d065
- (void)cancelContainerViewLoad;	// 0x34d8d2cd
- (void)controlWasDeactivated;	// 0x34d8caf1
// declared property getter: - (unsigned)currentPage;	// 0x34d8d7b5
// declared property getter: - (id)dataSource;	// 0x34d8d715
- (void)dealloc;	// 0x34d8ca2d
// declared property getter: - (id)delegate;	// 0x34d8cdd9
- (void)layoutSubcontrols;	// 0x34d8d431
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x34d8d1b9
- (BOOL)nextPage;	// 0x34d8ce79
// declared property getter: - (id)nextPageTransition;	// 0x34d8d735
- (BOOL)prevPage;	// 0x34d8cf81
// declared property getter: - (id)prevPageTransition;	// 0x34d8d775
- (void)reloadData;	// 0x34d8cc31
// declared property setter: - (void)setDataSource:(id)source;	// 0x34d8d725
- (void)setDatasource:(id)datasource;	// 0x34d8cd49
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34d8cde9
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x34d8d38d
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x34d8d3dd
// declared property setter: - (void)setNextPageTransition:(id)transition;	// 0x34d8d74d
// declared property setter: - (void)setPrevPageTransition:(id)transition;	// 0x34d8d78d
- (void)setReadyToDisplay;	// 0x34d8d33d
// declared property setter: - (void)setShowsArrows:(BOOL)arrows;	// 0x34d8cb71
// declared property setter: - (void)setShowsDots:(BOOL)dots;	// 0x34d8cbed
// declared property getter: - (BOOL)showsArrows;	// 0x34d8cb61
// declared property getter: - (BOOL)showsDots;	// 0x34d8cbdd
@end

