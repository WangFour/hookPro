//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMDeviceHeadImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WCDevicePedometerCell : MMTableViewCell
{
    MMDeviceHeadImageView *_headView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMDeviceHeadImageView *headView; // @synthesize headView=_headView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)resetIcon;
- (void)setDeviceIconUrl:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)initCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

