//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailCell.h>

@class EKTextViewWithLabelTextMetrics, NSMutableArray, NSObject, UIButton, UIImage, UIImageView, UILabel;
@protocol EKEventDetailTitleCellDelegate;

@interface EKEventDetailTitleCell : EKEventDetailCell
{
    UILabel *_titleView;
    EKTextViewWithLabelTextMetrics *_locationView;
    UIImage *_locationStatusImage;
    UIImageView *_locationStatusView;
    UILabel *_travelTimeView;
    NSMutableArray *_dateTimeViews;
    UILabel *_recurrenceView;
    UILabel *_statusView;
    UIButton *_editButton;
    unsigned int _visibleItems;
    _Bool _observingLocaleChanges;
    _Bool _hasLocationStatus;
    long long _locationStatus;
    NSObject<EKEventDetailTitleCellDelegate> *_delegate;
}

+ (id)_locationStringForStructuredLocation:(id)arg1;
+ (void)_geocodeEventIfNeeded:(id)arg1;
+ (id)_locationFont;
+ (id)_largeTitleFont;
+ (id)_titleFont;
+ (void)_invalidateCachedFonts;
+ (id)_mapsURLForLocationOnEvent:(id)arg1;
+ (void)_registerForInvalidation;
@property(nonatomic) __weak NSObject<EKEventDetailTitleCellDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (id)_editButton;
- (id)_statusView;
- (id)_recurrenceView;
- (id)_travelTimeView;
- (id)_dateTimeViewForLine:(unsigned long long)arg1;
- (id)_locationView;
- (id)_locationStatusView;
- (id)_titleView;
- (void)editButtonTapped;
- (_Bool)update;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setStatusString:(id)arg1;
- (void)setRecurrenceString:(id)arg1;
- (void)setTravelTimeString:(id)arg1;
- (void)_setDateTimeString:(id)arg1 line:(unsigned long long)arg2;
- (void)setLocation:(id)arg1;
- (void)setTitle:(id)arg1;
- (_Bool)_useLargeFonts;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2 style:(long long)arg3;
- (void)dealloc;

@end

