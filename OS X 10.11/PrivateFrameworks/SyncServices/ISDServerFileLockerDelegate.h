//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ISDServerFileLockerDelegate : NSObject
{
}

+ (id)instance;
- (void)fileLocker:(id)arg1 lockWasStolen:(id)arg2;
- (int)fileLocker:(id)arg1 actionForApparentlyAbandonedLock:(id)arg2 onAttempt:(int)arg3;

@end

