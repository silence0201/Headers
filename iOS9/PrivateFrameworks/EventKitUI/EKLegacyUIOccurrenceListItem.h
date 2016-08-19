//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImage;

@interface EKLegacyUIOccurrenceListItem : UIView
{
    NSString *_title;
    NSString *_location;
    NSString *_timeString;
    UIColor *_dotColor;
    UIImage *_dot;
    unsigned int _designator:2;
    unsigned int _isAllDay:1;
    unsigned int _isBirthday:1;
    unsigned int _isFacebook:1;
    unsigned int _tentative:1;
    unsigned int _declined:1;
    unsigned int _needsReply:1;
    unsigned int _cancelled:1;
    unsigned int _isEndDate:1;
    unsigned int _indentsWithoutDot:1;
    unsigned int _showsColors:1;
    _Bool _isSelected;
}

+ (double)defaultHeight;
+ (double)timeWidthIncludingDots:(_Bool)arg1;
+ (double)hourWidth;
+ (void)_invalidateWidths;
+ (void)_calculateWidths;
+ (double)xMidpointForCalendarDot;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)isCancelled;
- (_Bool)isAllDay;
- (unsigned int)designator;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawText:(id)arg1 withDefaultColor:(id)arg2 atPoint:(struct CGPoint)arg3 forWidth:(double)arg4 font:(id)arg5 lineBreakMode:(long long)arg6 staticColor:(_Bool)arg7;
- (void)drawDeemphasizedText:(id)arg1 atPoint:(struct CGPoint)arg2 forWidth:(double)arg3 font:(id)arg4 lineBreakMode:(long long)arg5 staticColor:(_Bool)arg6;
- (void)drawBoldText:(id)arg1 atPoint:(struct CGPoint)arg2 forWidth:(double)arg3 font:(id)arg4 lineBreakMode:(long long)arg5 staticColor:(_Bool)arg6;
- (_Bool)setUpStaticDrawingColor;
- (id)outlineImageWithColor:(id)arg1;
- (id)_dot;
- (id)_selectedBackgroundImage;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isHighlighted;
- (void)setShowsColors:(_Bool)arg1;
- (void)setIndentsForMissingDot:(_Bool)arg1;
- (void)setDotColor:(id)arg1;
- (void)setCancelled:(_Bool)arg1;
- (void)setNeedsReply:(_Bool)arg1;
- (void)setDeclined:(_Bool)arg1;
- (void)setTentative:(_Bool)arg1;
- (void)setIsEndDate:(_Bool)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setIsFacebook:(_Bool)arg1;
- (void)setIsBirthday:(_Bool)arg1;
- (void)setIsAllDay:(_Bool)arg1;
- (void)setLocation:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)updateWithEvent:(id)arg1;
- (_Bool)showDisclosure;
- (id)init;
- (id)initWithEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

