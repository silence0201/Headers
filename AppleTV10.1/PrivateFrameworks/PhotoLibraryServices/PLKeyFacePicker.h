//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PLDetectedFace;

@interface PLKeyFacePicker : NSObject
{
    int _largestNonManualFaceSizeWithSmileAndNoBlinkAboveThreshold;
    int _largestNonManualFaceSizeWithNoBlinkAboveThreshold;
    int _largestManualFaceSizeAboveThreshold;
    int _largestFaceSize;
    PLDetectedFace *_largestNonManualFaceWithSmileAndNoBlinkAboveThreshold;
    PLDetectedFace *_largestNonManualFaceWithNoBlinkAboveThreshold;
    PLDetectedFace *_largestManualFaceAboveThreshold;
    PLDetectedFace *_largestFace;
}

+ (id)keyFaceFromFaces:(id)arg1;
@property(retain, nonatomic) PLDetectedFace *largestFace; // @synthesize largestFace=_largestFace;
@property(nonatomic) int largestFaceSize; // @synthesize largestFaceSize=_largestFaceSize;
@property(retain, nonatomic) PLDetectedFace *largestManualFaceAboveThreshold; // @synthesize largestManualFaceAboveThreshold=_largestManualFaceAboveThreshold;
@property(nonatomic) int largestManualFaceSizeAboveThreshold; // @synthesize largestManualFaceSizeAboveThreshold=_largestManualFaceSizeAboveThreshold;
@property(retain, nonatomic) PLDetectedFace *largestNonManualFaceWithNoBlinkAboveThreshold; // @synthesize largestNonManualFaceWithNoBlinkAboveThreshold=_largestNonManualFaceWithNoBlinkAboveThreshold;
@property(nonatomic) int largestNonManualFaceSizeWithNoBlinkAboveThreshold; // @synthesize largestNonManualFaceSizeWithNoBlinkAboveThreshold=_largestNonManualFaceSizeWithNoBlinkAboveThreshold;
@property(retain, nonatomic) PLDetectedFace *largestNonManualFaceWithSmileAndNoBlinkAboveThreshold; // @synthesize largestNonManualFaceWithSmileAndNoBlinkAboveThreshold=_largestNonManualFaceWithSmileAndNoBlinkAboveThreshold;
@property(nonatomic) int largestNonManualFaceSizeWithSmileAndNoBlinkAboveThreshold; // @synthesize largestNonManualFaceSizeWithSmileAndNoBlinkAboveThreshold=_largestNonManualFaceSizeWithSmileAndNoBlinkAboveThreshold;
- (id)keyFaceFromFaces:(id)arg1;
- (void)dealloc;

@end

