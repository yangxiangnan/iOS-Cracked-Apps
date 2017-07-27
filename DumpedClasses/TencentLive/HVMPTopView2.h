//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLBanabaSwitchButtonDelegate.h"
#import "QLBaseInputViewDelegate.h"
#import "QLInteractiveVoteSwithDelegate.h"

@class NSArray, NSString, QLBadgeViewEx, QLHollywoodGiftButton, QLMovieBaseControlView, QLMovieIAPViewGiftButton, QLSImageView, UIButton, UILabel;

@interface HVMPTopView2 : UIView <QLBaseInputViewDelegate, QLInteractiveVoteSwithDelegate, QLBanabaSwitchButtonDelegate>
{
    UIView *_topBackgroundView;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UIButton *_dlnaButton;
    UIButton *_shareBtn;
    QLHollywoodGiftButton *_giftBtn;
    UIButton *_moreButton;
    UILabel *_titleTagLabel;
    UIButton *_carrierButton;
    _Bool _momentBtnHidden;
    _Bool _remotePlayDisabled;
    NSString *_remotePlayDisableReason;
    QLMovieIAPViewGiftButton *_preWatchTipView;
    QLBadgeViewEx *_unreadNumIcon;
    UIButton *_interactiveVoteButton;
    UIButton *_banabaSwitchButton;
    QLMovieBaseControlView *_mainCtlView;
    UIView *_titleViewToReplace;
    CDUnknownBlockType _buttonActionBlock;
    UIButton *_chatRoomBtn;
    NSArray *_aryEntryUIs;
    QLSImageView *_markLableImage;
    UILabel *_rateTips;
    struct CGRect _topBackgroundFrame;
}

@property(retain, nonatomic) UILabel *rateTips; // @synthesize rateTips=_rateTips;
@property(retain, nonatomic) QLSImageView *markLableImage; // @synthesize markLableImage=_markLableImage;
@property(retain, nonatomic) NSArray *aryEntryUIs; // @synthesize aryEntryUIs=_aryEntryUIs;
@property(nonatomic) __weak UIButton *chatRoomBtn; // @synthesize chatRoomBtn=_chatRoomBtn;
@property(nonatomic) struct CGRect topBackgroundFrame; // @synthesize topBackgroundFrame=_topBackgroundFrame;
@property(copy, nonatomic) CDUnknownBlockType buttonActionBlock; // @synthesize buttonActionBlock=_buttonActionBlock;
@property(retain, nonatomic) UIView *titleViewToReplace; // @synthesize titleViewToReplace=_titleViewToReplace;
@property(readonly, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(readonly, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property __weak QLMovieBaseControlView *mainCtlView; // @synthesize mainCtlView=_mainCtlView;
@property(retain, nonatomic) UIButton *banabaSwitchButton; // @synthesize banabaSwitchButton=_banabaSwitchButton;
@property(retain, nonatomic) UIButton *interactiveVoteButton; // @synthesize interactiveVoteButton=_interactiveVoteButton;
@property(retain, nonatomic) QLBadgeViewEx *unreadNumIcon; // @synthesize unreadNumIcon=_unreadNumIcon;
@property(readonly, nonatomic) UILabel *titleTagLabel; // @synthesize titleTagLabel=_titleTagLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)refreshShareButtonWithCouldShareCaption:(_Bool)arg1;
- (void)showRateTipsWithRate:(double)arg1;
- (void)hidenMarkLable:(_Bool)arg1;
- (void)changeMarkLableImage:(_Bool)arg1;
- (void)showGiftBtn:(_Bool)arg1;
- (void)showChatRoomButton:(_Bool)arg1 btn:(id)arg2;
- (void)setTopViewBackgroundFrame:(struct CGRect)arg1;
- (void)replaceMainTitleView:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setTopEntryUIs:(id)arg1;
- (void)interactiveSwitchISOpen:(_Bool)arg1;
- (void)updateInteractiveVoteSwith:(long long)arg1;
- (void)reportBanabaOpen:(_Bool)arg1;
- (void)banabaSwitchButtonActionByUIControlEventTouchUpInside:(id)arg1;
- (void)updateBanabaSwitchButtonState:(_Bool)arg1;
- (void)showBanabaSwitchButton:(_Bool)arg1;
- (void)refreshFuncItems;
- (void)disableRemotePlayWithReason:(id)arg1;
- (void)enableRemotePlay;
- (void)clearResources;
- (void)showCarrierTips:(_Bool)arg1;
- (void)showDLNAButton:(_Bool)arg1;
- (void)enableDLNAButton:(_Bool)arg1;
- (void)hideMomentButton:(_Bool)arg1;
- (void)setTitle:(id)arg1 tag:(id)arg2;
- (void)setTitleMarkLabelInfo:(id)arg1;
- (void)checkAirplayShow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)momentBtnClicked:(id)arg1;
- (void)moreBtnClicked:(id)arg1;
- (void)unicomBtnAction:(id)arg1;
- (void)giftBtnClicked:(id)arg1;
- (void)shareBtnClicked:(id)arg1;
- (void)dlnaBtnClicked:(id)arg1;
- (void)airplayBtnClicked:(id)arg1;
- (void)backBtnClicked:(id)arg1;
- (void)setVIPButtonActionBlock:(CDUnknownBlockType)arg1;
- (void)buttonAction:(id)arg1;
- (void)hiddenPewWatchTopView;
- (void)vipLoginedConfigTopViewWithVideoPayType:(long long)arg1;
- (void)configButtonWithQLJCEActionBarInfo:(id)arg1;
- (void)setPreWatchTipViewButtonTitleString:(id)arg1;
- (void)setPreWatchType:(long long)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)playerPlayViewChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
