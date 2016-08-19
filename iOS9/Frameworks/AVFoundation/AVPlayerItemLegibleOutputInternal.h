//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, AVWeakReferencingDelegateStorage, NSArray, NSString;
@protocol AVPlayerItemLegibleOutputDependencyFactory, OS_dispatch_queue;

@interface AVPlayerItemLegibleOutputInternal : NSObject
{
    id <AVPlayerItemLegibleOutputDependencyFactory> dependencyFactory;
    NSArray *nativeRepresentationSubtypes;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVWeakReference *weakReferenceToHost;
    _Bool suppressesPlayerRendering;
    double advanceInterval;
    NSString *textStylingResolution;
}

@end

