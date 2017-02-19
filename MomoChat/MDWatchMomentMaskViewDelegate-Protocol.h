//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDGiftItem, UIButton, UIImageView, UILabel, UIView;

@protocol MDWatchMomentMaskViewDelegate <NSObject>

@optional
- (void)didTapCommentAnimView;
- (void)didClickMaskView:(id)arg1;
- (void)maskViewDidSendSingleGift:(MDGiftItem *)arg1;
- (void)maskViewDidGiftAlertShowed:(_Bool)arg1;
- (void)watchMomentMaskVeiw:(id)arg1 didTapLeftArrowView:(UIView *)arg2;
- (void)watchMomentMaskVeiw:(id)arg1 didTapPickerView:(UIImageView *)arg2;
- (void)watchMomentMaskVeiw:(id)arg1 didTapRecommendLabel:(UILabel *)arg2;
- (void)watchMomentMaskVeiw:(id)arg1 didTapCommentLabel:(UILabel *)arg2;
- (void)watchMomentMaskView:(id)arg1 didClickTopicView:(UIView *)arg2;
- (void)watchMomentMaskView:(id)arg1 didClickLikeViewWithState:(_Bool)arg2;
- (void)watchMomentMaskView:(id)arg1 didClickNextUserAvatarView:(UIView *)arg2;
- (void)watchMomentMaskView:(id)arg1 didClickGoToProjectBtn:(UIButton *)arg2;
- (void)watchMomentMaskView:(id)arg1 didClickShareBtn:(UIButton *)arg2;
- (void)watchMomentMaskView:(id)arg1 didClickFollowBtn:(UIButton *)arg2;
- (void)watchMomentMaskView:(id)arg1 didClickReplayBtn:(UIButton *)arg2;
- (void)watchMomentMaskView:(id)arg1 didClickDownloadBtn:(UIButton *)arg2;
- (void)watchMomentMaskView:(id)arg1 didClickDeleteMomentBtn:(UIButton *)arg2;
- (void)watchMomentMaskView:(id)arg1 didClickSendMessageBtn:(UIButton *)arg2;
- (void)watchMomentMaskView:(id)arg1 didClickSendGiftView:(UIImageView *)arg2;
- (void)watchMomentMaskView:(id)arg1 didClickCloseBtn:(UIButton *)arg2;
- (void)watchMomentMaskView:(id)arg1 didClickAvatarView:(UIView *)arg2;
@end
