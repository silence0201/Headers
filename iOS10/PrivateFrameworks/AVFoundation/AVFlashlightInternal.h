//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference;

@interface AVFlashlightInternal : NSObject
{
    AVWeakReference *weakReference;
    struct OpaqueFigFlashlight *flashlight;
    _Bool available;
    _Bool overheated;
    float flashlightLevel;
    struct OpaqueFigSimpleMutex *lock;
}

@end
