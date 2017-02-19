//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

@class JDStoreNetwork, NSDictionary, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface JDMOrderDetailCouponViewController : JDViewController
{
    UIView *couponListView;
    UIView *couponInfoView;
    UIScrollView *contentView;
    UIImageView *headView;
    UILabel *orderNumberValue;
    UILabel *orderStateValue;
    UILabel *phoneValue;
    UILabel *orderTotalValue;
    UILabel *orderDiscountValue;
    UILabel *orderPayValue;
    UILabel *ticketSupplier;
    UIButton *payButton;
    UIButton *homeButton;
    UIImageView *couponTypeView;
    UILabel *cinemaName;
    UILabel *validateTime;
    JDStoreNetwork *m_network;
    NSString *m_jdOrderId;
    NSString *m_movieOrderId;
    NSDictionary *m_dataDic;
    long long m_source;
}

@property(nonatomic) long long m_source; // @synthesize m_source;
@property(retain, nonatomic) NSDictionary *m_dataDic; // @synthesize m_dataDic;
@property(retain, nonatomic) NSString *m_movieOrderId; // @synthesize m_movieOrderId;
@property(retain, nonatomic) NSString *m_jdOrderId; // @synthesize m_jdOrderId;
- (void)dealloc;
- (void)gotoHome:(id)arg1;
- (void)callTelephone;
- (void)gotoPay:(id)arg1;
- (void)showContent;
- (void)fetchDetailData;
- (void)setupUI;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end
