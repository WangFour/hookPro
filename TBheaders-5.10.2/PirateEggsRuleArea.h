//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PirateDataModel.h"

@class NSArray, NSString;

@interface PirateEggsRuleArea : PirateDataModel
{
    NSString *_description;	// 8 = 0x8
    NSString *_id;	// 16 = 0x10
    NSString *_moduleId;	// 24 = 0x18
    NSArray *_ruleIds;	// 32 = 0x20
}

@property(retain, nonatomic) NSArray *ruleIds; // @synthesize ruleIds=_ruleIds;
@property(retain, nonatomic) NSString *moduleId; // @synthesize moduleId=_moduleId;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (id)description;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
