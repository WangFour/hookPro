//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSDictionary;

@interface JDMovieSeatButton : UIButton
{
    NSDictionary *m_seatInfo;
    long long m_state;
}

@property(nonatomic) long long m_state; // @synthesize m_state;
@property(retain, nonatomic) NSDictionary *m_seatInfo; // @synthesize m_seatInfo;
- (void)dealloc;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
