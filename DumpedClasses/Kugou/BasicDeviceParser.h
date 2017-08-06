//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasicParser.h"

@class BasicUPnPDevice, NSMutableArray, NSString;

@interface BasicDeviceParser : BasicParser
{
    BasicUPnPDevice *device;
    NSString *iconURL;
    NSString *iconWidth;
    NSString *iconHeight;
    NSString *iconMime;
    NSString *iconDepth;
    NSMutableArray *friendlyNameStack;
    NSMutableArray *udnStack;
    NSString *friendlyName;
    NSString *manufacturer;
    NSString *udn;
    NSString *modelDescription;
    NSString *modelName;
    NSString *modelNumber;
    NSString *serialNumber;
    NSString *manufacturerURLString;
    NSString *modelURLString;
}

@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber;
@property(retain, nonatomic) NSString *modelURLString; // @synthesize modelURLString;
@property(retain, nonatomic) NSString *modelNumber; // @synthesize modelNumber;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName;
@property(retain, nonatomic) NSString *modelDescription; // @synthesize modelDescription;
@property(retain) NSString *manufacturerURLString; // @synthesize manufacturerURLString;
@property(retain) NSString *manufacturer; // @synthesize manufacturer;
@property(retain) NSString *friendlyName; // @synthesize friendlyName;
@property(retain) NSString *udn; // @synthesize udn;
@property(retain) NSString *iconDepth; // @synthesize iconDepth;
@property(retain) NSString *iconMime; // @synthesize iconMime;
@property(retain) NSString *iconHeight; // @synthesize iconHeight;
@property(retain) NSString *iconWidth; // @synthesize iconWidth;
@property(retain) NSString *iconURL; // @synthesize iconURL;
- (void)embeddedDevice:(id)arg1;
- (void)rootDevice:(id)arg1;
- (void)iconFound:(id)arg1;
@property(readonly, nonatomic) int parse;
- (void)dealloc;
- (id)initWithUPnPDevice:(id)arg1;

@end
