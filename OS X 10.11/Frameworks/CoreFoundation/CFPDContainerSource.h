//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreFoundation/CFPDSource.h>

__attribute__((visibility("hidden")))
@interface CFPDContainerSource : CFPDSource
{
    struct __CFString *_containerPath;
}

- (struct __CFString *)container;
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 container:(struct __CFString *)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 shmemIndex:(short)arg6;

@end

