//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, QLChannelTitleCellV1, QLJCEONAVerticalPosterList, QLONALoadMoreActionView, UITableView, UIView;

@interface QLONAVerticalPosterListCell : QLBaseTabelViewCell <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_lastIndexPathArray;
    NSMutableArray *_nowShowIndexPathArray;
    _Bool _hasReportShowUp;
    QLBaseTabelViewCell *_fatherCell;
    UITableView *_tableView;
    QLJCEONAVerticalPosterList *_posterList;
    QLChannelTitleCellV1 *_cellModelTitle;
    UIView *_cellBottomSplitLine;
    QLONALoadMoreActionView *_actionView;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property _Bool hasReportShowUp; // @synthesize hasReportShowUp=_hasReportShowUp;
@property(retain, nonatomic) QLONALoadMoreActionView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UIView *cellBottomSplitLine; // @synthesize cellBottomSplitLine=_cellBottomSplitLine;
@property(retain, nonatomic) QLChannelTitleCellV1 *cellModelTitle; // @synthesize cellModelTitle=_cellModelTitle;
@property(retain, nonatomic) QLJCEONAVerticalPosterList *posterList; // @synthesize posterList=_posterList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak QLBaseTabelViewCell *fatherCell; // @synthesize fatherCell=_fatherCell;
- (void).cxx_destruct;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableview:(id)arg1 reportShowUpAtIndexPath:(id)arg2;
- (void)dealloc;
- (double)heightForTableView;
- (void)layoutSubviews;
- (void)executeTouchActionWihtIndex:(long long)arg1;
- (void)generateExtraViewByVideoData;
- (unsigned long long)getNumberOfRowsInSectionZero;
- (void)removeFromParentReportLastIndexs;
- (void)reportMoreActionView;
- (void)reportCellTitle;
- (void)reportShowUp;
- (void)setObject:(id)arg1;
- (id)getDetailPosterlist;
- (void)checkNeedToClearLastArray;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
