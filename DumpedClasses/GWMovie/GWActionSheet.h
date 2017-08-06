//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView, UITapGestureRecognizer;

@interface GWActionSheet : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>
{
    CDUnknownBlockType _actionHandle;
    CDUnknownBlockType _sheetItemModifyBlock;
    CDUnknownBlockType _cancelBlock;
    NSArray *_menus;
    UITableView *_sheetView;
    UIView *_backView;
    UITapGestureRecognizer *_tapGesture;
    NSString *_currentSelectedTitle;
    UITableView *_cancelTable;
}

+ (id)showActionSheetWithItemTitles:(id)arg1 selectedHandle:(CDUnknownBlockType)arg2;
+ (id)showActionSheetWithItems:(id)arg1 selectedHandle:(CDUnknownBlockType)arg2 withCustomCell:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UITableView *cancelTable; // @synthesize cancelTable=_cancelTable;
@property(copy, nonatomic) NSString *currentSelectedTitle; // @synthesize currentSelectedTitle=_currentSelectedTitle;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UITableView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) NSArray *menus; // @synthesize menus=_menus;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType sheetItemModifyBlock; // @synthesize sheetItemModifyBlock=_sheetItemModifyBlock;
@property(copy, nonatomic) CDUnknownBlockType actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadALL;
- (void)setMenuAndShow:(id)arg1;
- (void)dismissInKeyWindow;
- (void)showInKeyWindow;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)tapAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
