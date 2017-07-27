//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString, UIColor, UILabel;

@interface QLTextField : UITextView
{
    UILabel *placeholderLabel;
    NSString *placeholder;
    UIColor *placeholderColor;
}

@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor;
- (void).cxx_destruct;
- (void)textChanged:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
