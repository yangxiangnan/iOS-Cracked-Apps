//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class QLJCEActionBarInfo;

@interface QLJCEStarTopicInfo : JceObjectV2
{
    int jcev2_p_1_o_type;
    QLJCEActionBarInfo *jcev2_p_0_o_topic;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_type, setter=setJce_type:) int jcev2_p_1_o_type; // @synthesize jcev2_p_1_o_type;
@property(retain, nonatomic, getter=jce_topic, setter=setJce_topic:) QLJCEActionBarInfo *jcev2_p_0_o_topic; // @synthesize jcev2_p_0_o_topic;
- (void).cxx_destruct;
- (id)init;

@end
