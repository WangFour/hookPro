//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PrtlBase.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CGetBottleCountPrtl : PrtlBase
{
    NSString *m_nsUsrName;
    unsigned int m_uiTime;
}

@property(nonatomic) unsigned int m_uiTime; // @synthesize m_uiTime;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (void).cxx_destruct;
- (_Bool)HandleResp:(void *)arg1;
- (void)InitReq:(void *)arg1;
- (void)dealloc;
- (id)init;

@end

