//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNChangeNotifierWrapper-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNChangeNotifierDistributedCenterWrapper : NSObject <CNChangeNotifierWrapper>
{
}

- (void)postNotification:(id)arg1;
- (void)removeObserver:(id)arg1 notification:(id)arg2;
- (void)addObserver:(id)arg1 notification:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

