//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, UITableView;

@interface TBFastTableHooker : NSObject
{
    struct {
        unsigned int tableviewDataSourceHasHooked:1;
        unsigned int tableviewDelegateHasHooked:1;
    } m_internal_flag;	// 8 = 0x8
    UITableView *_targetTableView;	// 16 = 0x10
    TBFastTableHooker *_weakRefSelf;	// 24 = 0x18
    NSCache *_heightCache;	// 32 = 0x20
}

@property(retain, nonatomic) NSCache *heightCache; // @synthesize heightCache=_heightCache;
@property(nonatomic) __weak TBFastTableHooker *weakRefSelf; // @synthesize weakRefSelf=_weakRefSelf;
@property(nonatomic) __weak UITableView *targetTableView; // @synthesize targetTableView=_targetTableView;
- (void).cxx_destruct;
- (void)tbfast_tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tbfast_tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tbfast_tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)p_recoverMethods;
- (void)p_swizzleMethods;
- (void)clearHeightCacheForIndexPath:(id)arg1;
- (void)clearHeightCache;
- (void)p_init;
- (id)init;

@end
