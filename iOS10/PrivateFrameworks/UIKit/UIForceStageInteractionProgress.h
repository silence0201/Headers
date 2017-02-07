//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInteractionProgress.h>

#import <UIKit/NSObservable-Protocol.h>
#import <UIKit/NSObserver-Protocol.h>

@class NSObservation, NSString;

@interface UIForceStageInteractionProgress : UIInteractionProgress <NSObservable, NSObserver>
{
    NSObservation *_observation;
    _Bool _completed;
    _Bool _started;
    _Bool _completesAtTargetState;
}

@property(nonatomic) _Bool completesAtTargetState; // @synthesize completesAtTargetState=_completesAtTargetState;
- (void).cxx_destruct;
- (void)_reset;
- (void)receiveObservedValue:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

