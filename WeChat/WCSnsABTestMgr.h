//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INewABTestMgrExt.h"
#import "MMKernelExt.h"

@class NSArray, NSMutableDictionary, NSString, WCSnsABTestFeedHiddenInfo, WCSnsABTestFeedOperationInfo;

@interface WCSnsABTestMgr : NSObject <INewABTestMgrExt, MMKernelExt>
{
    NSMutableDictionary *dicABTestInfo;
    NSMutableDictionary *dicActionResult;
    WCSnsABTestFeedHiddenInfo *feedHiddenInfo;
    _Bool needWriteBackHiddenInfo;
    WCSnsABTestFeedOperationInfo *feedOperationInfo;
    _Bool needWriteBackOperationInfo;
    NSArray *arrDeleteLayerId;
}

- (void).cxx_destruct;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onManulLogOut;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (void)tryRemoveLayerInObjectOperation;
- (void)tryRemoveFeedOperationInfoForLayerIds:(id)arg1;
- (id)getOperationInfo:(id)arg1;
- (void)tryAddFeedOperationInfo:(id)arg1;
- (void)trySaveFeedOperationInfo;
- (void)tryLoadFeedOperationInfo;
- (id)pathForFeedOperationInfo;
- (void)trySaveFeedHiddenInfo;
- (void)tryloadFeedHiddenInfo;
- (id)pathForFeedHiddenInfo;
- (void)tryLogABTestResultTime:(id)arg1 dataItemId:(id)arg2 startTime:(_Bool)arg3 endTime:(_Bool)arg4;
- (void)logABTestResult:(id)arg1 dataItemId:(id)arg2 tipActionResult:(id)arg3;
- (unsigned int)getABTestExperType:(id)arg1;
- (void)tryReportABTestResult;
- (void)reportABTestResult:(id)arg1 result:(id)arg2;
- (id)getTipData:(id)arg1 layerId:(id)arg2;
- (_Bool)isFirstTip:(id)arg1 layerId:(id)arg2;
- (id)getFirstTip:(id)arg1;
- (_Bool)hiddenTip:(id)arg1 dataItemId:(id)arg2;
- (_Bool)shouldHiddenTip:(id)arg1 dataItemId:(id)arg2;
- (id)getABTestInfoForLayerId:(id)arg1;
- (id)getLayerIdForDataItem:(id)arg1;
- (void)initABTestInfo:(id)arg1;
- (void)tryInitABTestInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
