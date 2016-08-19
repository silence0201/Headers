//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIFont, _UINavigationBarVisualStyleEnvironment;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualStyle : NSObject
{
    long long _idiom;
    _UINavigationBarVisualStyleEnvironment *_environment;
    _UINavigationBarVisualStyle *__legacyVisualStyle;
}

@property(retain, nonatomic) _UINavigationBarVisualStyleEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
@property(readonly, nonatomic) _UINavigationBarVisualStyle *_legacyVisualStyle; // @synthesize _legacyVisualStyle=__legacyVisualStyle;
@property(readonly, nonatomic) double rightEdgeMargin;
@property(readonly, nonatomic) double leftEdgeMargin;
- (double)imageButtonMarginInNavigationBar:(id)arg1;
- (double)textButtonMarginInNavigationBar:(id)arg1;
- (long long)navigationBar:(id)arg1 metricsForOrientation:(long long)arg2 hasPrompt:(_Bool)arg3;
- (double)leftBackTitleMarginForCustomBackButtonBackground:(id)arg1;
- (_Bool)shouldForceLegacyLeftBackTitleMarginForCustomBackButtonBackground:(id)arg1;
- (id)buttonFontForStyle:(long long)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets buttonContentEdgeInsets;
@property(readonly, nonatomic) double backIndicatorBottomMargin;
@property(readonly, nonatomic) double navigationItemBaselineOffset;
@property(readonly, nonatomic) double promptTextOffset;
@property(readonly, copy, nonatomic) UIFont *promptFont;
@property(readonly, nonatomic) double promptFontSize;
@property(readonly, nonatomic) double buttonImagePadding;
@property(readonly, nonatomic) double minTitleWidth;
@property(readonly, nonatomic) double minButtonWidth;
@property(readonly, nonatomic) double minBackImageWidth;
@property(readonly, nonatomic) double minBackTextWidth;
@property(readonly, nonatomic) double maxBackButtonProportion;
@property(readonly, nonatomic) double interBlockSpace;
@property(readonly, nonatomic) double interItemSpace;
@property(readonly, nonatomic) double promptInset;
@property(readonly, nonatomic) double bottomButtonMargin;
@property(readonly, nonatomic) double bottomImageMargin;
@property(readonly, nonatomic) double topImageMargin;
@property(readonly, nonatomic) double leftTextMargin;
@property(readonly, nonatomic) double titleAccessorySpace;
@property(readonly, nonatomic) double rightImageMargin;
@property(readonly, nonatomic) double rightTitleMargin;
@property(readonly, nonatomic) double leftBackImageMargin;
- (double)leftBackTitleMarginLetterpressPadding;
@property(readonly, nonatomic) double leftBackTitleMargin;
@property(readonly, nonatomic) double leftTitleMargin;
@property(readonly, nonatomic) double buttonFontSize;
@property(readonly, nonatomic) double headingFontSize;
@property(readonly, nonatomic) double topBackMargin;
@property(readonly, nonatomic) double topTitleMargin;
@property(readonly, nonatomic) double leftMarginAdjustment;
@property(readonly, nonatomic) double topMargin;
@property(readonly, nonatomic) double barPromptHeight;
@property(readonly, nonatomic) double barHeight;
@property(readonly, nonatomic) double buttonHeight;
- (double)backButtonAnimationClippingPadding;
@property(readonly, nonatomic) double backButtonIndicatorSpacing;
- (id)_initWithIdiom:(long long)arg1 environment:(id)arg2;

@end

