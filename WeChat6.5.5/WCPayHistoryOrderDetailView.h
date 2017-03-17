//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt-Protocol.h"
#import "LongPressMenuViewDelegate-Protocol.h"
#import "LongPressViewDelegate-Protocol.h"

@class NSString, UILabel, WCPayOrderDetail;
@protocol WCPayHistoryOrderDetailViewDelegate;

__attribute__((visibility("hidden")))
@interface WCPayHistoryOrderDetailView : MMUIView <LongPressMenuViewDelegate, LongPressViewDelegate, ILinkEventExt>
{
    WCPayOrderDetail *m_oWCPayOrderDetail;
    id <WCPayHistoryOrderDetailViewDelegate> m_delegate;
    UILabel *serialNameLable;
    UILabel *oProductSerialLabel;
    int m_enWCPayHistoryOrderDetailViewScene;
}

@property(nonatomic) __weak id <WCPayHistoryOrderDetailViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)RetrySendTransferMessage;
- (void)MenuControllerWillHide:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnPress:(id)arg1;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (id)initWithOrderDetail:(id)arg1 AppFromShowed:(_Bool)arg2;
- (id)initWithOrderDetail:(id)arg1 AppFromShowed:(_Bool)arg2 Scene:(int)arg3;
- (id)getExtentionView:(id)arg1;
- (id)getMoneyView:(id)arg1;
- (id)getDetailView:(id)arg1 ShowedAppFrom:(_Bool)arg2;
- (void)onShowAppProfile:(id)arg1;
- (void)onShowUserIntruction:(id)arg1;
- (id)GetFooterView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
