//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class UIFont;

@interface UITextRenderingAttributes : NSObject <NSCopying>
{
    UIFont *_font;
    double _minimumFontSize;
    double _actualFontSize;
    double _lineSpacing;
    long long _lineBreakMode;
    long long _baselineAdjustment;
    double _trackingAdjustment;
    double _minimumTrackingAdjustment;
    double _actualTrackingAdjustment;
    long long _alignment;
    _Bool _includeEmoji;
    struct CGRect _truncationRect;
    _Bool _drawUnderline;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

