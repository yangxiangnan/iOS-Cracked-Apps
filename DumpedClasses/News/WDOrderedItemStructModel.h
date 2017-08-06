//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString, NSString<Optional>;

@interface WDOrderedItemStructModel : WDBaseModel
{
    NSString *_title;
    NSString *_open_page_url;
    NSString<Optional> *_type_name;
    NSString *_impr_id;
    NSNumber *_item_id;
    NSNumber *_group_id;
    NSString<Optional> *_aggr_type;
}

@property(retain, nonatomic) NSString<Optional> *aggr_type; // @synthesize aggr_type=_aggr_type;
@property(retain, nonatomic) NSNumber *group_id; // @synthesize group_id=_group_id;
@property(retain, nonatomic) NSNumber *item_id; // @synthesize item_id=_item_id;
@property(retain, nonatomic) NSString *impr_id; // @synthesize impr_id=_impr_id;
@property(retain, nonatomic) NSString<Optional> *type_name; // @synthesize type_name=_type_name;
@property(retain, nonatomic) NSString *open_page_url; // @synthesize open_page_url=_open_page_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
