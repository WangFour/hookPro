//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WJLoginTLVBase.h"

@interface WJLoginTLV0xe : WJLoginTLVBase
{
    int _refreshInterval;
    int _expiredInterval;
}

@property(nonatomic) int expiredInterval; // @synthesize expiredInterval=_expiredInterval;
@property(nonatomic) int refreshInterval; // @synthesize refreshInterval=_refreshInterval;
- (unsigned long long)getTLVLength;
- (int)decodeFromBuffer:(id)arg1 atLoc:(unsigned long long)arg2;

@end
