//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface JumpMomentEditor : JceObjectV2
{
    int jcev2_p_0_o_pageType;
    NSString *jcev2_p_1_o_jumpData;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_jumpData, setter=setJce_jumpData:) NSString *jcev2_p_1_o_jumpData; // @synthesize jcev2_p_1_o_jumpData;
@property(nonatomic, getter=jce_pageType, setter=setJce_pageType:) int jcev2_p_0_o_pageType; // @synthesize jcev2_p_0_o_pageType;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
