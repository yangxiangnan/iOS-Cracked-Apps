//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBShopSNSPluginMenuItem : TBJSONModel
{
    _Bool _specialTab;
    NSString *_menuID;
    NSString *_name;
    NSString *_eventType;
    NSString *_eventParam;
    NSString *_eventListener;
    NSString *_menuIcon;
    NSString *_textColor;
    NSArray *_array;
}

@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
@property(nonatomic) _Bool specialTab; // @synthesize specialTab=_specialTab;
@property(retain, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *menuIcon; // @synthesize menuIcon=_menuIcon;
@property(retain, nonatomic) NSString *eventListener; // @synthesize eventListener=_eventListener;
@property(retain, nonatomic) NSString *eventParam; // @synthesize eventParam=_eventParam;
@property(retain, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *menuID; // @synthesize menuID=_menuID;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end
