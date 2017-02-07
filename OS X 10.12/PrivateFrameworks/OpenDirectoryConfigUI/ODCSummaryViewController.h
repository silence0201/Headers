//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpenDirectoryConfigUI/ODCViewControllerBase.h>

@class NSButton, NSImageView, NSPanel, NSTimer, NSView, ODCAddServerSheetController, ODCServersView, ODSession, XSDisablingTextField;

@interface ODCSummaryViewController : ODCViewControllerBase
{
    NSView *_view;
    XSDisablingTextField *_serverNameLabel;
    NSImageView *_serverStatusImage;
    NSButton *_editButton;
    NSButton *_joinButton;
    NSPanel *_serversSheet;
    ODCServersView *_serversSheetServersView;
    NSButton *_serversSheetDoneBtn;
    NSButton *_serversSheetDirectoryUtilBtn;
    ODSession *_odSession;
    NSTimer *_updateTimer;
    void *_odSearchNodeTrigger;
    ODCAddServerSheetController *_addServerSheetController;
    BOOL _boundToAD;
}

- (void)updateLocked;
- (void)sheetControllerDone:(id)arg1;
- (void)stopUpdating;
- (void)startUpdating;
- (void)lookForServers:(BOOL)arg1;
- (void)lookForServersIfViewVisible;
- (void)lookForServers;
- (void)buttonHit:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)authSucceededNotification:(id)arg1;
- (void)foundServers:(id)arg1;
- (void)threadedLookForServers;

@end
