//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKBlurView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIScrollView, UITableView;

@interface ProfileInstallManualWiFiView : WKBlurView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _showAnimation;
    _Bool _isAllCollapse;
    CDUnknownBlockType _closeButtonClickBlock;
    CDUnknownBlockType _toWiFiListButtonClickBlock;
    UITableView *_itableView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_faqButton;
    UIImageView *_imageView;
    NSString *_SSID;
    UIScrollView *_imageScrollView;
    long long _selectSection;
}

@property(nonatomic) _Bool isAllCollapse; // @synthesize isAllCollapse=_isAllCollapse;
@property(nonatomic) long long selectSection; // @synthesize selectSection=_selectSection;
@property(nonatomic) _Bool showAnimation; // @synthesize showAnimation=_showAnimation;
@property(retain, nonatomic) UIScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(copy, nonatomic) NSString *SSID; // @synthesize SSID=_SSID;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *faqButton; // @synthesize faqButton=_faqButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UITableView *itableView; // @synthesize itableView=_itableView;
@property(copy, nonatomic) CDUnknownBlockType toWiFiListButtonClickBlock; // @synthesize toWiFiListButtonClickBlock=_toWiFiListButtonClickBlock;
@property(copy, nonatomic) CDUnknownBlockType closeButtonClickBlock; // @synthesize closeButtonClickBlock=_closeButtonClickBlock;
- (void).cxx_destruct;
- (void)closeButtonClick:(id)arg1;
- (void)switchButtonClick:(id)arg1;
- (void)faqButtonClick:(id)arg1;
- (id)allAnswers;
- (id)allQuestions;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setup;
- (id)createSwitchButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSSID:(id)arg1 closeBlock:(CDUnknownBlockType)arg2 toWiFiListButtonClickBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
