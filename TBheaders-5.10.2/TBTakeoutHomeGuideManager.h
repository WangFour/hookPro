//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBTakeoutHomeGuideViewDelegate-Protocol.h"

@class NSString, TBTakeoutHomeGuideView;

@interface TBTakeoutHomeGuideManager : NSObject <TBTakeoutHomeGuideViewDelegate>
{
    TBTakeoutHomeGuideView *_guideView;	// 8 = 0x8
}

@property(retain, nonatomic) TBTakeoutHomeGuideView *guideView; // @synthesize guideView=_guideView;
- (void).cxx_destruct;
- (void)onGuideViewConfirmClicked;
- (void)setGuideViewShownKey;
- (_Bool)hasShownGuideView;
- (void)showGuideViewIfNeededInViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
