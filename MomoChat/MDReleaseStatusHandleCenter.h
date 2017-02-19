//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTStatusBarOverlayDelegate.h"

@class MDPublishParam, MTStatusBarOverlay, NSMutableArray, NSString;

@interface MDReleaseStatusHandleCenter : NSObject <MTStatusBarOverlayDelegate>
{
    _Bool _show;
    MTStatusBarOverlay *_overlay;
    MDPublishParam *_currentPara;
    NSMutableArray *_paraQueue;
}

+ (void)showStatusTipWithPara:(id)arg1;
+ (id)defaultCenter;
@property(nonatomic, getter=isShowing) _Bool show; // @synthesize show=_show;
@property(retain, nonatomic) NSMutableArray *paraQueue; // @synthesize paraQueue=_paraQueue;
@property(retain, nonatomic) MDPublishParam *currentPara; // @synthesize currentPara=_currentPara;
@property(retain, nonatomic) MTStatusBarOverlay *overlay; // @synthesize overlay=_overlay;
- (void)statusBarOverlayDidHide;
- (void)statusBarOverlayDidRecognizeGesture:(id)arg1;
- (void)showTipMessageWithPara:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
