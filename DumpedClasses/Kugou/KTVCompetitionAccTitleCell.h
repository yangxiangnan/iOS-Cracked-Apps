//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

@class KGThemeLabel, KTVBannerPageControl;

@interface KTVCompetitionAccTitleCell : KFCommedTableViewCell
{
    long long _songNumber;
    long long _currentIndex;
    KGThemeLabel *_titleLabel;
    KGThemeLabel *_songLabel;
    KTVBannerPageControl *_pageControl;
}

+ (double)cellHeight;
@property(retain, nonatomic) KTVBannerPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) KGThemeLabel *songLabel; // @synthesize songLabel=_songLabel;
@property(retain, nonatomic) KGThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) long long songNumber; // @synthesize songNumber=_songNumber;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
