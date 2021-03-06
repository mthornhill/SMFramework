/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRContainerViewCell.h"
#import "BRControl.h"

@class NSMutableArray, NSTimer, BRContainerViewDataCache, BRCursorControl;

@interface BRGridView : BRControl <BRContainerViewCell> {
@private
	int _mode;	// 44 = 0x2c
	BRControl *_requester;	// 48 = 0x30
	NSRange _range;	// 52 = 0x34
	float _lastGapHeight;	// 60 = 0x3c
	double _heightToRange;	// 64 = 0x40
	double _controlHeight;	// 72 = 0x48
	float _columWidth;	// 80 = 0x50
	float _horizontalGap;	// 84 = 0x54
	float _verticalGap;	// 88 = 0x58
	float _leftMargin;	// 92 = 0x5c
	float _rightMargin;	// 96 = 0x60
	float _bottomMargin;	// 100 = 0x64
	float _bottomMarginFactor;	// 104 = 0x68
	float _topMargin;	// 108 = 0x6c
	float _topMarginFactor;	// 112 = 0x70
	BOOL _wrapsNavigation;	// 116 = 0x74
	id _dataSource;	// 120 = 0x78
	id _delegate;	// 124 = 0x7c
	BRCursorControl *_trackingCursor;	// 128 = 0x80
	BOOL _needsReload;	// 132 = 0x84
	NSMutableArray *_editEventQueue;	// 136 = 0x88
	long _loadIndex;	// 140 = 0x8c
	NSTimer *_forceDisplayTimer;	// 144 = 0x90
	BOOL _followsLoadAndDisplayOnDemand;	// 148 = 0x94
	id _loadCompletionBlock;	// 152 = 0x98
	BOOL _toldToLoad;	// 156 = 0x9c
	NSMutableArray *_completedIndexes;	// 160 = 0xa0
	BRContainerViewDataCache *_dataCache;	// 164 = 0xa4
	float _itemHeight;	// 168 = 0xa8
	long _defaultFocusIndex;	// 172 = 0xac
}
@property(retain) id cursor;	// G=0x34d0cae1; S=0x34d0caa9; converted property
@property(retain) id dataSource;	// G=0x34d0b191; S=0x34d0b14d; converted property
@property(assign, nonatomic) long defaultFocusIndex;	// G=0x34d0c265; S=0x34d0c275; @synthesize=_defaultFocusIndex
@property(assign) id delegate;	// G=0x34d0b1b1; S=0x34d0b1a1; converted property
@property(assign) float horizontalGap;	// G=0x34d0b2d1; S=0x34d0b28d; converted property
@property(assign, nonatomic) float itemHeight;	// G=0x34d0c245; S=0x34d0c255; @synthesize=_itemHeight
@property(assign) float leftMargin;	// G=0x34d0b3b1; S=0x34d0b371; converted property
@property(assign) float rightMargin;	// G=0x34d0b401; S=0x34d0b3c1; converted property
@property(assign) long selection;	// G=0x34d0b1d5; S=0x34d0b1c1; converted property
@property(assign) float verticalGap;	// G=0x34d0b331; S=0x34d0b2e1; converted property
@property(assign) BOOL wrapsNavigation;	// G=0x34d0be21; S=0x34d0be11; converted property
+ (id)_jitterPositionAnimation;	// 0x34d0ed79
+ (id)_jitterTransformAnimation;	// 0x34d0f155
- (id)init;	// 0x34d0af2d
- (BOOL)_allDisplayComplete;	// 0x34d0eb09
- (void)_animationDidStartInDisplayMode:(id)_animation;	// 0x34d0dcc9
- (void)_animationDidStartInEditModeMode:(id)_animation;	// 0x34d0dccd
- (void)_animationDidStopInDisplayMode:(id)_animation finished:(BOOL)finished;	// 0x34d0dcd1
- (void)_animationDidStopInEditMode:(id)_animation finished:(BOOL)finished;	// 0x34d0dcd5
- (id)_completedIndexes;	// 0x34d0ea4d
- (id)_controlAtIndex:(long)index controls:(id)controls;	// 0x34d0e325
- (long)_controlsInHeight:(double)height startingAt:(long)at actualHeight:(double *)height3;	// 0x34d0defd
- (long)_controlsInHeightBackwards:(double)heightBackwards startingAt:(long)at actualHeight:(double *)height;	// 0x34d0dfd5
- (id)_controlsInRange:(NSRange)range;	// 0x34d0e1ad
- (id)_createControlsInRange:(NSRange)range;	// 0x34d0e115
- (void)_displayControlsForRowThatContainsIndex:(long)rowThatContainsIndex force:(bool)force;	// 0x34d0e731
- (void)_focusChanged:(id)changed;	// 0x34d0fb91
- (void)_forceDisplayTimerFired:(id)fired;	// 0x34d0e6fd
- (CGRect)_frameForControlAtIndex:(long)index controls:(id)controls;	// 0x34d0d401
- (CGRect)_frameForControlAtIndex:(long)index rowFrame:(CGRect)frame controls:(id)controls;	// 0x34d0d561
- (void)_frameRowInRange:(NSRange)range rowFrame:(CGRect)frame controls:(id)controls;	// 0x34d0d615
- (BOOL)_handleEventInDisplayMode:(id)displayMode;	// 0x34d0d845
- (BOOL)_handleEventInEditMode:(id)editMode;	// 0x34d0daa1
- (float)_heightOfControlAtIndex:(long)index controls:(id)controls;	// 0x34d0de11
- (double)_heightOfRowsInRange:(NSRange)range includeVerticalGap:(BOOL)gap controls:(id)controls;	// 0x34d0de4d
- (double)_heightToRange;	// 0x34d0d235
- (long)_indexOfFocusedControl;	// 0x34d0e0a5
- (void)_layoutSubcontrols;	// 0x34d0cc05
- (void)_loadControlWithIndex:(long)index start:(BOOL)start;	// 0x34d0e37d
- (BOOL)_okToLoadWithIndex:(long)index;	// 0x34d0e631
- (float)_positionOfColumn:(long)column inRowWidth:(float)rowWidth cellWidth:(float *)width;	// 0x34d0d301
- (void)_reloadIfNeeded;	// 0x34d0fc01
- (void)_restorePersistentSavedSelection;	// 0x34d0f939
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x34d0dda5
- (void)_sceneBoundsChanged:(id)changed;	// 0x34d0fb05
- (id)_setControlRange:(NSRange)range withHeightToRange:(double)range2;	// 0x34d0caf1
- (BOOL)_setMode:(int)mode;	// 0x34d0d6ad
- (void)_setSelectedItemJiggling:(BOOL)jiggling;	// 0x34d0ebbd
- (void)_stopForceDisplayTimer;	// 0x34d0e6c5
- (BOOL)_swapControlAtIndex:(long)index withControlAtIndex:(long)index2;	// 0x34d0f3fd
- (id)_swapPositionAnimationFromIndex:(long)index toIndex:(long)index2;	// 0x34d0f335
- (double)_totalHeight;	// 0x34d0d145
- (void)_updatePersistentSavedSelection;	// 0x34d0fa55
- (void)animationDidStart:(id)animation;	// 0x34d0c0c9
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x34d0c0fd
- (BOOL)brEventAction:(id)action;	// 0x34d0bbe5
- (void)cancelContainerViewLoad;	// 0x34d0c1c9
- (BOOL)controlAcceptsFocusAtIndex:(long)index;	// 0x34d0c781
- (CGRect)controlFocusFrameAtIndex:(long)index;	// 0x34d0c9cd
- (CGRect)controlFrameAtIndex:(long)index;	// 0x34d0c8e9
- (void)controlWasActivated;	// 0x34d0b891
- (void)controlWasDeactivated;	// 0x34d0b911
// converted property getter: - (id)cursor;	// 0x34d0cae1
- (long)dataCount;	// 0x34d0b1fd
// converted property getter: - (id)dataSource;	// 0x34d0b191
- (void)dealloc;	// 0x34d0b099
// declared property getter: - (long)defaultFocusIndex;	// 0x34d0c265
// converted property getter: - (id)delegate;	// 0x34d0b1b1
- (void)didFocusItemAtIndex:(long)index;	// 0x34d0c5cd
- (BOOL)didPlayItemAtIndex:(long)index;	// 0x34d0c725
- (BOOL)didSelectItemAtIndex:(long)index;	// 0x34d0c6c9
- (void)didUnFocusItemAtIndex:(long)index;	// 0x34d0c675
- (void)focusControlAtIndex:(long)index;	// 0x34d0c7d9
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x34d0bc21
- (void)grid:(id)grid didFocusItemAtIndex:(long)index;	// 0x34d0c235
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x34d0c241
- (void)grid:(id)grid didUnFocusItemAtIndex:(long)index;	// 0x34d0c23d
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x34d0c229
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x34d0c225
- (void)grid:(id)grid willDisplayItemAtIndex:(long)index;	// 0x34d0c22d
- (long)grid:(id)grid willFocusItemAtIndex:(long)index;	// 0x34d0c231
- (void)grid:(id)grid willUnFocusItemAtIndex:(long)index;	// 0x34d0c239
- (float)heightForItemAtIndex:(long)index;	// 0x34d0c4a5
- (float)heightOfControlAtIndex:(long)index;	// 0x34d0b5a1
- (float)heightToMaximum:(float)maximum;	// 0x34d0b4a5
// converted property getter: - (float)horizontalGap;	// 0x34d0b2d1
- (long)indexForItemID:(id)itemID;	// 0x34d0c449
- (id)initialFocus;	// 0x34d0ba09
- (id)itemAtIndex:(long)index;	// 0x34d0c399
// declared property getter: - (float)itemHeight;	// 0x34d0c245
- (id)itemIDAtIndex:(long)index;	// 0x34d0c3f1
- (void)layoutSubcontrols;	// 0x34d0bf65
// converted property getter: - (float)leftMargin;	// 0x34d0b3b1
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x34d0c131
- (long)numberOfColumns;	// 0x34d0c379
- (long)numberOfColumnsInGrid:(id)grid;	// 0x34d0c221
- (long)numberOfItems;	// 0x34d0c359
- (long)numberOfItemsInGrid:(id)grid;	// 0x34d0c21d
- (void)populateDataCache:(id)cache;	// 0x34d0c285
- (float)positionOfColumn:(long)column;	// 0x34d0b55d
- (void)reload;	// 0x34d0b5d1
- (void)reloadItemAtIndex:(long)index;	// 0x34d0b719
- (void)reloadItemsAtIndexes:(id)indexes;	// 0x34d0b79d
- (void)restorePersistentSavedSelection;	// 0x34d0b87d
// converted property getter: - (float)rightMargin;	// 0x34d0b401
- (long)rowCount;	// 0x34d0b211
- (void)scrollingCompleted;	// 0x34d0c055
- (void)selectItemAtIndex:(long)index;	// 0x34d0c345
- (id)selectedObject;	// 0x34d0b1e9
// converted property getter: - (long)selection;	// 0x34d0b1d5
- (void)setBottomMargin:(float)margin;	// 0x34d0be31
- (void)setColumnWidth:(float)width;	// 0x34d0b27d
// converted property setter: - (void)setCursor:(id)cursor;	// 0x34d0caa9
// converted property setter: - (void)setDataSource:(id)source;	// 0x34d0b14d
// declared property setter: - (void)setDefaultFocusIndex:(long)index;	// 0x34d0c275
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x34d0b1a1
- (void)setFollowsLoadAndDisplayOnDemand;	// 0x34d0c1f9
// converted property setter: - (void)setHorizontalGap:(float)gap;	// 0x34d0b28d
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x34d0c1f5
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x34d0c209
// declared property setter: - (void)setItemHeight:(float)height;	// 0x34d0c255
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x34d0b371
- (void)setNeedsReload;	// 0x34d0b829
- (void)setReadyToDisplay;	// 0x34d0c1f1
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x34d0b3c1
// converted property setter: - (void)setSelection:(long)selection;	// 0x34d0b1c1
- (void)setTopMargin:(float)margin;	// 0x34d0bead
// converted property setter: - (void)setVerticalGap:(float)gap;	// 0x34d0b2e1
- (void)setVerticalMargins:(float)margins;	// 0x34d0b341
// converted property setter: - (void)setWrapsNavigation:(BOOL)navigation;	// 0x34d0be11
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34d0bf79
- (void)updatePersistentSavedSelection;	// 0x34d0b869
// converted property getter: - (float)verticalGap;	// 0x34d0b331
- (id)visibleControlAtIndex:(long)index;	// 0x34d0b465
- (id)visibleControlsWithRange:(NSRange *)range;	// 0x34d0b411
- (NSRange)visibleRange;	// 0x34d0b449
- (void)visibleScrollRectChanged;	// 0x34d0bf29
- (void)willDisplayItemAtIndex:(long)index;	// 0x34d0c521
- (long)willFocusItemAtIndex:(long)index;	// 0x34d0c575
- (void)willUnFocusItemAtIndex:(long)index;	// 0x34d0c621
// converted property getter: - (BOOL)wrapsNavigation;	// 0x34d0be21
@end

