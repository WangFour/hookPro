//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MasterOrderTableViewCell, MyOrderModel;

@interface WareView : UIView
{
    MyOrderModel *_order;
    MasterOrderTableViewCell *orderListActionCell;
}

+ (double)heightForOrder:(id)arg1;
+ (id)wareView:(id)arg1 frame:(struct CGRect)arg2;
@property(retain, nonatomic) MasterOrderTableViewCell *orderListActionCell; // @synthesize orderListActionCell;
@property(retain, nonatomic) MyOrderModel *order; // @synthesize order=_order;
- (void).cxx_destruct;
- (void)setWithWareList:(id)arg1;
- (void)dealloc;

@end
