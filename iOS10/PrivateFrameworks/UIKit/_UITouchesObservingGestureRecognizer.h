//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface _UITouchesObservingGestureRecognizer : UIGestureRecognizer
{
    NSSet *_touches;
}

@property(copy, nonatomic) NSSet *touches; // @synthesize touches=_touches;
- (void).cxx_destruct;
- (_Bool)_wantsPartialTouchSequences;
- (_Bool)_affectedByGesture:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)_updateTouchesFromEvent:(id)arg1;
- (_Bool)_allTouchesAreEndedOrCancelled:(id)arg1;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

