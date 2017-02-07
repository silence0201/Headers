//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <ScreenSharing/SSFileTransferTableCellViewDelegate-Protocol.h>

@class NSButton, NSMutableArray, NSMutableDictionary, NSTableView, NSTextField, NSUserDefaults;

@interface SSFileTransferWindowController : NSWindowController <SSFileTransferTableCellViewDelegate>
{
    NSTableView *tableView;
    NSTextField *transferCountTextField;
    NSButton *cancelAllButton;
    NSMutableArray *fileTransferArray;
    long long rowPlusOneToMakeVisibleInAwakeFromNib;
    NSMutableDictionary *iconCacheDict;
    NSUserDefaults *iconCacheUserDefaults;
}

+ (id)sharedController;
@property(retain) NSUserDefaults *iconCacheUserDefaults; // @synthesize iconCacheUserDefaults;
@property(retain) NSMutableDictionary *iconCacheDict; // @synthesize iconCacheDict;
- (id)iconForFilePath:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateCount;
- (BOOL)shouldShowCancelAllButton;
- (void)saveIconCache;
- (void)loadHistory;
- (void)saveHistory;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)removeFileTransfersFromArray:(id)arg1;
- (void)removeFileTransfer:(id)arg1;
- (void)addFileTransfersFromArray:(id)arg1 saveHistory:(BOOL)arg2 scrollToLastItem:(BOOL)arg3;
- (void)addFileTransfersFromArray:(id)arg1;
- (void)addFileTransfer:(id)arg1;
- (void)cancelAll:(id)arg1;
- (void)clear:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (oneway void)release;
- (id)initWithWindow:(id)arg1;

@end
