//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVMusicTableViewController.h>

@class TVSDataCollection;

@interface TVMusicAlbumsTableViewController : TVMusicTableViewController
{
    TVSDataCollection *_artist;
    TVSDataCollection *_composer;
    TVSDataCollection *_genre;
}

@property(retain, nonatomic) TVSDataCollection *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) TVSDataCollection *composer; // @synthesize composer=_composer;
@property(retain, nonatomic) TVSDataCollection *artist; // @synthesize artist=_artist;
- (void).cxx_destruct;
- (long long)_allSongsSectionRowCount;
- (void)_configureAllSongsSectionRowCell:(id)arg1 atRowIndex:(long long)arg2;
- (id)mediaItemsQueryForDataCollection:(id)arg1;
- (id)_focusedDataBaseItem;
- (id)_playbackViewController;
- (id)_previewViewControllerForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithDataClient:(id)arg1 showCompilationsOnly:(_Bool)arg2 artist:(id)arg3 composer:(id)arg4 genre:(id)arg5;
- (id)initWithDataClient:(id)arg1 composer:(id)arg2;
- (id)initWithDataClient:(id)arg1 genre:(id)arg2;
- (id)initWithDataClient:(id)arg1 artist:(id)arg2 genre:(id)arg3;
- (id)initWithDataClient:(id)arg1 showCompilationsOnly:(_Bool)arg2;
- (id)initWithDataClient:(id)arg1;

@end

