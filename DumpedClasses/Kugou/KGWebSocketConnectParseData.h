//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KGWebSocketConnectParseData : NSObject
{
    unsigned long long _count;
    long long _totalTime;
    NSString *_originData;
}

@property(readonly, copy, nonatomic) NSString *originData; // @synthesize originData=_originData;
@property(nonatomic) long long totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)initWithCount:(unsigned long long)arg1 toalTime:(long long)arg2 originData:(id)arg3;

@end
