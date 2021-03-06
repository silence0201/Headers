//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFLockScreenDateSubtitleView.h>

@class NSDate, SBFLockScreenAlternateDateLabel;

@interface SBFLockScreenDateSubtitleDateView : SBFLockScreenDateSubtitleView
{
    NSDate *_date;
    SBFLockScreenAlternateDateLabel *_alternateDateLabel;
    double _alignmentPercent;
}

@property(nonatomic) double alignmentPercent; // @synthesize alignmentPercent=_alignmentPercent;
@property(retain, nonatomic) SBFLockScreenAlternateDateLabel *alternateDateLabel; // @synthesize alternateDateLabel=_alternateDateLabel;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)_createReplicateView;
- (id)replicate;
- (double)_lunarDateLabelYOffsetFromDateLabel;
- (struct CGRect)alternateDateLabelFrame;
- (struct CGRect)subtitleLabelFrame;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setStrength:(double)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)dealloc;
- (void)_setupAlternateDateLabel;
- (id)initWithDate:(id)arg1;

@end

