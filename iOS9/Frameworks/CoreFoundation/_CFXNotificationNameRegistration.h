//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationNameRegistration : _CFXNotificationRegistrationContainer
{
    struct __CFString *_name;
}

+ (Class)childClass;
+ (const CDStruct_90be15af *)keyCallbacks;
@property(readonly) struct __CFString *name; // @synthesize name=_name;
- (_Bool)enumerate:(CDUnknownBlockType)arg1;
- (id)acquireObject:(void *)arg1;
- (void)match:(void *)arg1 observer:(void *)arg2 matching:(CDStruct_3de10e06 *)arg3;
- (void)find:(void *)arg1 observer:(void *)arg2 matching:(CDStruct_3de10e06 *)arg3;
- (void *)key;
- (void)dealloc;
- (void)finalize;
- (id)initWithName:(struct __CFString *)arg1 options:(unsigned long long)arg2 parent:(id)arg3;

@end

