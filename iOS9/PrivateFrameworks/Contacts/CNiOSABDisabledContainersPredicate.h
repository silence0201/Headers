//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNiOSContainerPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABDisabledContainersPredicate : CNPredicate <CNiOSContainerPredicate>
{
    _Bool _includesDisabledContainers;
}

@property(readonly, nonatomic) _Bool includesDisabledContainers; // @synthesize includesDisabledContainers=_includesDisabledContainers;
@property(readonly, copy) NSString *description;
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;
- (id)initWithDisabledContainersIncluded:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
