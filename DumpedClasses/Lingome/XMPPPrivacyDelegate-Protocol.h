//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, XMPPPrivacy;

@protocol XMPPPrivacyDelegate

@optional
- (void)xmppPrivacy:(XMPPPrivacy *)arg1 didNotSetListWithName:(NSString *)arg2 error:(id)arg3;
- (void)xmppPrivacy:(XMPPPrivacy *)arg1 didSetListWithName:(NSString *)arg2;
- (void)xmppPrivacy:(XMPPPrivacy *)arg1 didNotSetDefaultListName:(NSString *)arg2 error:(id)arg3;
- (void)xmppPrivacy:(XMPPPrivacy *)arg1 didSetDefaultListName:(NSString *)arg2;
- (void)xmppPrivacy:(XMPPPrivacy *)arg1 didNotSetActiveListName:(NSString *)arg2 error:(id)arg3;
- (void)xmppPrivacy:(XMPPPrivacy *)arg1 didSetActiveListName:(NSString *)arg2;
- (void)xmppPrivacy:(XMPPPrivacy *)arg1 didReceivePushWithListName:(NSString *)arg2;
- (void)xmppPrivacy:(XMPPPrivacy *)arg1 didNotReceiveListWithName:(NSString *)arg2 error:(id)arg3;
- (void)xmppPrivacy:(XMPPPrivacy *)arg1 didReceiveListWithName:(NSString *)arg2 items:(NSArray *)arg3;
- (void)xmppPrivacy:(XMPPPrivacy *)arg1 didNotReceiveListNamesDueToError:(id)arg2;
- (void)xmppPrivacy:(XMPPPrivacy *)arg1 didReceiveListNames:(NSArray *)arg2;
@end
