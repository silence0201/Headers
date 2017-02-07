//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class UIColor;

@interface HKStrokeStyle : NSObject <NSCopying>
{
    int _lineCap;
    int _lineJoin;
    UIColor *_strokeColor;
    double _lineWidth;
}

+ (id)strokeStyleWithColor:(id)arg1 lineWidth:(double)arg2;
@property(nonatomic) int lineJoin; // @synthesize lineJoin=_lineJoin;
@property(nonatomic) int lineCap; // @synthesize lineCap=_lineCap;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(copy, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void).cxx_destruct;
- (void)applyToContext:(struct CGContext *)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
