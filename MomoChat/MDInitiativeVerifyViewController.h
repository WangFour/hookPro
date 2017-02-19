//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDInitiativeVerifyHandlerDelegate.h"

@class MBProgressHUD, MDInitiativeVerifyHandler, MUB10Button, NSString, RTLabel, UILabel;

@interface MDInitiativeVerifyViewController : MDViewController <MDInitiativeVerifyHandlerDelegate>
{
    _Bool _showedBottom;
    MDInitiativeVerifyHandler *_initiativeVerifyHandler;
    id <MDInitiativeVerifyViewControllerDelegate> _delegate;
    NSString *_mainTitle;
    UILabel *_descLabel;
    UILabel *_feeLabel;
    RTLabel *_verifyLabel;
    MUB10Button *_sendButton;
    UILabel *_recievedLabel;
    MBProgressHUD *_hud;
}

@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) UILabel *recievedLabel; // @synthesize recievedLabel=_recievedLabel;
@property(retain, nonatomic) MUB10Button *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) RTLabel *verifyLabel; // @synthesize verifyLabel=_verifyLabel;
@property(retain, nonatomic) UILabel *feeLabel; // @synthesize feeLabel=_feeLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) _Bool showedBottom; // @synthesize showedBottom=_showedBottom;
@property(retain, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(nonatomic) id <MDInitiativeVerifyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MDInitiativeVerifyHandler *initiativeVerifyHandler; // @synthesize initiativeVerifyHandler=_initiativeVerifyHandler;
- (void)messageSent;
- (void)finishInitiativeVerify;
- (void)refreshVerifyView;
- (void)removeHud;
- (void)showHud;
- (void)rightButtonPressed;
- (void)leftButtonPressed;
- (void)didClickSendMessageButton:(id)arg1;
- (void)configureNavBar;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRegisterUser:(id)arg1 verificationManager:(id)arg2 delegate:(id)arg3 showBottom:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
