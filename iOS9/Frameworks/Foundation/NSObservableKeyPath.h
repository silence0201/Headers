//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSBoundKeyPath.h>

#import <Foundation/NSObservable-Protocol.h>

@class NSString;
@protocol NSObservable;

@interface NSObservableKeyPath : NSBoundKeyPath <NSObservable>
{
}

- (_Bool)_wantsChanges;
@property(readonly) id <NSObservable> changes;
@property(readonly, copy) NSString *description;
- (void)removeObservation:(id)arg1;
- (id)addObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

