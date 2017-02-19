//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class JDImageView, NSString, OrderWareModel, UIButton, UILabel, UIView, commentTableViewCellBackView;

@interface commentTableViewCell : UITableViewCell <UIGestureRecognizerDelegate>
{
    commentTableViewCellBackView *backgroundView;
    JDImageView *productImageView;
    UILabel *productNameLabel;
    OrderWareModel *orderWareModel;
    UIButton *publishButton;
    UIView *headLineView;
    UIView *lastLineView;
    id <commentTableViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <commentTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) OrderWareModel *orderWareModel; // @synthesize orderWareModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)gotoProductDetai:(id)arg1;
- (void)setupButtonUI;
- (void)requestIsCanOrderShare:(CDUnknownBlockType)arg1;
- (void)requestIsCanCommentShare:(CDUnknownBlockType)arg1;
- (void)setLastLine;
- (void)setHeadLine;
- (void)prepareForReuse;
- (void)changeState;
- (void)commentSuccess:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
