//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMArModel.h"

@class NSString;

@interface MMArMaterial : MMArModel
{
    NSString *_name;
    NSString *_updateTime;
    NSString *_mid;
    NSString *_type;
    NSString *_url;
    double _algotype;
}

+ (id)baseTypePropertyList;
+ (id)customTypePropertyDic;
@property(nonatomic) double algotype; // @synthesize algotype=_algotype;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
