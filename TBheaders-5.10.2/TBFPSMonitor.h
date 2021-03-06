//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableArray;

@interface TBFPSMonitor : NSObject
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    NSMutableArray *_fpsArray;	// 16 = 0x10
    NSMutableArray *_fpsPerSecArray;	// 24 = 0x18
    double _maxDisplayInterval;	// 32 = 0x20
    double _startTimestamp;	// 40 = 0x28
    double _lastDisplayTimestamp;	// 48 = 0x30
}

@property(nonatomic) double lastDisplayTimestamp; // @synthesize lastDisplayTimestamp=_lastDisplayTimestamp;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) double maxDisplayInterval; // @synthesize maxDisplayInterval=_maxDisplayInterval;
@property(retain, nonatomic) NSMutableArray *fpsPerSecArray; // @synthesize fpsPerSecArray=_fpsPerSecArray;
@property(retain, nonatomic) NSMutableArray *fpsArray; // @synthesize fpsArray=_fpsArray;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void).cxx_destruct;
- (void)calculateAvgFPSPerSecWithMinCount:(long long)arg1;
- (void)displayLinkTick;
- (id)stopMonitor;
- (id)makeSnapshot;
- (void)startMonitor;
- (void)dealloc;

@end

