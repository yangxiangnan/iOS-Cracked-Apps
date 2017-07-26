//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, CALayer, NSObject<OS_dispatch_queue>, NSTimer, UIView;

@interface StepFrameCapture : NSObject
{
    AVAssetWriter *_videoWriter;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_avAdaptor;
    _Bool _recording;
    _Bool _writing;
    double _firstFrameTime;
    NSTimer *_timer;
    _Bool _isFirstFrame;
    id <StepFrameCaptureDelegate> _delegate;
    unsigned long long _frameRate;
    double _spaceDate;
    UIView *_captureView;
    CALayer *_captureLayer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CALayer *captureLayer; // @synthesize captureLayer=_captureLayer;
@property(retain, nonatomic) UIView *captureView; // @synthesize captureView=_captureView;
@property(nonatomic) double spaceDate; // @synthesize spaceDate=_spaceDate;
@property(nonatomic) unsigned long long frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) __weak id <StepFrameCaptureDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)captureRect;
- (id)tempFilePath;
- (void)discardRecordingSession;
- (void)completeRecordingSessionWithCallback:(CDUnknownBlockType)arg1;
- (void)cleanupWriter;
- (_Bool)setupWriter;
- (id)snapshotScreen;
- (void)getFrame;
- (void)writeVideoFrameAtTime:(CDStruct_1b6d18a9)arg1 addImage:(struct CGImage *)arg2;
- (void)drawFrame;
- (_Bool)isRecording;
- (void)discardRecording;
- (void)stopRecording;
- (_Bool)startRecording;
- (void)prepareRecordingWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
