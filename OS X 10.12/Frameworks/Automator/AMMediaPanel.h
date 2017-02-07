//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Automator/NSWindowDelegate-Protocol.h>

@class ILMediaBrowserView, NSPointerArray, NSSegmentedControl, NSString;

@interface AMMediaPanel : NSWindowController <NSWindowDelegate>
{
    NSSegmentedControl *_segmentedControl;
    ILMediaBrowserView *_mediaBrowserView;
    NSPointerArray *_observers;
}

+ (BOOL)shouldDisplayMediaGroup:(id)arg1;
+ (id)sharedMediaPanel;
- (void)windowWillClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)togglePanel:(id)arg1;
- (void)displayMovieBrowser:(id)arg1;
- (void)displayImageBrowser:(id)arg1;
- (void)displayAudioBrowser:(id)arg1;
- (BOOL)mediaBrowserView:(id)arg1 shouldDisplayMediaGroup:(id)arg2;
- (void)selectMediaType:(id)arg1;
- (id)selectedMediaObjects;
- (void)awakeFromNib;
- (id)windowNibName;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
