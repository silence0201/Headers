//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSavePanel.h>

@class NSArray;

@interface NSOpenPanel : NSSavePanel
{
    char _reservedOpenPanel[4];
    void *_privateOpenPanel;
}

+ (id)openPanel;
@property(getter=isAccessoryViewDisclosed) BOOL accessoryViewDisclosed;
- (void)newDocument:(id)arg1;
- (void)_dismissModalForTerminate;
- (BOOL)preventsApplicationTerminationWhenModal;
@property BOOL canDownloadUbiquitousContents;
@property BOOL canResolveUbiquitousConflicts;
@property BOOL canChooseFiles;
@property BOOL allowsMultipleSelection;
@property BOOL canChooseDirectories;
@property BOOL resolvesAliases;
- (id)filenames;
@property(readonly, copy) NSArray *URLs;
- (void)_initSaveMode;
- (void)_unregisterKVOWithViewBridgeService:(id)arg1 onBridge:(id)arg2;
- (void)_registerKVOWithViewBridgeService:(id)arg1 onBridge:(id)arg2;

@end

