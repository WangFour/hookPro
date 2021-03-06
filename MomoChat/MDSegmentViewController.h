//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MDBadgeSegmentControlDelegate.h"

@class MDBadgeSegmentControl, NSArray, NSString;

@interface MDSegmentViewController : UIViewController <MDBadgeSegmentControlDelegate>
{
    MDBadgeSegmentControl *_segmentControl;
    UIViewController *currentContentController;
    NSArray *contentViewControllers;
    NSArray *segmentItems;
    long long currentSelectedIndex;
}

@property(nonatomic) long long currentSelectedIndex; // @synthesize currentSelectedIndex;
@property(retain, nonatomic) NSArray *segmentItems; // @synthesize segmentItems;
@property(retain, nonatomic) UIViewController *currentContentController; // @synthesize currentContentController;
@property(retain, nonatomic) NSArray *contentViewControllers; // @synthesize contentViewControllers;
@property(retain, nonatomic) MDBadgeSegmentControl *segmentControl; // @synthesize segmentControl=_segmentControl;
- (void)didReceiveMemoryWarning;
- (void)badgeSegmentControl:(id)arg1 didSelectSegmentIndex:(unsigned long long)arg2;
- (struct CGRect)frameForContentController;
- (void)addCurrentContentController;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

