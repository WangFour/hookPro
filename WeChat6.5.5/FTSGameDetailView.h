//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTSResultView.h"

#import "IFTSMemorySearchMgrExt-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FTSGameDetailView : FTSResultView <IFTSMemorySearchMgrExt>
{
}

- (void)onFTSMemorySearchResultChangedForGameDetailPage:(_Bool)arg1;
- (void)selectWCGameItem:(id)arg1;
- (void)hideKeyboard;
- (_Bool)hasSearchDone:(id)arg1;
- (id)getSearchArray:(id)arg1;
- (void)showWCGameWebViewWithUrl:(id)arg1 title:(id)arg2;
- (void)pop;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)handleTextChanged:(id)arg1 immediately:(_Bool)arg2;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
