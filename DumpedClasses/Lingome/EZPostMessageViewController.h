//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class EZVoiceHUD, NSData, NSLayoutConstraint, NSMutableSet, NSString, UIButton, UILabel, UITextView, UIView, _TtC17LingoAVFoundation10EZRecorder;
@protocol EZPostMessageVCDelegate;

@interface EZPostMessageViewController : UIViewController <UITextViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    _Bool _keyboardResignByButtonAction;
    _Bool _submitEnable;
    _Bool _recordMode;
    _Bool _cancelAudio;
    UIViewController<EZPostMessageVCDelegate> *_delegate;
    NSString *_mentionedUserName;
    EZVoiceHUD *_voiceHUD;
    _TtC17LingoAVFoundation10EZRecorder *_recorder;
    NSString *_posterId;
    NSString *_posterName;
    UIButton *_sendButton;
    UITextView *_textView;
    NSLayoutConstraint *_containerHeightCons;
    UIView *_toolbar;
    NSLayoutConstraint *_toolbarHeightCons;
    UILabel *_placeholderLabel;
    NSString *_content;
    UIView *_imageContainer;
    UIButton *_photoAlbumButton;
    UILabel *_photoAlbumLabel;
    UIButton *_cameraButton;
    UILabel *_cameraLabel;
    NSLayoutConstraint *_imageContainerBottomSpaceCons;
    NSData *_uploadImageData;
    UIButton *_recordButton;
    UIButton *_audioModeButton;
    long long _lastTextLength;
    NSMutableSet *_atUserName;
}

@property(retain, nonatomic) NSMutableSet *atUserName; // @synthesize atUserName=_atUserName;
@property(nonatomic) long long lastTextLength; // @synthesize lastTextLength=_lastTextLength;
@property(nonatomic) _Bool cancelAudio; // @synthesize cancelAudio=_cancelAudio;
@property(nonatomic) __weak UIButton *audioModeButton; // @synthesize audioModeButton=_audioModeButton;
@property(nonatomic) _Bool recordMode; // @synthesize recordMode=_recordMode;
@property(nonatomic) __weak UIButton *recordButton; // @synthesize recordButton=_recordButton;
@property(retain, nonatomic) NSData *uploadImageData; // @synthesize uploadImageData=_uploadImageData;
@property(nonatomic) __weak NSLayoutConstraint *imageContainerBottomSpaceCons; // @synthesize imageContainerBottomSpaceCons=_imageContainerBottomSpaceCons;
@property(nonatomic) __weak UILabel *cameraLabel; // @synthesize cameraLabel=_cameraLabel;
@property(nonatomic) __weak UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(nonatomic) __weak UILabel *photoAlbumLabel; // @synthesize photoAlbumLabel=_photoAlbumLabel;
@property(nonatomic) __weak UIButton *photoAlbumButton; // @synthesize photoAlbumButton=_photoAlbumButton;
@property(nonatomic) __weak UIView *imageContainer; // @synthesize imageContainer=_imageContainer;
@property(nonatomic) _Bool submitEnable; // @synthesize submitEnable=_submitEnable;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) __weak UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(nonatomic) __weak NSLayoutConstraint *toolbarHeightCons; // @synthesize toolbarHeightCons=_toolbarHeightCons;
@property(nonatomic) __weak UIView *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) __weak NSLayoutConstraint *containerHeightCons; // @synthesize containerHeightCons=_containerHeightCons;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(copy, nonatomic) NSString *posterName; // @synthesize posterName=_posterName;
@property(copy, nonatomic) NSString *posterId; // @synthesize posterId=_posterId;
@property(retain, nonatomic) _TtC17LingoAVFoundation10EZRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) EZVoiceHUD *voiceHUD; // @synthesize voiceHUD=_voiceHUD;
@property(nonatomic) _Bool keyboardResignByButtonAction; // @synthesize keyboardResignByButtonAction=_keyboardResignByButtonAction;
@property(copy, nonatomic) NSString *mentionedUserName; // @synthesize mentionedUserName=_mentionedUserName;
@property(nonatomic) __weak UIViewController<EZPostMessageVCDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)inputTextResignResponder;
- (void)inputTextBecomeFirstResponder;
- (_Bool)hasBecomeFirstResponder;
- (_Bool)hasContent;
- (void)clearData;
- (void)updateSendTitle:(id)arg1;
- (void)checkSendButtonState;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)addAtUserName:(id)arg1;
- (double)toolBarContentHeight;
- (id)currentText;
- (void)deleteTextWithRange:(struct _NSRange)arg1;
- (void)insertText:(id)arg1;
- (void)sendAction:(id)arg1;
- (void)photoModeAction;
- (void)audioOrKeyboardModeExchangeAction:(id)arg1;
- (void)stopRecordIfNeed;
- (void)touchUpOutside;
- (void)dragEnter;
- (void)dragExit;
- (double)toolBarHeight;
- (void)touchUpInside;
- (void)recordAction;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)checkSelectPhotoWays;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)cameraAction;
- (void)photoAlbumAction;
- (void)setupButtonsStyle;
- (void)setupTextViewStyle;
- (void)keyboardWillHide:(id)arg1;
- (void)postReplyVCWillShowContentHeight:(double)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dismissKeyboard;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
