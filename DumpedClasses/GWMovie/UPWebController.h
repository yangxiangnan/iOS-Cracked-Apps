//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString, UINavigationBar, UIWebView, UPWebViewJavaScriptBridge;
@protocol UPWebPayDelegate;

@interface UPWebController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate>
{
    UPWebViewJavaScriptBridge *_bridge;
    UIWebView *_webView;
    UINavigationBar *_naviBar;
    _Bool _subPage;
    id <UPWebPayDelegate> _delegate;
    NSString *_startPage;
    NSString *_displayTitle;
}

+ (double)displayHeight;
+ (double)displayWidth;
+ (double)rotatedOffset;
+ (double)rotatedHeight;
+ (double)rotatedWidth;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(nonatomic) _Bool subPage; // @synthesize subPage=_subPage;
@property(copy, nonatomic) NSString *startPage; // @synthesize startPage=_startPage;
@property(nonatomic) __weak id <UPWebPayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)onBackEnable:(id)arg1;
- (void)payResult:(id)arg1 error:(id *)arg2;
- (void)onClosePage;
- (_Bool)openNewPage:(id)arg1;
- (void)registerForWebMessage;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)btnClosePressed:(id)arg1;
- (void)addBackBtn;
- (void)rotateCustomNavigationBarBackground;
- (void)setCustomNavigationBarBackground;
- (void)setupNavigationBar;
- (void)loadWebPage;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
