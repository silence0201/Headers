//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABLocking-Protocol.h>

@class NSString;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface ABBinarySemaphoreLock : NSObject <ABLocking>
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSString *_name;
}

@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (void)unlock;
- (void)lock;
- (void)invalidate;
- (void)finalize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
