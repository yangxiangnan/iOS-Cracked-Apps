//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMPPGroupRoughInfo : NSObject
{
    _Bool isPublic;
    _Bool isMemberByDefault;
    _Bool isMembersOnly;
    _Bool isAllowInvite;
    NSString *groupJid;
    NSString *groupSubject;
    NSString *groupDescription;
    NSString *_owner;
}

+ (id)groupRoughInfoListFromDictionaries:(id)arg1;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(nonatomic) _Bool isAllowInvite; // @synthesize isAllowInvite;
@property(nonatomic) _Bool isMembersOnly; // @synthesize isMembersOnly;
@property(nonatomic) _Bool isMemberByDefault; // @synthesize isMemberByDefault;
@property(nonatomic) _Bool isPublic; // @synthesize isPublic;
@property(retain, nonatomic) NSString *groupDescription; // @synthesize groupDescription;
@property(retain, nonatomic) NSString *groupSubject; // @synthesize groupSubject;
@property(retain, nonatomic) NSString *groupJid; // @synthesize groupJid;
- (void).cxx_destruct;

@end
