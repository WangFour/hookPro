//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AMPCompareObject-Protocol.h"
#import "AMPDeepCopyObject-Protocol.h"

@class NSDate, NSString, NSURL;

@interface IMOfficalAccountInfo : NSObject <AMPDeepCopyObject, AMPCompareObject>
{
    _Bool _isShowCount;	// 8 = 0x8
    NSString *_messageTypeId;	// 16 = 0x10
    NSString *_headImgUrl;	// 24 = 0x18
    NSURL *_displayHeadImgUrl;	// 32 = 0x20
    NSString *_displayName;	// 40 = 0x28
    NSString *_lastMessageContent;	// 48 = 0x30
    NSDate *_lastMessageTime;	// 56 = 0x38
    NSString *_lastMessageId;	// 64 = 0x40
    long long _unreadCount;	// 72 = 0x48
    long long _subscribeStatus;	// 80 = 0x50
    long long _pushStatus;	// 88 = 0x58
    long long _subscribeType;	// 96 = 0x60
    NSString *_actionUrl;	// 104 = 0x68
    NSString *_ext;	// 112 = 0x70
    long long _createTime;	// 120 = 0x78
    long long _modifyTime;	// 128 = 0x80
}

@property(nonatomic) long long modifyTime; // @synthesize modifyTime=_modifyTime;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(nonatomic) long long subscribeType; // @synthesize subscribeType=_subscribeType;
@property(nonatomic) long long pushStatus; // @synthesize pushStatus=_pushStatus;
@property(nonatomic) long long subscribeStatus; // @synthesize subscribeStatus=_subscribeStatus;
@property(nonatomic) _Bool isShowCount; // @synthesize isShowCount=_isShowCount;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(copy, nonatomic) NSString *lastMessageId; // @synthesize lastMessageId=_lastMessageId;
@property(copy, nonatomic) NSDate *lastMessageTime; // @synthesize lastMessageTime=_lastMessageTime;
@property(copy, nonatomic) NSString *lastMessageContent; // @synthesize lastMessageContent=_lastMessageContent;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSURL *displayHeadImgUrl; // @synthesize displayHeadImgUrl=_displayHeadImgUrl;
@property(copy, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(copy, nonatomic) NSString *messageTypeId; // @synthesize messageTypeId=_messageTypeId;
- (void).cxx_destruct;
- (_Bool)isDataChanged:(id)arg1;
- (_Bool)isSame:(id)arg1;
- (id)ampDeepCopy;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
