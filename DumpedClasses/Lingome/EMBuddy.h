//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EMBuddy : NSObject
{
    _Bool _isPendingApproval;
    NSString *_username;
    long long _followState;
}

+ (id)buddyWithUsername:(id)arg1;
@property(nonatomic) _Bool isPendingApproval; // @synthesize isPendingApproval=_isPendingApproval;
@property(nonatomic) long long followState; // @synthesize followState=_followState;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end
