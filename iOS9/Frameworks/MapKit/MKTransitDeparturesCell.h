//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSAttributedString, NSDate, NSLayoutConstraint, NSString, NSTimeZone, UIButton, UIImageView, UILabel, UIView, _MKAnimatableLabel, _MKGradientView;
@protocol MKTransitDeparturesCellDelegate;

@interface MKTransitDeparturesCell : MKCustomSeparatorTableViewCell <UIGestureRecognizerDelegate>
{
    UIImageView *_lineImageView;
    UIImageView *_incidentIconImageView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    _MKAnimatableLabel *_departureLabel;
    UILabel *_departureSubtextLabel;
    NSLayoutConstraint *_labelLeadingMarginConstraint;
    _Bool _isShowingMultipleDepartures;
    NSLayoutConstraint *_departureLabelCenterX;
    NSLayoutConstraint *_departureLabelCustomTrailingMarginConstraint;
    NSLayoutConstraint *_departureLabelTrailingAlign;
    NSLayoutConstraint *_labelBufferConstraint;
    NSLayoutConstraint *_lineImageToContainerTrailingConstraint;
    NSLayoutConstraint *_lineImageViewTopConstraint;
    NSLayoutConstraint *_lineImageViewToBottomConstraint;
    NSLayoutConstraint *_primaryToTopConstraint;
    NSLayoutConstraint *_departureLabelToTopConstraint;
    NSLayoutConstraint *_departureLabelToBottomConstraint;
    NSLayoutConstraint *_lineImageViewCenteringConstraint;
    NSLayoutConstraint *_primaryLabelCenteringConstraint;
    NSLayoutConstraint *_departureLabelCenteringConstraint;
    NSLayoutConstraint *_incidentToDepartureSubtextLabelConstraint;
    NSLayoutConstraint *_incidentTrailingConstraint;
    UILabel *_animationLabel;
    NSLayoutConstraint *_primaryLabelWidthConstraint;
    NSArray *_labelHeightConstraints;
    NSLayoutConstraint *_primaryLabelHeightConstraint;
    NSLayoutConstraint *_secondaryLabelHeightConstraint;
    NSLayoutConstraint *_secondaryToPrimaryConstraint;
    NSLayoutConstraint *_primaryToBottomConstraint;
    NSLayoutConstraint *_secondaryToBottomConstraint;
    NSLayoutConstraint *_departureSubtextToTopConstraint;
    NSLayoutConstraint *_departureSubtextLabelToBottomConstraint;
    NSLayoutConstraint *_incidentToPrimaryConstraint;
    NSLayoutConstraint *_incidentToSecondaryConstraint;
    NSLayoutConstraint *_incidentToBottomConstraint;
    NSLayoutConstraint *_lineImageToTextGutterConstraint;
    NSLayoutConstraint *_lineImageLeadingConstraint;
    NSLayoutConstraint *_lineImageCompressedLeadingConstraint;
    NSLayoutConstraint *_primaryToDepartureLabelConstraint;
    NSLayoutConstraint *_animationLabelLeadingConstraint;
    NSLayoutConstraint *_animationLabelToTopConstraint;
    _Bool _supressSelectionState;
    _Bool _isTrackingDragGesture;
    double _dragGestureStartingPercentage;
    long long _closingDragGestureAnimationCount;
    _MKGradientView *_dragGradientView;
    UIView *_dragBackgroundView;
    _Bool _dragAnimateSubtext;
    NSAttributedString *_dragAnimationSubtext;
    NSAttributedString *_dragAnimationPreviousSubtext;
    _Bool _isAnimatingMultiDepartureTransition;
    double _unadjustedLeadingSeparatorInset;
    _Bool _showNoConnectionEmDash;
    _Bool _centerPrimaryLabel;
    _Bool _centerDepartureLabel;
    _Bool _showIncidentIcon;
    _Bool _incidentButtonHidden;
    _Bool _inactive;
    _Bool _shouldAdjustSeparatorInsetToMargin;
    _Bool _useCompressedGutter;
    _Bool _useCompressedLeading;
    double _lineImageViewSize;
    NSArray *_departures;
    unsigned long long _departureStyle;
    NSDate *_countdownReferenceDate;
    NSTimeZone *_departureTimeZone;
    UIButton *_incidentButton;
    NSString *_incidentTitle;
    id <MKTransitDeparturesCellDelegate> _delegate;
}

