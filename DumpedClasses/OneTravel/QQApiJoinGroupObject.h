//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSString;

@interface QQApiJoinGroupObject : QQApiObject
{
    NSString *_groupUin;
    NSString *_groupKey;
}

+ (id)objectWithGroupKey:(id)arg1;
+ (id)objectWithGroupInfo:(id)arg1 key:(id)arg2;
@property(retain, nonatomic) NSString *groupKey; // @synthesize groupKey=_groupKey;
@property(retain, nonatomic) NSString *groupUin; // @synthesize groupUin=_groupUin;
- (void)dealloc;
- (id)initWithGroupInfo:(id)arg1 key:(id)arg2;

@end
