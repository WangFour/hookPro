//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMMarketBaseComponent.h"

#import "TMCoverFlowViewDataSource-Protocol.h"

@class NSArray, NSMutableArray, NSString, TMCoverFlowView, UIImage, UIImageView;

@interface TMMarketBannerComponent : TMMarketBaseComponent <TMCoverFlowViewDataSource>
{
    UIImage *_placeholderImage;	// 24 = 0x18
    NSArray *_imgURLArray;	// 32 = 0x20
    double _shufflingTime;	// 40 = 0x28
    TMCoverFlowView *_bannerView;	// 48 = 0x30
    NSMutableArray *_imgArray;	// 56 = 0x38
    UIImageView *_singleBannerImageView;	// 64 = 0x40
}

@property(retain, nonatomic) UIImageView *singleBannerImageView; // @synthesize singleBannerImageView=_singleBannerImageView;
@property(retain, nonatomic) NSMutableArray *imgArray; // @synthesize imgArray=_imgArray;
@property(retain, nonatomic) TMCoverFlowView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) double shufflingTime; // @synthesize shufflingTime=_shufflingTime;
@property(retain, nonatomic) NSArray *imgURLArray; // @synthesize imgURLArray=_imgURLArray;
- (void).cxx_destruct;
- (void)reloadImage;
- (id)placeholderWithSize:(struct CGSize)arg1;
- (void)calculateLayout;
- (void)componentWillShowWithIsReload:(_Bool)arg1;
- (id)imageAtIndex:(long long)arg1;
- (int)numberOfTotalViews;
- (void)singleBannerImageViewClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
