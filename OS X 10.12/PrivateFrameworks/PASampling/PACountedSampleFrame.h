//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PASampling/PACountedFrame.h>

@class PASampleFrame;

@interface PACountedSampleFrame : PACountedFrame
{
    PASampleFrame *_sampleFrame;
}

@property(readonly) PASampleFrame *sampleFrame; // @synthesize sampleFrame=_sampleFrame;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithSampleFrame:(id)arg1;

@end

