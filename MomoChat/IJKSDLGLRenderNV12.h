//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IJKSDLGLRender.h"

@interface IJKSDLGLRenderNV12 : NSObject <IJKSDLGLRender>
{
    int _uniform[1];
    int _uniformSamplers[2];
    unsigned int _textures[2];
    struct __CVOpenGLESTextureCache *_textureCache;
    struct __CVBuffer *_cvTexturesRef[2];
}

- (void)dealloc;
- (_Bool)prepareDisplay;
- (void)render:(struct SDL_VoutOverlay *)arg1;
- (void)resolveUniforms:(unsigned int)arg1;
- (id)fragmentShader;
- (_Bool)isValid;
- (id)initWithTextureCache:(struct __CVOpenGLESTextureCache *)arg1;

@end
