//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WloginProtocolBuff-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WloginTlv : NSObject <WloginProtocolBuff>
{
    unsigned short wTlvT;
}

@property unsigned short wTlvT; // @synthesize wTlvT;
- (id)copy;
- (id)getTlvTagString;
- (int)encode:(id)arg1;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (id)initWithTag:(unsigned short)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
