//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRecmdCardModel.h"

@class NSArray<TBRecmdPicComponent>, NSString, TBRecmdPicComponent, TBRecmdRichTextComponent, TBRecmdTipComponent;

@interface TBRecmdNewsCardModel : TBRecmdCardModel
{
    TBRecmdPicComponent *_bgPic;
    TBRecmdPicComponent *_masterPic;
    NSArray<TBRecmdPicComponent> *_images;
    TBRecmdPicComponent *_icon;
    NSString *_subStyle;
    TBRecmdTipComponent *_picTip;
    TBRecmdRichTextComponent *_title;
    TBRecmdRichTextComponent *_tip;
    TBRecmdRichTextComponent *_avatar;
    TBRecmdTipComponent *_bottomTip;
}

+ (id)factoryKey;
@property(retain, nonatomic) TBRecmdTipComponent *bottomTip; // @synthesize bottomTip=_bottomTip;
@property(retain, nonatomic) TBRecmdRichTextComponent *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) TBRecmdRichTextComponent *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) TBRecmdRichTextComponent *title; // @synthesize title=_title;
@property(retain, nonatomic) TBRecmdTipComponent *picTip; // @synthesize picTip=_picTip;
@property(copy, nonatomic) NSString *subStyle; // @synthesize subStyle=_subStyle;
@property(retain, nonatomic) TBRecmdPicComponent *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSArray<TBRecmdPicComponent> *images; // @synthesize images=_images;
@property(retain, nonatomic) TBRecmdPicComponent *masterPic; // @synthesize masterPic=_masterPic;
@property(retain, nonatomic) TBRecmdPicComponent *bgPic; // @synthesize bgPic=_bgPic;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)itemImgURLAtIndex:(long long)arg1;
- (id)countStr;
- (id)author;
- (id)authorImgURL;
- (id)desc;
- (id)iconURL;
- (_Bool)hasIcon;
- (id)titleStr;
- (id)tagImgURL;
- (id)mainImgURL;
- (id)bgImgURL;

@end
