//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBSCCommentParentListItem;
@protocol TBSCCommentParentListCellDelegate;

@interface TBSCWithParentCommentCell : UITableViewCell
{
    id <TBSCCommentParentListCellDelegate> _delegate;	// 8 = 0x8
    TBSCCommentParentListItem *_allItem;	// 16 = 0x10
}

+ (double)heightForCellOfItem:(id)arg1;
+ (id)cellIdentifier;
+ (id)createCell;
@property(retain, nonatomic) TBSCCommentParentListItem *allItem; // @synthesize allItem=_allItem;
@property(retain, nonatomic) id <TBSCCommentParentListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)heightForCellOfItem:(id)arg1;
- (void)setData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
