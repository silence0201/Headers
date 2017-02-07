//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface APGraphLayer : CALayer
{
    float **_Values;
    float *_Mins;
    float *_Maxes;
    int *_StartIndex;
    int *_NumValues;
    int _NumGraphs;
    struct CGPoint *_Lines;
    int _MaxLength;
    struct __CTFont *_Font;
    struct __CFDictionary *_TextAttributes;
}

+ (struct CGColor *)copyGraphColorWithIndex:(int)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)dealloc;
- (id)init;
- (void)updateValue:(int)arg1 value:(float)arg2;
- (void)setUpGraph:(int)arg1 min:(float)arg2 max:(float)arg3 numValues:(int)arg4;
- (void)setUpGraphs:(int)arg1;

@end
