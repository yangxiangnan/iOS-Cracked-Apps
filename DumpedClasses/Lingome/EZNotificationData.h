//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL, UIImage;

@interface EZNotificationData : NSObject
{
    _Bool _shouldShowColorContent;
    NSURL *_avatarUrl;
    NSString *_title;
    NSString *_content;
    long long _unreadCount;
    UIImage *_defaultAvatar;
    NSDate *_date;
    NSString *_resourceId;
    id _value;
}

@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) UIImage *defaultAvatar; // @synthesize defaultAvatar=_defaultAvatar;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) _Bool shouldShowColorContent; // @synthesize shouldShowColorContent=_shouldShowColorContent;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
- (void).cxx_destruct;
- (int)typeOfNotification;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
