//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference;

@interface AVOutputDeviceDiscoverySessionInternal : NSObject
{
    AVWeakReference *weakReference;
    struct dispatch_queue_s *pickerQueue;
    struct OpaqueFigEndpointPicker *endpointPicker;
    long long discoveryMode;
    unsigned long long features;
}

@end
