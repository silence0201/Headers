//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProKit/MKOldViewModule.h>

#import <ProKit/NSToolbarDelegate-Protocol.h>

@class MKOldWindowModuleController, NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface MKOldWindowModule : MKOldViewModule <NSToolbarDelegate>
{
    NSWindow *_window;
    MKOldWindowModuleController *_winController;
    NSString *_windowClass;
    NSString *_windowStyleMaskString;
    struct {
        unsigned int windowState:3;
        unsigned int isHidden:1;
        unsigned int ignoreWindowNotification:1;
        unsigned int RESERVED:27;
    } _wmFlags;
    void *_proReserved4;
    void *_proReserved5;
}

+ (id)_stringFromWindowStyleMask:(unsigned long long)arg1;
+ (unsigned long long)_windowStyleMaskFromString:(id)arg1;
+ (id)_toolbarDictionary;
+ (id)toolbarResourceBundle;
+ (id)toolbarConfigurationFile;
+ (Class)toolbarItemClass;
+ (Class)toolbarClass;
+ (unsigned long long)windowStyleMask;
+ (Class)windowClass;
+ (Class)windowControllerClass;
+ (unsigned long long)registeredStyleMaskForStringValue:(id)arg1;
+ (id)registeredStringValueForStyleMask:(unsigned long long)arg1;
+ (void)registerStyleMask:(unsigned long long)arg1 withStringValue:(id)arg2;
- (void)windowDidUpdate:(id)arg1;
- (void)moduleDidChangeLabel:(id)arg1;
- (void)moduleDidBecomeVisible:(id)arg1;
- (void)moduleDidUnhide;
- (void)moduleDidHide;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (void)_setViewForToolbar:(id)arg1 item:(id)arg2 info:(id)arg3;
- (void)_setImageForToolbarItem:(id)arg1 withInfo:(id)arg2;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)_setupToolbar;
- (id)contentLayoutDictionary;
- (void)takeGeometryLayoutFromDictionary:(id)arg1;
- (id)geometryLayoutDictionary;
- (void)orderWindow;
- (void)displayPostAutoLayout;
- (void)_setHiddenWindowState;
- (void)postLayout:(id)arg1;
- (void)preLayout:(id)arg1;
- (void)applyLayoutDictionary:(id)arg1;
- (id)windowTitle;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (BOOL)loadView;
- (id)window;
- (void)setWindow:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)removeSubmodule:(id)arg1;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (void)updateWindow;
- (void)setSupermodule:(id)arg1;
- (void)setWindowController:(id)arg1;
- (id)windowController;
- (BOOL)isVisible;
- (BOOL)isHidden;
- (void)updateHiddenFlag;
- (id)_unhide;
- (id)_hide;
- (void)finalize;
- (void)dealloc;
- (id)initWithWindowClass:(Class)arg1 windowStyleMask:(unsigned long long)arg2;
- (id)initWithModuleNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
