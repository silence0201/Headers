//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreFoundation/_CFXNotificationNameRegistration.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationNameWildcardObjectRegistration : _CFXNotificationNameRegistration
{
}

+ (Class)childClass;
- (_Bool)enumerate:(CDUnknownBlockType)arg1;
- (id)acquireObserver:(void *)arg1 options:(unsigned long long)arg2;
- (id)acquireObject:(void *)arg1 options:(unsigned long long)arg2;
- (void)match:(void *)arg1 observer:(void *)arg2 matching:(CDStruct_3de10e06 *)arg3;
- (void)match:(void *)arg1 matching:(CDStruct_3de10e06 *)arg2;
- (void)find:(void *)arg1 matching:(CDStruct_3de10e06 *)arg2;

@end

