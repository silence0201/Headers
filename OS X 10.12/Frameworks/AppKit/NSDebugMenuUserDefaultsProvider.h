//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSDebugMenuItemProvider-Protocol.h>
#import <AppKit/NSMenuDelegate-Protocol.h>

@class NSMenu, NSMenuItem, NSString;

__attribute__((visibility("hidden")))
@interface NSDebugMenuUserDefaultsProvider : NSObject <NSMenuDelegate, NSDebugMenuItemProvider>
{
    NSMenuItem *_defaultsMenuItem;
    NSMenu *_defaultsMenu;
}

+ (void)registerUserDefaultController:(id)arg1;
+ (id)_userDefaultControllers;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (long long)numberOfItemsInMenu:(id)arg1;
- (void)_defaultControllersDidChange:(id)arg1;
- (id)defaultsMenuCreateIfNecessary;
@property(readonly, copy) NSMenuItem *menuItem;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
