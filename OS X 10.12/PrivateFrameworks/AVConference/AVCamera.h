//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVCamera : NSObject
{
    unsigned int _deviceID;
}

+ (id)UIDforDeviceID:(unsigned int)arg1;
+ (unsigned int)deviceIDForUID:(id)arg1;
+ (id)cameraList;
- (BOOL)cameraSupportsWidth:(int)arg1 height:(int)arg2;
- (BOOL)isWVGA;
- (BOOL)isWidescreen;
- (unsigned int)cameraType;
- (id)displayName;
- (id)GUID;
- (unsigned int)deviceID;
- (BOOL)isIrisOpen;
- (BOOL)isSuspended;
- (id)description;
- (id)initWithCMIODeviceID:(unsigned int)arg1;

@end
