//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ISSupport/ISS_DAVUnlock.h>

@interface ISS_DMDAVUnlock : ISS_DAVUnlock
{
}

+ (id)unlockRequestWithSession:(id)arg1 URI:(id)arg2 lockToken:(id)arg3;
- (void)finalizeOperation;
- (id)initUnlockWithSession:(id)arg1 URI:(id)arg2 lockToken:(id)arg3;

@end
