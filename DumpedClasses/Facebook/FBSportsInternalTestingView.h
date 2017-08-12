//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIDatePicker, UITableView, UITextField;
@protocol FBSportsInternalTestingViewDelegate;

@interface FBSportsInternalTestingView : UIView
{
    UITextField *_input;
    UIButton *_inputButton;
    UIDatePicker *_datePicker;
    UIButton *_marchMadnessButton;
    UIButton *_olympicsButton;
    id <FBSportsInternalTestingViewDelegate> _delegate;
    UITableView *_tableView;
}

@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <FBSportsInternalTestingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_exampleButtonWithTitle:(id)arg1;
- (void)_datePickerDidUpdate:(id)arg1;
- (void)_buttonTapped:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
