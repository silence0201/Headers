//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol TSDSmartPathSource
@property(readonly) unsigned long long numberOfControlKnobs;
- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;
- (NSString *)getFeedbackStringForKnob:(unsigned long long)arg1;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;

@optional
- (struct CGPoint)fixedPointForControlKnobChange;
@end
