//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotificationCenter, NSString, aluAppInfo, aluLoginViewController, aluMTopService;

@interface aluSDKInternal : NSObject
{
    NSString *_sessionId;
    _Bool _closeLocationManagerInSDK;
    _Bool _needInitWindVane;
    _Bool _isNeedMultilanguage;
    _Bool _isTaobaoGateWayUnited;
    _Bool _isRegistryEntryClosed;
    _Bool _isRetrivePasswordClosed;
    _Bool _isAlipayLoginEntryClosed;
    _Bool _hasSetHelpPage;
    _Bool _isHelpPageOpen;
    _Bool _closeLoginAnimation;
    _Bool _disablePortrait;
    _Bool _openDebugLog;
    id <aluUIAppearanceDelegate> _appearanceDelegate;
    NSString *_appID;
    NSString *_appKey;
    NSString *_authCode;
    NSString *_site;
    aluLoginViewController *_loginVC;
    aluAppInfo *_appInfo;
    NSString *_ssoKeyChainPrefix;
    NSString *_ttid;
    NSString *_tid;
    NSString *_deviceId;
    NSString *_targetURL;
    id <aluUILoginMoreCustomDelegate> _moreCustomDelegate;
    aluMTopService *_ssoInvoker;
    aluMTopService *_getAlipayCookieInvoker;
    NSNotificationCenter *_notificaitonCenter;
    aluMTopService *_aluPersonalReginvoker;
    aluMTopService *_aluEnterpriseReginvoker;
}

+ (_Bool)isCurrentDeviceSupportForgetPassword;
+ (_Bool)isCurrentDeviceSupportRegister;
+ (id)sharedInstance;
@property(retain, nonatomic) aluMTopService *aluEnterpriseReginvoker; // @synthesize aluEnterpriseReginvoker=_aluEnterpriseReginvoker;
@property(retain, nonatomic) aluMTopService *aluPersonalReginvoker; // @synthesize aluPersonalReginvoker=_aluPersonalReginvoker;
@property(retain, nonatomic) NSNotificationCenter *notificaitonCenter; // @synthesize notificaitonCenter=_notificaitonCenter;
@property(retain, nonatomic) aluMTopService *getAlipayCookieInvoker; // @synthesize getAlipayCookieInvoker=_getAlipayCookieInvoker;
@property(retain, nonatomic) aluMTopService *ssoInvoker; // @synthesize ssoInvoker=_ssoInvoker;
@property(nonatomic) _Bool openDebugLog; // @synthesize openDebugLog=_openDebugLog;
@property(nonatomic) _Bool disablePortrait; // @synthesize disablePortrait=_disablePortrait;
@property(nonatomic) _Bool closeLoginAnimation; // @synthesize closeLoginAnimation=_closeLoginAnimation;
@property(nonatomic) _Bool isHelpPageOpen; // @synthesize isHelpPageOpen=_isHelpPageOpen;
@property(nonatomic) _Bool hasSetHelpPage; // @synthesize hasSetHelpPage=_hasSetHelpPage;
@property(nonatomic) _Bool isAlipayLoginEntryClosed; // @synthesize isAlipayLoginEntryClosed=_isAlipayLoginEntryClosed;
@property(nonatomic) _Bool isRetrivePasswordClosed; // @synthesize isRetrivePasswordClosed=_isRetrivePasswordClosed;
@property(nonatomic) _Bool isRegistryEntryClosed; // @synthesize isRegistryEntryClosed=_isRegistryEntryClosed;
@property(nonatomic) __weak id <aluUILoginMoreCustomDelegate> moreCustomDelegate; // @synthesize moreCustomDelegate=_moreCustomDelegate;
@property(nonatomic) _Bool isTaobaoGateWayUnited; // @synthesize isTaobaoGateWayUnited=_isTaobaoGateWayUnited;
@property(nonatomic) _Bool isNeedMultilanguage; // @synthesize isNeedMultilanguage=_isNeedMultilanguage;
@property(copy, nonatomic) NSString *targetURL; // @synthesize targetURL=_targetURL;
@property(nonatomic, getter=isNeedInitWindVane) _Bool needInitWindVane; // @synthesize needInitWindVane=_needInitWindVane;
@property(nonatomic, getter=isCloseLocationManagerInSDK) _Bool closeLocationManagerInSDK; // @synthesize closeLocationManagerInSDK=_closeLocationManagerInSDK;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain) NSString *ttid; // @synthesize ttid=_ttid;
@property(retain, nonatomic) NSString *ssoKeyChainPrefix; // @synthesize ssoKeyChainPrefix=_ssoKeyChainPrefix;
@property(retain, nonatomic) aluAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(nonatomic) __weak aluLoginViewController *loginVC; // @synthesize loginVC=_loginVC;
@property(retain, nonatomic) NSString *site; // @synthesize site=_site;
@property(retain, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) __weak id <aluUIAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
- (void).cxx_destruct;
- (void)showH5Page:(id)arg1 url:(id)arg2 delegate:(id)arg3;
- (void)enterpriseReg:(id)arg1;
- (void)personalReg:(id)arg1;
- (void)aluCultivateAlipayCookies:(CDUnknownBlockType)arg1;
- (void)showSsoPage:(id)arg1 t:(id)arg2 euuid:(id)arg3 ssoVersion:(id)arg4 sign:(id)arg5 targetURL:(id)arg6 ext:(id)arg7 userId:(id)arg8 taobaoNick:(id)arg9 headPicLink:(id)arg10 slaveBundleId:(id)arg11;
- (void)showAlert;
- (void)loginBySsoTokenUrl:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)retrievePasswordAsync:(id)arg1 ext:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)openSSOLoginConfirmPage:(id)arg1;
- (void)doCloseLoginPage;
- (void)doForgetPassword;
- (void)doRegister;
- (id)getSession;
- (void)updateSession:(id)arg1;
- (void)removeRegisterObserver:(id)arg1;
- (void)addRegisterObserver:(id)arg1 selector:(SEL)arg2;
- (void)postRegisterNotification:(id)arg1;
- (void)removeLoginObserver:(id)arg1;
- (void)addLoginObserver:(id)arg1 selector:(SEL)arg2;
- (void)postLoginNotification:(id)arg1;
- (void)ssoLoginWith:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)navigateToRestigerPage:(id)arg1;
- (void)passwordMockEasyLoginAsync:(id)arg1 userPwd:(id)arg2;
- (void)passwordLoginAsync:(id)arg1 extraInfo:(id)arg2 loginType:(int)arg3 context:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)init;

@end
