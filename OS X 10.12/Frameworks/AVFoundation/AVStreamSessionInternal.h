//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, NSData, NSHashTable, NSMutableSet, NSURL;
@protocol OS_dispatch_queue;

@interface AVStreamSessionInternal : NSObject
{
    AVWeakReference *_welf;
    NSData *_appIdentifier;
    NSURL *_storageURL;
    NSObject<OS_dispatch_queue> *_threadSafetyQ;
    NSHashTable *_streamDataParsers;
    NSMutableSet *_contentKeySessions;
    BOOL _isExpired;
    struct OpaqueFigCPEProtector *_figCPEProtector;
    NSData *_figCPEProtectorSessionIdentifier;
}

@end

