//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NewBeanBalanceBaseView.h"

#import "JDBaseToastTextListViewDataSource.h"
#import "JDBaseToastViewDelegate.h"

@class JDBeanUseRuleModel, NSString, UIButton, UILabel, UISwitch, UIView;

@interface NewBeanBalanceView : NewBeanBalanceBaseView <JDBaseToastTextListViewDataSource, JDBaseToastViewDelegate>
{
    UILabel *_viewTypeLabel;
    UILabel *_valueLabel;
    UISwitch *_switchView;
    UIButton *_noCanUseBtn;
    UIView *_bottomLine;
    _Bool _shouldResponseDelegate;
    _Bool _showJDNoCanUseBtn;
    UIView *_seperator;
    JDBeanUseRuleModel *_beanUseRuleModel;
}

@property(retain, nonatomic) JDBeanUseRuleModel *beanUseRuleModel; // @synthesize beanUseRuleModel=_beanUseRuleModel;
@property(nonatomic) _Bool showJDNoCanUseBtn; // @synthesize showJDNoCanUseBtn=_showJDNoCanUseBtn;
@property(nonatomic) _Bool shouldResponseDelegate; // @synthesize shouldResponseDelegate=_shouldResponseDelegate;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
- (void).cxx_destruct;
- (void)setBottomLineOriginX:(double)arg1;
- (void)show;
- (void)setValue:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setSwitchOn:(_Bool)arg1;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (id)toastView:(id)arg1 DetailForSection:(long long)arg2;
- (id)toastView:(id)arg1 titleForSection:(long long)arg2;
- (long long)numberOfSectionsInToastView:(id)arg1;
- (void)noCanUseBtnTap;
- (void)switchDidUpdate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
