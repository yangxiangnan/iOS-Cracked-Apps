//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class GDMRecommendDarenCellViewModel, GDMRecommendHeaderView, NSArray;

@interface GDMRecommendDarenTableViewCell : UITableViewCell
{
    GDMRecommendDarenCellViewModel *_viewModel;
    GDMRecommendHeaderView *_recommendHeaderView;
    NSArray *_darenBarList;
}

+ (double)cellDarenBarHeight;
+ (double)cellTitleHeight;
+ (double)cellHeightForViewModel:(id)arg1;
@property(retain, nonatomic) NSArray *darenBarList; // @synthesize darenBarList=_darenBarList;
@property(retain, nonatomic) GDMRecommendHeaderView *recommendHeaderView; // @synthesize recommendHeaderView=_recommendHeaderView;
@property(retain, nonatomic) GDMRecommendDarenCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)refreshCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 recommendCount:(int)arg3;

@end
