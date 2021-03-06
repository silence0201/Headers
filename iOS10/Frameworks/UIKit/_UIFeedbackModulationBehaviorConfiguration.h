//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIFeedbackGeneratorConfiguration.h>

@class _UIFeedback;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIFeedbackModulationBehaviorConfiguration : _UIFeedbackGeneratorConfiguration
{
    _UIFeedback<_UIFeedbackContinuousPlayable> *_feedback;
    CDUnknownBlockType _feedbackUpdateBlock;
}

+ (id)sliderConfiguration;
+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType feedbackUpdateBlock; // @synthesize feedbackUpdateBlock=_feedbackUpdateBlock;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *feedback; // @synthesize feedback=_feedback;
- (id)feedbackKeyPaths;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)requiredSupportLevel;

@end

