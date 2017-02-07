//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantTV/SATVFooterView.h>

#import <SetupAssistantTV/SATVPulsingView-Protocol.h>
#import <SetupAssistantTV/SATVPulsingViewImpl-Protocol.h>

@class NSString;
@protocol SATVPulsingAnimationDelegate;

@interface SATVPulsingFooterView : SATVFooterView <SATVPulsingViewImpl, SATVPulsingView>
{
    _Bool _opacityRunning;
    _Bool _scaleRunning;
    unsigned long long _mode;
    id <SATVPulsingAnimationDelegate> _animationDelegate;
}

@property(nonatomic) _Bool scaleRunning; // @synthesize scaleRunning=_scaleRunning;
@property(nonatomic) _Bool opacityRunning; // @synthesize opacityRunning=_opacityRunning;
@property(nonatomic) __weak id <SATVPulsingAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)pulseAtBeginTime:(double)arg1;
- (void)layoutSubviews;
- (id)initWithMode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
