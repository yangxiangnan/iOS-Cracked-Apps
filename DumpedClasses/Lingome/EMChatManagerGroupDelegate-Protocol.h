//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EMChatManagerDelegateBase-Protocol.h"

@class EMError, EMGroup, NSArray, NSString;

@protocol EMChatManagerGroupDelegate <EMChatManagerDelegateBase>

@optional
- (NSString *)nicknameForAccount:(NSString *)arg1 inGroup:(NSString *)arg2;
- (void)didApplyJoinPublicGroup:(EMGroup *)arg1 error:(EMError *)arg2;
- (void)didJoinPublicGroup:(EMGroup *)arg1 error:(EMError *)arg2;
- (void)didFetchGroupBans:(NSString *)arg1 list:(NSArray *)arg2 error:(EMError *)arg3;
- (void)didFetchGroupOccupantsList:(NSArray *)arg1 error:(EMError *)arg2;
- (void)didFetchGroupInfo:(EMGroup *)arg1 error:(EMError *)arg2;
- (void)didFetchAllPublicGroups:(NSArray *)arg1 error:(EMError *)arg2;
- (void)didUpdateGroupList:(NSArray *)arg1 error:(EMError *)arg2;
- (void)didAcceptApplyJoinGroup:(NSString *)arg1 username:(NSString *)arg2 error:(EMError *)arg3;
- (void)didReceiveAcceptApplyToJoinGroup:(NSString *)arg1 groupname:(NSString *)arg2 error:(EMError *)arg3;
- (void)didReceiveAcceptApplyToJoinGroup:(NSString *)arg1 groupname:(NSString *)arg2;
- (void)didReceiveRejectApplyToJoinGroupFrom:(NSString *)arg1 groupname:(NSString *)arg2 reason:(NSString *)arg3 error:(EMError *)arg4;
- (void)didReceiveRejectApplyToJoinGroupFrom:(NSString *)arg1 groupname:(NSString *)arg2 reason:(NSString *)arg3;
- (void)didReceiveApplyToJoinGroup:(NSString *)arg1 groupname:(NSString *)arg2 applyUsername:(NSString *)arg3 reason:(NSString *)arg4 error:(EMError *)arg5;
- (void)didReceiveApplyToJoinGroup:(NSString *)arg1 groupname:(NSString *)arg2 applyUsername:(NSString *)arg3 reason:(NSString *)arg4;
- (void)didReceiveGroupRejectFrom:(NSString *)arg1 invitee:(NSString *)arg2 reason:(NSString *)arg3 error:(EMError *)arg4;
- (void)didReceiveGroupRejectFrom:(NSString *)arg1 invitee:(NSString *)arg2 reason:(NSString *)arg3;
- (void)didReceiveGroupInvitationFrom:(NSString *)arg1 inviter:(NSString *)arg2 message:(NSString *)arg3 error:(EMError *)arg4;
- (void)didAcceptInvitationFromGroup:(EMGroup *)arg1 error:(EMError *)arg2;
- (void)didAutoAcceptedGroupInvitationFrom:(NSString *)arg1 inviter:(NSString *)arg2 message:(NSString *)arg3;
- (void)didReceiveGroupInvitationFrom:(NSString *)arg1 inviter:(NSString *)arg2 message:(NSString *)arg3;
- (void)groupDidUpdateInfo:(EMGroup *)arg1 error:(EMError *)arg2;
- (void)group:(EMGroup *)arg1 didLeave:(long long)arg2 error:(EMError *)arg3;
- (void)group:(EMGroup *)arg1 didCreateWithError:(EMError *)arg2;
@end
