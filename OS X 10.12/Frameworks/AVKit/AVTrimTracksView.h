//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVTrimTracksView : NSView
{
    NSArray *_trackViewControllers;
}

- (void).cxx_destruct;
- (void)setBoundsOrigin:(struct CGPoint)arg1;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
@property(copy, nonatomic) NSArray *trackViewControllers;
- (void)layoutTrackViews:(id)arg1;
- (id)trackViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
