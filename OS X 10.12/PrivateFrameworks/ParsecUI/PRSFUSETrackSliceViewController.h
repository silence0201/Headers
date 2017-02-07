//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ParsecUI/PRSSliceViewController.h>

@class NSURL, PRSAlbum, PRSTrack;

@interface PRSFUSETrackSliceViewController : PRSSliceViewController
{
    PRSAlbum *_album;
    PRSTrack *_track;
    NSURL *_albumOrSongURL;
}

@property(retain) NSURL *albumOrSongURL; // @synthesize albumOrSongURL=_albumOrSongURL;
@property(readonly) PRSTrack *track; // @synthesize track=_track;
@property(readonly) PRSAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (void)viewClosed;
- (id)trackSliceView;
- (void)syncAttributes;
- (void)setAdditionalHeight:(double)arg1;
- (double)imageWidth;
- (double)height;
- (void)awakeFromNib;
- (id)initWithTrack:(id)arg1;
- (id)initWithAlbum:(id)arg1;

@end
