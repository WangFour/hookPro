//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBDownloader : NSObject
{
    NSString *_destPath;	// 8 = 0x8
}

+ (id)defaultDownloader;
@property(retain, nonatomic) NSString *destPath; // @synthesize destPath=_destPath;
- (void).cxx_destruct;
- (void)downloadFileAtURL:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)init;

@end
