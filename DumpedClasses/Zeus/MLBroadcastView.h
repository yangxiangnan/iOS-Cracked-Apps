//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableSet, NSString, UIScrollView;
@protocol MLBroadcastViewDataSource, MLBroadcastViewDelegate;

@interface MLBroadcastView : UIView <UIScrollViewDelegate>
{
    _Bool _isAutoRoll;
    _Bool _isIgnoreScroll;
    _Bool _isIgnorePreOperate;
    _Bool _isNotFirstSetCurrentIndex;
    unsigned long long _padding;
    id <MLBroadcastViewDataSource> _dataSource;
    id <MLBroadcastViewDelegate> _delegate;
    UIScrollView *_scrollView;
    NSMutableSet *_visibleCells;
    NSMutableSet *_reusableCells;
    unsigned long long _currentIndex;
}

@property(nonatomic) _Bool isNotFirstSetCurrentIndex; // @synthesize isNotFirstSetCurrentIndex=_isNotFirstSetCurrentIndex;
@property(nonatomic) _Bool isIgnorePreOperate; // @synthesize isIgnorePreOperate=_isIgnorePreOperate;
@property(nonatomic) _Bool isIgnoreScroll; // @synthesize isIgnoreScroll=_isIgnoreScroll;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableSet *reusableCells; // @synthesize reusableCells=_reusableCells;
@property(retain, nonatomic) NSMutableSet *visibleCells; // @synthesize visibleCells=_visibleCells;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool isAutoRoll; // @synthesize isAutoRoll=_isAutoRoll;
@property(nonatomic) __weak id <MLBroadcastViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MLBroadcastViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
- (void)reloadData;
- (void)scrollToPageIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)preOperateNearIndex:(unsigned long long)arg1;
- (void)justPreOperateWithIndex:(unsigned long long)arg1;
- (void)showCellAtIndex:(unsigned long long)arg1;
- (void)showCells;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)layoutSubviews;
- (unsigned long long)switchToPageIndexForIndex:(unsigned long long)arg1;
- (unsigned long long)pageCount;
@property(readonly, nonatomic) unsigned long long currentPageIndex;
- (void)setUp;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
