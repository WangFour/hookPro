//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDMFDComponent.h"

@class GDMRecommendFeedRequest, NSString;

@interface GDMFDRecommendFeedComponent : GDMFDComponent
{
    NSString *_feedId;	// 8 = 0x8
    _Bool _isLoadFeed;	// 16 = 0x10
    GDMRecommendFeedRequest *_request;	// 24 = 0x18
}

- (void).cxx_destruct;
- (void)startLoadRecommendFeed;
- (void)onCommendCallBack:(id)arg1;
- (void)updateRecommendFeedWithArray:(id)arg1;
- (void)configComponentViewWithModel:(id)arg1 componentView:(id)arg2;
- (id)rangerFileName;

@end

