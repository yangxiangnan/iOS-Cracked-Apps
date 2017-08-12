//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RoutingHTTPServer;
@protocol WKMobileConfigInstallerDelegate;

@interface WKMobileConfigInstaller : NSObject
{
    _Bool _firstTime;
    id <WKMobileConfigInstallerDelegate> _delegate;
    RoutingHTTPServer *_httpServer;
    NSString *_openURL;
    NSString *_ssid;
    NSString *_bssid;
    NSString *_src;
}

+ (id)configFilePath;
+ (_Bool)canOpenURL:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool firstTime; // @synthesize firstTime=_firstTime;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) NSString *bssid; // @synthesize bssid=_bssid;
@property(retain, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(retain, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(readonly, nonatomic) RoutingHTTPServer *httpServer; // @synthesize httpServer=_httpServer;
@property(nonatomic) __weak id <WKMobileConfigInstallerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)appBecomeActive;
- (void)registAppBecomeActiveNotifaction;
- (void)downloadMobileConfigFileWithURL:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)installMobileConfigProfileWithURL:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)installLocalMobileConfigProfile;
- (id)htmlContentFormat;
- (void)handleMobileconfigLoadRequest:(id)arg1 withResponse:(id)arg2;
- (void)handleMobileconfigRootRequest:(id)arg1 withResponse:(id)arg2;
- (void)startHttpServer;
- (id)init;
- (id)sharedInstance;

@end
