//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/TVSPlaylist.h>

@interface TVSPlaylist (TVMusic)
- (void)insertAfterCurrentPlayingItem:(id)arg1;
- (void)purgeHistory;
- (void)setMediaAsCurrentlyPlayingAppendTracklist:(id)arg1;
- (void)playItemsNext:(id)arg1;
- (void)moveItemAtIndexToPlayNext:(long long)arg1;
- (_Bool)canMoveItemAtIndexToPlayNext:(long long)arg1;
@end
