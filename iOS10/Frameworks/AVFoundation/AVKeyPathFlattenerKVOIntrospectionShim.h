//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVCallbackCancellation-Protocol.h>
#import <AVFoundation/AVKVOIntrospection-Protocol.h>

@class NSString;
@protocol AVKVOIntrospection><AVCallbackCancellation;

@interface AVKeyPathFlattenerKVOIntrospectionShim : NSObject <AVKVOIntrospection, AVCallbackCancellation>
{
    NSObject *_observedObject;
    id <AVKVOIntrospection><AVCallbackCancellation> _realNotifier;
}

- (void)cancelCallbacks;
@property(readonly, nonatomic) NSObject *observedObject;
- (void)dealloc;
- (id)initWithObservedObject:(id)arg1 realNotifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

