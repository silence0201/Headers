//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/XBSnapshotDataProvider-Protocol.h>

@class NSString, UIImage, XBDisplaySnapshot, XBSnapshotDataProviderContext;

@interface XBLaunchImageDataProvider : NSObject <XBSnapshotDataProvider>
{
    XBDisplaySnapshot *_snapshot;
    UIImage *_cachedImage;
}

- (void)_invalidateSnapshotData;
- (id)fetchImage;
@property(readonly, retain, nonatomic) XBSnapshotDataProviderContext *context;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 contextID:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
