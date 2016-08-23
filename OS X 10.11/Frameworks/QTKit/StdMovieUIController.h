//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, QTMovie, QTMovieView;
@protocol StandardMovieUIInterface;

__attribute__((visibility("hidden")))
@interface StdMovieUIController : NSObject
{
    id <StandardMovieUIInterface> movieUI;
    QTMovieView *movieScreen;
    QTMovie *theMovie;
    long long _cachedMovieLoadState;
    NSTimer *_playHeadTimer;
    BOOL _suspendPlayheadUpdates;
    double _updateFrequency;
}

- (void)_actOnStatusStringPosted:(id)arg1;
- (void)_actOnMovieEdited:(id)arg1;
- (void)_actOnEditabilityChanged:(id)arg1;
- (void)_actOnSelectionChanged:(id)arg1;
- (void)_actOnChapterListChanged:(id)arg1;
- (void)_actOnChapterChanged:(id)arg1;
- (void)_actOnVolumeChanged:(id)arg1;
- (void)_actOnTimeChanged:(id)arg1;
- (void)_actOnRateChanged:(id)arg1;
- (void)_actOnLoadedRangesChanged:(id)arg1;
- (void)_actOnLoadStateChanged:(id)arg1;
- (void)gotoStart:(id)arg1;
- (void)gotoEnd:(id)arg1;
- (void)pause:(id)arg1;
- (void)fastReverse:(id)arg1;
- (void)fastForward:(id)arg1;
- (void)stepReverse:(id)arg1;
- (void)stepForward:(id)arg1;
- (void)trim:(id)arg1;
- (void)addScaled:(id)arg1;
- (void)add:(id)arg1;
- (void)clear:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)selectionChanged:(id)arg1;
- (void)chapterChanged:(id)arg1;
- (void)mutingChanged:(id)arg1;
- (void)volumeChanged:(id)arg1;
- (void)setUpdateFrequency:(double)arg1;
- (void)suspendPlayHeadUpdates:(BOOL)arg1;
- (void)playHeadMoved:(id)arg1;
- (void)playSelection:(id)arg1;
- (void)playReverse:(id)arg1;
- (void)play:(id)arg1;
- (void)indicateSelection;
- (void)indicateLoadedRange;
- (void)indicateDuration;
- (void)indicatePlayingStopped;
- (void)indicatePlayingStarted;
- (id)initWithMovieUI:(id)arg1;
- (id)movieUI;
- (void)setMovieUI:(id)arg1;
- (id)movieScreen;
- (void)setMovieScreen:(id)arg1;
- (void)dealloc;
- (id)movie;
- (void)setMovie:(id)arg1;
- (void)_setInitialUIState;
- (void)_setChapterList;
- (void)_stopPlayheadTimer;
- (void)_startPlayheadTimer;
- (void)_playHeadUpdater;

@end
