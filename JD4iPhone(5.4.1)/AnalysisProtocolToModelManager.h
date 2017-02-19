//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface AnalysisProtocolToModelManager : NSObject
{
    NSDictionary *_protocolTable;
    NSDictionary *_desOfConfigurationDic;
    NSMutableDictionary *_handleBlockDic;
}

+ (id)shareAnalysisProtocolToModelManager;
@property(retain, nonatomic) NSMutableDictionary *handleBlockDic; // @synthesize handleBlockDic=_handleBlockDic;
@property(retain, nonatomic) NSDictionary *desOfConfigurationDic; // @synthesize desOfConfigurationDic=_desOfConfigurationDic;
@property(retain, nonatomic) NSDictionary *protocolTable; // @synthesize protocolTable=_protocolTable;
- (void).cxx_destruct;
- (CDUnknownBlockType)getHandleByDes:(id)arg1;
- (_Bool)registerHandleBlock:(CDUnknownBlockType)arg1 des:(id)arg2;
- (id)getConfiguationDic:(id)arg1;
- (id)getValueFromProtocolTable:(id)arg1;
- (id)analysisProtocol:(id)arg1;
- (void)createProtolTable;
- (void)createConfigDic;
- (void)registerHandleBlocks;
- (id)init;

@end
