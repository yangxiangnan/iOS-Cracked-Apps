//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBOpenGLFilter.h>

#import "FBOverlayFilter-Protocol.h"

@class FBImmersiveCaptureAggregator;

@interface FBImmersivePreviewFilter : FBOpenGLFilter <FBOverlayFilter>
{
    struct CGSize _outputBufferSize;
    struct CGSize _inputBufferSize;
    FBImmersiveCaptureAggregator *_aggregator;
}

- (void).cxx_destruct;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3 time:(CDStruct_1b6d18a9)arg4;
- (id)fullFragmentShader;
- (id)fullVertexShader;
- (unsigned long long)outputPixelFormat;
- (unsigned long long)inputPixelFormat;
- (id)initWithCaptureAggregator:(id)arg1;

@end
