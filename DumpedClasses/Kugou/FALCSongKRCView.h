//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FAOneRowKrcView, NSArray, NSString;

@interface FALCSongKRCView : UIView
{
    _Bool _isClickCloseAction;
    FAOneRowKrcView *_krcView;
    NSArray *_songKrcArray;
    NSString *_songHash;
    CDUnknownBlockType _closeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(nonatomic) _Bool isClickCloseAction; // @synthesize isClickCloseAction=_isClickCloseAction;
@property(retain, nonatomic) NSString *songHash; // @synthesize songHash=_songHash;
@property(retain, nonatomic) NSArray *songKrcArray; // @synthesize songKrcArray=_songKrcArray;
@property(retain, nonatomic) FAOneRowKrcView *krcView; // @synthesize krcView=_krcView;
- (void).cxx_destruct;
- (void)showCloseViewAnimation;
- (void)hideCloseViewAnimation;
- (void)closeBtnAction:(id)arg1;
- (void)closeTimer;
- (void)startTimer;
- (void)closeViewCloseAction;
- (id)initWithFrame:(struct CGRect)arg1;

@end
