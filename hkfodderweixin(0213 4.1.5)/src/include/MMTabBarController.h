//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface MMTabBarController : UITabBarController
{
    unsigned int _viewControllersCount;	// 4 = 0x4
    NSMutableArray *_tabBarBtns;	// 8 = 0x8
    NSMutableArray *_badgeViews;	// 12 = 0xc
//    UITapGestureRecognizer *_doubleTapGesture;	// 16 = 0x10
    BOOL _hasDoubleTapGesture;	// 20 = 0x14
    float _lastScreenWidth;	// 24 = 0x18
}

@property(nonatomic) NSUInteger selectedIndex;

//- (void)setSelectedIndex:(NSUInteger)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;	// IMP=0x013e81b1
- (unsigned int)supportedInterfaceOrientations;	// IMP=0x013e8151
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;	// IMP=0x013e80ed
- (void)setTabBarBadgeImage:(id)arg1 forIndex:(unsigned int)arg2;	// IMP=0x013e7ea3
- (void)setTabBarBadgeString:(id)arg1 forIndex:(int)arg2;	// IMP=0x013e7d51
- (void)setTabBarBadgeValue:(int)arg1 forIndex:(int)arg2;	// IMP=0x013e7a39
- (id)getViewControllerAtIndex:(unsigned long)arg1;	// IMP=0x013e797b
- (id)currentViewController;	// IMP=0x013e796b
- (id)getTabBarBtnForIndex:(int)arg1;	// IMP=0x013e7881
- (id)getTabBarBtnViews;	// IMP=0x013e76a3
- (void)bringBadgeViewsToFront;	// IMP=0x013e75a1
- (id)getBadgeViewForIndex:(int)arg1;	// IMP=0x013e74e1
- (id)getBadgeViews;	// IMP=0x013e7191
- (void)handleDoubleTapGesture:(id)arg1;	// IMP=0x013e70b3
- (void)removeDoubleTapGesture;	// IMP=0x013e7077
- (void)addDoubleTapGesture;	// IMP=0x013e6f77
- (void)showTabBarWithNoViewHeightUpdateForIndex:(int)arg1;	// IMP=0x013e6f41
- (void)hideTabBarWithNoViewHeightUpdateForIndex:(int)arg1;	// IMP=0x013e6f0b
- (void)showTabBarForIndex:(int)arg1;	// IMP=0x013e6ed5
- (void)hideTabBarForIndex:(int)arg1;	// IMP=0x013e6e9f
- (void)showTabBar;	// IMP=0x013e6e0b
- (void)hideTabBar;	// IMP=0x013e6d77
- (void)setAllTabBarItemEnabled:(BOOL)arg1;	// IMP=0x013e6d3b
- (int)getBadgeViewRightMarginPortrait;	// IMP=0x013e6ca9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x013e6c59
- (void)relayoutBadgeViewForIpadIOS8;	// IMP=0x013e6a15
- (void)reLayoutTabbarToOrientation:(int)arg1;	// IMP=0x013e6835
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;	// IMP=0x013e67a5
- (void)setViewControllers:(id)arg1;	// IMP=0x013e671b
- (void)setSelectedViewController:(id)arg1;	// IMP=0x013e6649
- (void)setSelectedIndex:(NSUInteger)arg1;	// IMP=0x013e6539
- (void)viewDidAppear:(BOOL)arg1;	// IMP=0x013e6497
- (void)viewDidLoad;	// IMP=0x013e646b
- (void)viewDidLayoutSubviews;	// IMP=0x013e633d
- (void)viewWillLayoutSubviews;	// IMP=0x013e611b
- (void)makeSureFrame;	// IMP=0x013e5c41
- (void)viewWillAppear:(BOOL)arg1;	// IMP=0x013e5c01
- (id)init;	// IMP=0x013e5a15

@end
