//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDBadgeSegmentControlDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MDBadgeSegmentControl, MDTrafficMonitorManager, NSArray, NSMutableArray, NSString, UITableView, UIView;

@interface MDTrafficMonitorViewController : MDViewController <UITableViewDelegate, UITableViewDataSource, MDBadgeSegmentControlDelegate>
{
    _Bool isWifi;
    int _maxTrafficForBar;
    UITableView *_tableView;
    NSArray *_cellTitleArray;
    MDTrafficMonitorManager *_trafficManager;
    UIView *_headerView;
    MDBadgeSegmentControl *_segmentControl;
    NSMutableArray *_dataArray;
    double _totalFor7Days;
    NSMutableArray *_trafficIdArray;
    NSMutableArray *_dateArrayFor7Days;
    NSMutableArray *_daystrArrayFor7Days;
}

@property(retain, nonatomic) NSMutableArray *daystrArrayFor7Days; // @synthesize daystrArrayFor7Days=_daystrArrayFor7Days;
@property(retain, nonatomic) NSMutableArray *dateArrayFor7Days; // @synthesize dateArrayFor7Days=_dateArrayFor7Days;
@property(retain, nonatomic) NSMutableArray *trafficIdArray; // @synthesize trafficIdArray=_trafficIdArray;
@property(nonatomic) double totalFor7Days; // @synthesize totalFor7Days=_totalFor7Days;
@property(nonatomic) int maxTrafficForBar; // @synthesize maxTrafficForBar=_maxTrafficForBar;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) MDBadgeSegmentControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MDTrafficMonitorManager *trafficManager; // @synthesize trafficManager=_trafficManager;
@property(retain, nonatomic) NSArray *cellTitleArray; // @synthesize cellTitleArray=_cellTitleArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isWifi; // @synthesize isWifi;
- (void)getDateStringFor7Days;
- (double)getTodayTraffic;
- (void)getRecentTrafficFor7Days;
- (double)getCurrentMonthTraffic;
- (void)reloadData;
- (void)resetHeader;
- (void)badgeSegmentControl:(id)arg1 didSelectSegmentIndex:(unsigned long long)arg2;
- (void)findMaxTraffic;
- (void)fetchBarData;
- (void)clickReturnItem;
- (float)getPercentWithValue:(double)arg1;
- (void)switchValueChanged:(id)arg1;
- (id)lengthStringWithMB:(double)arg1;
- (void)setCellWithCell:(id)arg1 indexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)dataFor7DaysArray;
- (id)getFooterView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
