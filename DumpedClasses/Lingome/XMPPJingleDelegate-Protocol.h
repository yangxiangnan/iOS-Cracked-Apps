//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EMError, XMPPIQ;
@protocol IXMPPJingle;

@protocol XMPPJingleDelegate <NSObject>

@optional
- (void)jingle:(id <IXMPPJingle>)arg1 didReceiveSessionInfo:(XMPPIQ *)arg2 error:(EMError *)arg3;
- (void)jingle:(id <IXMPPJingle>)arg1 didReceiveSessionTerminate:(XMPPIQ *)arg2 error:(EMError *)arg3;
- (void)jingle:(id <IXMPPJingle>)arg1 didReceiveRelayConference:(XMPPIQ *)arg2 error:(EMError *)arg3;
- (void)jingle:(id <IXMPPJingle>)arg1 didReceiveSessionAccept:(XMPPIQ *)arg2 error:(EMError *)arg3;
- (void)jingle:(id <IXMPPJingle>)arg1 didReceiveInitAccept:(XMPPIQ *)arg2 error:(EMError *)arg3;
- (void)jingle:(id <IXMPPJingle>)arg1 didReceiveSessionInit:(XMPPIQ *)arg2 error:(EMError *)arg3;
- (void)jingle:(id <IXMPPJingle>)arg1 didNotSendTerminateSessionForPeer:(XMPPIQ *)arg2;
- (void)jingle:(id <IXMPPJingle>)arg1 didSendTerminateSessionForPeer:(XMPPIQ *)arg2;
- (void)jingle:(id <IXMPPJingle>)arg1 didNotSendJoinRelay:(XMPPIQ *)arg2;
- (void)jingle:(id <IXMPPJingle>)arg1 didSendJoinRelay:(XMPPIQ *)arg2;
- (void)jingle:(id <IXMPPJingle>)arg1 didNotSendAcceptSession:(XMPPIQ *)arg2;
- (void)jingle:(id <IXMPPJingle>)arg1 didSendAcceptSession:(XMPPIQ *)arg2;
- (void)jingle:(id <IXMPPJingle>)arg1 didNotSendAcceptInit:(XMPPIQ *)arg2;
- (void)jingle:(id <IXMPPJingle>)arg1 didSendAcceptInit:(XMPPIQ *)arg2;
- (void)jingle:(id <IXMPPJingle>)arg1 didNotSendInitSessionToPeer:(XMPPIQ *)arg2;
- (void)jingle:(id <IXMPPJingle>)arg1 didSendInitSessionToPeer:(XMPPIQ *)arg2;
@end
