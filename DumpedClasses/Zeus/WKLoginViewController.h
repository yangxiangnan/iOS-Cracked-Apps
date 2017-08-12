//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"
#import "WKCountryDialCodeSelectedDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextField, UIView;

@interface WKLoginViewController : UIViewController <UITextFieldDelegate, WKCountryDialCodeSelectedDelegate>
{
    _Bool _fromAuthSDK;
    _Bool _hasInited;
    _Bool _isResendPhoneCode;
    CDUnknownBlockType _completeBlock;
    UITextField *_phoneNumberTextField;
    UITextField *_codeTextField;
    UIButton *_sendButton;
    UIButton *_countryCodeButton;
    UIButton *_userLoginButton;
    UIView *_contentBGView;
    UIView *_numberBottomLine;
    UIView *_codeBottomLine;
    UILabel *_descLabel;
    UIView *_scrollViewContentView;
}

@property(nonatomic) _Bool isResendPhoneCode; // @synthesize isResendPhoneCode=_isResendPhoneCode;
@property(nonatomic) _Bool hasInited; // @synthesize hasInited=_hasInited;
@property(retain, nonatomic) UIView *scrollViewContentView; // @synthesize scrollViewContentView=_scrollViewContentView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *codeBottomLine; // @synthesize codeBottomLine=_codeBottomLine;
@property(retain, nonatomic) UIView *numberBottomLine; // @synthesize numberBottomLine=_numberBottomLine;
@property(retain, nonatomic) UIView *contentBGView; // @synthesize contentBGView=_contentBGView;
@property(retain, nonatomic) UIButton *userLoginButton; // @synthesize userLoginButton=_userLoginButton;
@property(retain, nonatomic) UIButton *countryCodeButton; // @synthesize countryCodeButton=_countryCodeButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UITextField *codeTextField; // @synthesize codeTextField=_codeTextField;
@property(retain, nonatomic) UITextField *phoneNumberTextField; // @synthesize phoneNumberTextField=_phoneNumberTextField;
@property(nonatomic) _Bool fromAuthSDK; // @synthesize fromAuthSDK=_fromAuthSDK;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)startCountdown;
- (void)codeVerifyFailed;
- (void)userRegisterAction:(id)arg1;
- (void)sendVerifiCodeAction:(id)arg1;
- (void)didSelectCountryDialCode:(id)arg1;
- (void)countrySelectClick:(id)arg1;
- (void)dismiss:(_Bool)arg1;
- (void)cancleLogin;
- (void)tapGestureResponse;
- (void)setupSubViews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
