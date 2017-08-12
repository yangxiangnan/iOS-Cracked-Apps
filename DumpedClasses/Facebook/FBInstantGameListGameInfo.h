//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBInstantGameListGameInfo : FBValueObject <NSCopying>
{
    NSString *_gameAppID;
    NSString *_gameName;
    NSString *_gameIconURLString;
}

@property(readonly, copy, nonatomic) NSString *gameIconURLString; // @synthesize gameIconURLString=_gameIconURLString;
@property(readonly, copy, nonatomic) NSString *gameName; // @synthesize gameName=_gameName;
@property(readonly, copy, nonatomic) NSString *gameAppID; // @synthesize gameAppID=_gameAppID;
- (void).cxx_destruct;
- (id)initWithGameAppID:(id)arg1 gameName:(id)arg2 gameIconURLString:(id)arg3;

@end
