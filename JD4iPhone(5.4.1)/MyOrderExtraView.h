//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MyOrderItemDelegate.h"

@class MyJdHomeModel, MyOrderItem, NSArray, NSDictionary, NSString;

@interface MyOrderExtraView : UIView <MyOrderItemDelegate>
{
    MyOrderItem *_orderItem;
    MyJdHomeModel *_orderModel;
    MyOrderItem *_forRecieveItem;
    NSArray *_dataArr;
    NSDictionary *_numberDic;
    id <MyOrderExtraViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MyOrderExtraViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *numberDic; // @synthesize numberDic=_numberDic;
@property(retain, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) MyOrderItem *forRecieveItem; // @synthesize forRecieveItem=_forRecieveItem;
@property(retain, nonatomic) MyJdHomeModel *orderModel; // @synthesize orderModel=_orderModel;
- (void).cxx_destruct;
- (void)didOrderItemTapped:(id)arg1;
- (void)setupSubViews;
- (_Bool)isRedPointShow:(id)arg1;
- (void)showItemRedPoint:(id)arg1 show:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
