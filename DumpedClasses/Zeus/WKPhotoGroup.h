//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WKPhotoGroup : NSObject
{
    unsigned long long _day;
    unsigned long long _month;
    unsigned long long _year;
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long year; // @synthesize year=_year;
@property(nonatomic) unsigned long long month; // @synthesize month=_month;
@property(nonatomic) unsigned long long day; // @synthesize day=_day;
- (void).cxx_destruct;
- (id)init;

@end
