//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TFETokenManager-Protocol.h"

@class NSString;

@interface ALBBWTTFETokenManager : NSObject <TFETokenManager>
{
    NSString *_token;	// 8 = 0x8
}

@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)initWithToken:(id)arg1;
- (id)getCurrentAppKey;
- (id)encodePolicyHeader:(id)arg1;
- (id)refreshToken:(id)arg1 token:(id)arg2;
- (id)getToken:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

