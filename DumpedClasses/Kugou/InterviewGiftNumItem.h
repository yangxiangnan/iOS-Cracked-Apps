//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface InterviewGiftNumItem : UIView
{
    _Bool _selected;
    unsigned long long _numType;
    UIImageView *_giftImgV;
    UILabel *_title;
    UIImageView *_selectImg;
    UIImageView *_markTickImgView;
    NSString *_titleName;
    NSString *_imgName;
}

@property(retain, nonatomic) NSString *imgName; // @synthesize imgName=_imgName;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(retain, nonatomic) UIImageView *markTickImgView; // @synthesize markTickImgView=_markTickImgView;
@property(retain, nonatomic) UIImageView *selectImg; // @synthesize selectImg=_selectImg;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *giftImgV; // @synthesize giftImgV=_giftImgV;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long numType; // @synthesize numType=_numType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)installImageView;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 image:(id)arg3 type:(unsigned long long)arg4;

@end
