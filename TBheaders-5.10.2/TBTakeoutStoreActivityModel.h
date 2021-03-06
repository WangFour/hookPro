//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBTakeoutStoreActivityModel : TBJSONModel
{
    NSString *_name;	// 8 = 0x8
    long long _activityId;	// 16 = 0x10
    NSString *_activityType;	// 24 = 0x18
    long long _storeId;	// 32 = 0x20
    NSString *_activityDesc;	// 40 = 0x28
    NSString *_type;	// 48 = 0x30
    NSString *_dataSource;	// 56 = 0x38
    NSString *_icon;	// 64 = 0x40
    NSString *_status;	// 72 = 0x48
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *activityDesc; // @synthesize activityDesc=_activityDesc;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
@property(copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(nonatomic) long long activityId; // @synthesize activityId=_activityId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

