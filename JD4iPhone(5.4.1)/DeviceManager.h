//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DeviceManager : NSObject
{
}

+ (id)getCdeVersion;
+ (id)getResolution;
+ (int)getDevicePlatform;
+ (id)getSysInfoByName:(char *)arg1;
+ (id)getDeviceResolution;
+ (_Bool)isRetina;
+ (id)getDeviceUUID;
+ (id)getIOSDeviceUUID;
+ (long long)sysVersionCompareWith:(id)arg1;
+ (id)localIPAddress;
+ (id)localWiFiIPAddress;
+ (id)totalSpace;
+ (id)freeSpace;

@end
