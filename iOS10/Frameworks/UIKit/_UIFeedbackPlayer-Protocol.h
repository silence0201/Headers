//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, _UIFeedback, _UIFeedbackParameters;

@protocol _UIFeedbackPlayer
@property(copy, nonatomic) CDUnknownBlockType invalidationBlock;
- (void)_stopFeedback:(_UIFeedback *)arg1;
- (void)_playFeedback:(_UIFeedback *)arg1 atTime:(double)arg2;
- (void)_updateValueForParameters:(_UIFeedbackParameters *)arg1 withKey:(NSString *)arg2;
@end

