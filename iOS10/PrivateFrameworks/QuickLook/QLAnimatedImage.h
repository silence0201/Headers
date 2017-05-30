//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QLImageData, UIImage;

__attribute__((visibility("hidden")))
@interface QLAnimatedImage : NSObject
{
    QLImageData *_imageData;
    unsigned long long _durationsCount;
    struct QLFrameDurationInformation *_durations;
    double _duration;
    UIImage *_lastImage;
    unsigned long long _lastImageIndex;
}

- (void).cxx_destruct;
- (id)frameAtTime:(double)arg1;
- (_Bool)time:(double)arg1 belongsToIndex:(unsigned long long)arg2;
- (long long)indexForTime:(double)arg1;
- (double)duration;
- (unsigned long long)frameCount;
- (void)generateDurations;
- (id)initWithContentsOfURL:(id)arg1;
- (void)dealloc;

@end
