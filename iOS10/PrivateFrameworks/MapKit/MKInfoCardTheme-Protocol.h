//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class UIColor, UIFont;

@protocol MKInfoCardTheme <NSObject>
@property(readonly, nonatomic) UIFont *smallAttributionFont;
@property(readonly, nonatomic) UIFont *attributionFont;
@property(readonly, nonatomic) UIFont *sectionHeaderFont;
@property(readonly, nonatomic) UIFont *mediumBodyFont;
@property(readonly, nonatomic) UIFont *boldBodyFont;
@property(readonly, nonatomic) UIFont *bodyFont;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) UIFont *largeTitleFont;
@property(readonly, nonatomic) UIColor *highlightedRowColor;
@property(readonly, nonatomic) UIColor *selectedRowColor;
@property(readonly, nonatomic) UIColor *rowColor;
@property(readonly, nonatomic) UIColor *separatorLineColor;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) UIColor *tintColor;
@property(readonly, nonatomic) UIColor *lightTextColor;
@property(readonly, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) _Bool isVibrantTheme;
@property(readonly, nonatomic) _Bool isDarkTheme;
@property(readonly, nonatomic) unsigned long long themeType;
- (UIFont *)iconFontToMatch:(UIFont *)arg1;
@end

