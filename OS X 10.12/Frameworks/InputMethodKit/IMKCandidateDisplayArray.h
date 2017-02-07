//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface IMKCandidateDisplayArray : NSObject
{
    NSMutableArray *_internalArray;
    double _length;
}

@property(nonatomic) double length; // @synthesize length=_length;
@property(retain, nonatomic) NSMutableArray *internalArray; // @synthesize internalArray=_internalArray;
- (void)lineBreak;
- (void)addRightAlignedString:(id)arg1 distance:(double)arg2;
- (void)addString:(id)arg1 distance:(double)arg2;
- (void)addString:(id)arg1 distance:(double)arg2 rightAligned:(BOOL)arg3;
@property(readonly, nonatomic) NSArray *positionedUIStrings;
@property(readonly, nonatomic) NSMutableArray *currentArray;
- (void)dealloc;

@end