+ (id)displayableCountdowDepartureDatesFromDates:(id)arg1 withReferenceDate:(id)arg2;
+ (void)_enumerateMinutesUntilDepartureDates:(id)arg1 withReferenceDate:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)_nowString;
+ (void)useCompressedGutter:(out _Bool *)arg1 compressedLeading:(out _Bool *)arg2 forImageWidth:(double)arg3 inWidth:(double)arg4 compressed:(_Bool)arg5;
+ (id)_multipleCountdownDepartureAttributes;
+ (id)_singleCountdownDepartureAttributes;
+ (id)_nowStringAttributes;
+ (id)_nowFont;
+ (id)_departureSubtextAttributes;
+ (id)_singleCountdownSubtext;
+ (id)timestampSecondaryFont;
+ (id)defaultSecondaryFont;
+ (id)strongSecondaryFont;
+ (id)_primaryFont;
+ (id)_departureSubtextFont;
+ (id)_timestampFont;
+ (id)_multipleCountdownFont;
+ (id)_singleCountdownFont;
+ (_Bool)_shouldScaleSingleCountdownValue;
+ (double)defaultLineImageViewSize;
+ (double)labelMarginWithLineImageViewWidth:(double)arg1;
+ (double)defaultLabelMargin;
+ (double)defaultHeight;
+ (double)maxLineImageWidthforWidth:(double)arg1 compressed:(_Bool)arg2;
+ (double)_minTextWidth:(_Bool)arg1;
+ (double)_maxSingleDepartureSubtextLabelWidth;
+ (double)_maxSingleDepartureLabelWidth;
+ (void)_calculateMaxLabelWidths;
+ (_Bool)_needsUpdateMaxLabelWidths;
@property(nonatomic) _Bool useCompressedLeading; // @synthesize useCompressedLeading=_useCompressedLeading;
@property(nonatomic) _Bool useCompressedGutter; // @synthesize useCompressedGutter=_useCompressedGutter;
@property(nonatomic) _Bool shouldAdjustSeparatorInsetToMargin; // @synthesize shouldAdjustSeparatorInsetToMargin=_shouldAdjustSeparatorInsetToMargin;
@property(nonatomic, getter=isInactive) _Bool inactive; // @synthesize inactive=_inactive;
@property(nonatomic) __weak id <MKTransitDeparturesCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *incidentTitle; // @synthesize incidentTitle=_incidentTitle;
@property(nonatomic, getter=isIncidentButtonHidden) _Bool incidentButtonHidden; // @synthesize incidentButtonHidden=_incidentButtonHidden;
@property(retain, nonatomic) UIButton *incidentButton; // @synthesize incidentButton=_incidentButton;
@property(nonatomic, getter=isShowingIncidentIcon) _Bool showIncidentIcon; // @synthesize showIncidentIcon=_showIncidentIcon;
@property(nonatomic) _Bool centerDepartureLabel; // @synthesize centerDepartureLabel=_centerDepartureLabel;
@property(nonatomic) _Bool centerPrimaryLabel; // @synthesize centerPrimaryLabel=_centerPrimaryLabel;
@property(nonatomic, getter=isShowingNoConnectionEmDash) _Bool showNoConnectionEmDash; // @synthesize showNoConnectionEmDash=_showNoConnectionEmDash;
@property(retain, nonatomic) NSTimeZone *departureTimeZone; // @synthesize departureTimeZone=_departureTimeZone;
@property(retain, nonatomic) NSDate *countdownReferenceDate; // @synthesize countdownReferenceDate=_countdownReferenceDate;
@property(nonatomic) unsigned long long departureStyle; // @synthesize departureStyle=_departureStyle;
@property(retain, nonatomic) NSArray *departures; // @synthesize departures=_departures;
@property(nonatomic) double lineImageViewSize; // @synthesize lineImageViewSize=_lineImageViewSize;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_pointIsInCustomGestureBounds:(struct CGPoint)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_handlePan:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)setIsShowingMultipleDepartures:(_Bool)arg1 animated:(_Bool)arg2 primaryHeightConstraintValue:(id)arg3 secondaryHeightConstraintValue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_addAnimationLabelWithText:(id)arg1;
- (id)currentSecondaryHeightConstraintValue;
- (id)currentPrimaryHeightConstraintValue;
- (void)_addHeightConstraintWithPrimaryHeight:(double)arg1 secondaryHeight:(double)arg2;
- (void)setSeparatorHidden:(_Bool)arg1;
- (_Bool)_isRTL;
- (void)_updateCountdownConstraintsForString:(id)arg1;
- (void)_incidentButtonPressed;
- (void)_removeIncidentButton;
- (void)_addIncidentButton;
@property(readonly, nonatomic) _Bool isShowingMultipleDepartures;
- (void)_addTimeStampConstraintsIfNeeded;
- (void)_addDepartureLabelTrailingConstraintIfNeeded;
- (void)_addCountdownConstraintsIfNeeded;
- (void)_addEmDashAttributes:(id)arg1;
- (void)_departureText:(out id *)arg1 subtext:(out id *)arg2 forAnimationLabel:(_Bool)arg3;
- (unsigned long long)_displayableDeparturesCount;
- (void)_enumerateMinutesUntilDepartureTimesWithBlock:(CDUnknownBlockType)arg1;
- (void)refreshDeparturesDisplay;
- (unsigned long long)_departureLabelStyle;
@property(readonly, nonatomic) double labelMargin;
- (void)setShowNoConnectionEnDash:(_Bool)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setLineImage:(id)arg1 forWidth:(double)arg2 compressed:(_Bool)arg3 center:(_Bool)arg4 centeringWidth:(double)arg5;
- (void)_setLineImageColumnCentered:(_Bool)arg1 withImageWidth:(double)arg2 centeringWidth:(double)arg3;
- (void)layoutMarginsDidChange;
- (void)setLeadingSeparatorInset:(double)arg1;
- (double)_adjustedSeparatorInsetToMargin:(double)arg1;
- (void)_removeIncidentIcon;
- (void)_addIncidentIcon;
- (id)_incidentIcon;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_contentSizeCategoryDidChange;
- (double)_departureLabelToTopScaleValueWithString:(id)arg1;
- (void)dealloc;
- (void)_updateDepartureLabelToTopConstraintWithString:(id)arg1;
- (void)_updateIncidentConstraints;
- (void)_updateLineImageViewConstraints;
- (void)_updateConstraintValues;
- (double)_separatorHeight;
- (void)_updateLabelFonts;
- (_Bool)isOpaque;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

