//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSCardView.h"

@class UIImageView, UILabel, UIView;

@interface TBSNSCardISV : TBSNSCardView
{
    UIImageView *_image;	// 8 = 0x8
    UILabel *_text;	// 16 = 0x10
    UIView *_textBg;	// 24 = 0x18
}

+ (struct CGSize)fixedSize;
- (void).cxx_destruct;
- (void)setIconColor:(id)arg1;
- (void)reset;
- (void)setImageWithUrl:(id)arg1;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
