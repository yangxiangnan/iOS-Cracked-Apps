//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KxMovieGLRenderer-Protocol.h"

@interface KxMovieGLRenderer_RGB : NSObject <KxMovieGLRenderer>
{
    int _uniformSampler;
    unsigned int _texture;
}

- (void)dealloc;
- (_Bool)prepareRender;
- (void)setFrame:(id)arg1;
- (void)resolveUniforms:(unsigned int)arg1;
- (id)fragmentShader;
- (_Bool)isValid;

@end
