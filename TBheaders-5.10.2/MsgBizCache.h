//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MsgBizCache : NSObject
{
    NSMutableDictionary *_imageCache;	// 8 = 0x8
}

+ (id)sharedCache;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (void)saveToUserDefault;
- (id)cacheImageData:(id)arg1 withDataUrl:(id)arg2 previewUrl:(id)arg3 size:(long long)arg4;
- (id)imageCache4Data:(id)arg1;
- (void)dealloc;

@end
