//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NewRecommendBase.h"

@class JDImageView, UILabel;

@interface NewRecommendPromotion : NewRecommendBase
{
    JDImageView *promotionBGImageView;
    UILabel *activityLabel;
    JDImageView *itemBGView;
    UILabel *nameLabel;
    UILabel *promotionLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadItemView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

