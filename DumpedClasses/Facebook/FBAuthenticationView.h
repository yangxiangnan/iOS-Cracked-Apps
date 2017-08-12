//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAuthenticatingView-Protocol.h"
#import "FBLogoutView-Protocol.h"

@class FBImageDownloader, NSString, UIActivityIndicatorView;
@protocol FBAuthenticatingContentView, FBAuthenticatingFooterView, FBAuthenticatingHeaderView, FBAuthenticationViewStyle;

@interface FBAuthenticationView : UIView <FBAuthenticatingView, FBLogoutView>
{
    UIActivityIndicatorView *_activityIndicatorView;
    FBImageDownloader *_imageDownloader;
    id <FBAuthenticationViewStyle> _style;
    _Bool _isKeyboardVisible;
    _Bool _showActivityIndicator;
    unsigned long long _interfaceType;
    UIView *_backgroundView;
    UIView<FBAuthenticatingHeaderView> *_headerView;
    UIView<FBAuthenticatingFooterView> *_footerView;
    UIView<FBAuthenticatingContentView> *_contentView;
    struct CGRect _keyboardTargetFrameInScreen;
}

@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(retain, nonatomic) UIView<FBAuthenticatingContentView> *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView<FBAuthenticatingFooterView> *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView<FBAuthenticatingHeaderView> *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) struct CGRect keyboardTargetFrameInScreen; // @synthesize keyboardTargetFrameInScreen=_keyboardTargetFrameInScreen;
@property(nonatomic) _Bool isKeyboardVisible; // @synthesize isKeyboardVisible=_isKeyboardVisible;
@property(nonatomic) unsigned long long interfaceType; // @synthesize interfaceType=_interfaceType;
- (void).cxx_destruct;
- (_Bool)mouseDownCanMoveWindow;
- (struct CGRect)_statusBarFrameInWindow;
- (_Bool)_shouldHideHeaderAndFooter;
- (void)_displayLoginControls:(_Bool)arg1;
- (void)_hideLoginControls;
- (void)_startLoginControlsAnimations:(unsigned long long)arg1;
- (void)_startOrStopActivityIndicator;
- (void)_layoutActivityIndicatorView;
- (void)_layoutContentView;
- (void)_layoutFooterView;
- (void)_layoutHeaderView;
- (_Bool)_isTallScreen;
- (void)_updateContentVisibility;
- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1 excludingKeyboardFrame:(struct CGRect *)arg2 excludingHeader:(_Bool)arg3;
- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)addHeaderAndBackgroundViews;
- (void)addLoginViews;
- (void)setInterfaceType:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setInterfaceType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(id)arg1 imageDownloader:(id)arg2;
- (id)initWithStyle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
