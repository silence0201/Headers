//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSNumber, UIMovieScrubberTrackView;

@protocol UIMovieScrubberTrackViewDataSource <NSObject>
- (void)movieScrubberTrackView:(UIMovieScrubberTrackView *)arg1 requestThumbnailImageForTimestamp:(NSNumber *)arg2 isSummaryThumbnail:(_Bool)arg3;
- (double)movieScrubberTrackViewThumbnailAspectRatio:(UIMovieScrubberTrackView *)arg1;
- (NSArray *)movieScrubberTrackView:(UIMovieScrubberTrackView *)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(NSNumber *)arg3 endingAt:(NSNumber *)arg4;
- (double)movieScrubberTrackViewDuration:(UIMovieScrubberTrackView *)arg1;
@end

