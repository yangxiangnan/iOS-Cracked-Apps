//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, XMPPMessage, XMPPPresence, XMPPRoom;

@protocol XMPPRoomStorage <NSObject>
- (void)handleDidLeaveRoom:(XMPPRoom *)arg1;
- (void)handleOutgoingMessage:(XMPPMessage *)arg1 room:(XMPPRoom *)arg2;
- (void)handleIncomingMessage:(XMPPMessage *)arg1 room:(XMPPRoom *)arg2;
- (void)handlePresence:(XMPPPresence *)arg1 room:(XMPPRoom *)arg2;
- (_Bool)configureWithParent:(XMPPRoom *)arg1 queue:(struct dispatch_queue_s *)arg2;

@optional
- (void)handleDidJoinRoom:(XMPPRoom *)arg1 withNickname:(NSString *)arg2;
@end
