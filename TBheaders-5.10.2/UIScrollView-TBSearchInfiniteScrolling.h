//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class TBSearchInfiniteScrollingView, UIView;

@interface UIScrollView (TBSearchInfiniteScrolling)
- (void)reachTBSearchInfiniteScrollingEnd;
- (void)resetTBSearchInfiniteScrolling;
- (void)hideTBSearchInfiniteScrollingTailView;
- (void)showTBSearchInfiniteScrollingTailView;
- (void)showTBSearchInfiniteScrollingTailView:(id)arg1;
@property(nonatomic) _Bool searchShowsInfiniteTailView;
@property(nonatomic) _Bool searchShowsInfiniteScrolling;
@property(retain, nonatomic) UIView *searchInfiniteTailView;
@property(retain, nonatomic) TBSearchInfiniteScrollingView *searchInfiniteScrollingView; // @dynamic searchInfiniteScrollingView;
- (void)triggerTBSearchInfiniteScrolling;
- (void)addTBSearchInfiniteScrollingWithActionHandler:(CDUnknownBlockType)arg1;
@end
