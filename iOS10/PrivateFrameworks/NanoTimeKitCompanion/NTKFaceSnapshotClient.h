//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface NTKFaceSnapshotClient : NSObject
{
    NSXPCConnection *_connection;
    _Bool _registrationNeeded;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_handleConnectionInterrupted;
- (void)_registerIfNeeded;
- (void)_handleSignificantLocationChangeNotification;
- (void)_handleCustomMonogramChangedNotification;
- (void)_updateAllSnapshots;
- (void)faceSnapshotChangedForKey:(id)arg1;
- (void)requestSnapshotOfFace:(id)arg1;
- (void)createFaceForPerformanceTesting:(long long)arg1;
- (void)synchronouslyUpdateAllSnapshots;
- (void)dealloc;
- (void)_setupConnection;
- (id)init;

@end
