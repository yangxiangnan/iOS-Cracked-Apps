//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WIHttpData : NSObject
{
    long long nType;
    _Bool isCompress;
}

@property(readonly) long long nType; // @synthesize nType;
- (void)unPack:(id)arg1;
- (id)pack;
- (id)init;

@end
