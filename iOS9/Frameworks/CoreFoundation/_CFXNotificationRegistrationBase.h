//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _CFXNotificationRegistrar, _CFXNotificationRegistrationContainer;

__attribute__((visibility("hidden")))
@interface _CFXNotificationRegistrationBase : NSObject
{
    _CFXNotificationRegistrationContainer *_parent;
    struct os_lock_handoff_s _lock;
}

+ (const CDStruct_90be15af *)keyCallbacks;
- (void)removeFromParent;
- (void)setParent:(id)arg1;
@property(readonly) __weak _CFXNotificationRegistrationContainer *parent;
@property(readonly) void *key;
@property(readonly) _CFXNotificationRegistrar *registrar;
- (void)dealloc;
- (id)initWithParent:(id)arg1;
- (id)init;

@end

