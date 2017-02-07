//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class NSArray, NSDate, NSLayoutConstraint, NSString, NSTimeZone, UIButton, UIImageView, UIStackView, _MKUILabel;
@protocol MKTransitDeparturesCellDelegate;

@interface MKTransitDeparturesCell : MKCustomSeparatorTableViewCell
{
    UIImageView *_lineImageView;
    UIImageView *_incidentIconImageView;
    _MKUILabel *_primaryLabel;
    _MKUILabel *_secondaryLabel;
    _MKUILabel *_tertiaryLabel;
    UIStackView *_secondaryTextStackView;
    _MKUILabel *_departureLabel;
    NSArray *_additionalDepartureLabels;
    UIStackView *_departureStackView;
    NSLayoutConstraint *_labelLeadingMarginConstraint;
    NSLayoutConstraint *_labelBufferConstraint;
    NSArray *_labelToDepartureConstraints;
    NSArray *_buttonToDepartureConstraints;
    double _lineImageCenteringValue;
    NSLayoutConstraint *_lineImageToContainerTrailingConstraint;
    NSLayoutConstraint *_lineImageViewTopConstraint;
    NSLayoutConstraint *_lineImageViewToBottomConstraint;
    NSLayoutConstraint *_primaryToTopConstraint;
    NSLayoutConstraint *_departureStackViewToBottomConstraint;
    NSLayoutConstraint *_lineImageViewCenteringConstraint;
    NSLayoutConstraint *_primaryLabelCenteringConstraint;
    NSLayoutConstraint *_departureLabelCenteringConstraint;
    NSLayoutConstraint *_incidentIconHorizontalConstraint;
    _Bool _needsInitialConstraints;
    NSArray *_initialConstraints;
    NSLayoutConstraint *_primaryToBottomConstraint;
    NSLayoutConstraint *_secondaryStackToPrimaryConstraint;
    NSLayoutConstraint *_secondaryStackToBottomConstraint;
    NSLayoutConstraint *_lineImageToTextGutterConstraint;
    NSLayoutConstraint *_lineImageLeadingConstraint;
    NSLayoutConstraint *_lineImageCompressedLeadingConstraint;
    _Bool _showNoConnectionEmDash;
    _Bool _centerContent;
    _Bool _showIncidentIcon;
    _Bool _incidentButtonHidden;
    _Bool _inactive;
    _Bool _useCompressedGutter;
    _Bool _useCompressedLeading;
    _Bool _padBottom;
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
+ (id)_departureLabelAttributes;
+ (id)_departureSubtextAttributes;
+ (id)_singleCountdownSubtext;
+ (id)timestampSecondaryFont;
+ (id)defaultSecondaryFont;
+ (id)strongSecondaryFont;
+ (id)_primaryFont;
+ (id)_departureSubtextFont;
+ (id)_upcomingTimestampFont;
+ (id)_departureLabelFont;
+ (double)labelMarginWithLineImageViewWidth:(double)arg1;
+ (double)maxLineImageWidthforWidth:(double)arg1 compressed:(_Bool)arg2;
+ (double)_minTextWidth:(_Bool)arg1;
+ (double)_maxExpectedDepartureLabelWidth;
+ (void)_calculateMaxLabelWidths;
+ (_Bool)_needsUpdateMaxLabelWidths;
@property(nonatomic) _Bool padBottom; // @synthesize padBottom=_padBottom;
@property(nonatomic) _Bool useCompressedLeading; // @synthesize useCompressedLeading=_useCompressedLeading;
@property(nonatomic) _Bool useCompressedGutter; // @synthesize useCompressedGutter=_useCompressedGutter;
@property(nonatomic, getter=isInactive) _Bool inactive; // @synthesize inactive=_inactive;
@property(nonatomic) __weak id <MKTransitDeparturesCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *incidentTitle; // @synthesize incidentTitle=_incidentTitle;
@property(nonatomic, getter=isIncidentButtonHidden) _Bool incidentButtonHidden; // @synthesize incidentButtonHidden=_incidentButtonHidden;
@property(retain, nonatomic) UIButton *incidentButton; // @synthesize incidentButton=_incidentButton;
@property(nonatomic, getter=isShowingIncidentIcon) _Bool showIncidentIcon; // @synthesize showIncidentIcon=_showIncidentIcon;
@property(nonatomic) _Bool centerContent; // @synthesize centerContent=_centerContent;
@property(nonatomic, getter=isShowingNoConnectionEmDash) _Bool showNoConnectionEmDash; // @synthesize showNoConnectionEmDash=_showNoConnectionEmDash;
@property(retain, nonatomic) NSTimeZone *departureTimeZone; // @synthesize departureTimeZone=_departureTimeZone;
@property(retain, nonatomic) NSDate *countdownReferenceDate; // @synthesize countdownReferenceDate=_countdownReferenceDate;
@property(nonatomic) unsigned long long departureStyle; // @synthesize departureStyle=_departureStyle;
@property(retain, nonatomic) NSArray *departures; // @synthesize departures=_departures;
@property(nonatomic) double lineImageViewSize; // @synthesize lineImageViewSize=_lineImageViewSize;
- (void).cxx_destruct;
- (void)setSeparatorHidden:(_Bool)arg1;
- (_Bool)_isRTL;
- (void)_incidentButtonPressed;
- (void)_removeIncidentButton;
- (void)_addIncidentButton;
- (void)_addEmDashAttributes:(id)arg1;
- (unsigned long long)_displayableDeparturesCount;
- (void)_enumerateMinutesUntilDepartureTimesWithBlock:(CDUnknownBlockType)arg1;
- (void)refreshDeparturesDisplay;
- (unsigned long long)_departureLabelStyle;
@property(readonly, nonatomic) double labelMargin;
- (void)setShowNoConnectionEnDash:(_Bool)arg1;
- (void)setTertiaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setLineImage:(id)arg1 compressed:(_Bool)arg2 center:(_Bool)arg3 centeringWidth:(double)arg4;
- (void)_setLineImageColumnCentered:(_Bool)arg1 withImageWidth:(double)arg2 centeringWidth:(double)arg3;
- (void)_removeIncidentIcon;
- (void)_addIncidentIcon;
- (id)_incidentIcon;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (void)_updateLineImageViewConstraints;
- (void)_updateConstraintValues;
- (double)_separatorHeight;
- (void)_updateLabelFonts;
- (_Bool)isOpaque;
- (void)layoutSubviews;
- (void)infoCardThemeChanged:(id)arg1;
- (void)updateConstraints;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)_commonInit;

@end

