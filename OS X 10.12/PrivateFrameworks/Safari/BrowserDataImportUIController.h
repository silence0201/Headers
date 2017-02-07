//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMenu, NSMenuItem;

__attribute__((visibility("hidden")))
@interface BrowserDataImportUIController : NSObject
{
    NSMenuItem *_importBookmarksFromFileMenuItem;
    NSMenuItem *_importBrowserDataMenuItem;
    NSMenu *_submenu;
    NSMenuItem *_importFromChromeMenuItem;
    NSMenuItem *_importFromFirefoxMenuItem;
    NSMenuItem *_importFromFileMenuItem;
}

+ (id)sharedController;
@property(nonatomic) __weak NSMenuItem *importFromFileMenuItem; // @synthesize importFromFileMenuItem=_importFromFileMenuItem;
@property(nonatomic) __weak NSMenuItem *importFromFirefoxMenuItem; // @synthesize importFromFirefoxMenuItem=_importFromFirefoxMenuItem;
@property(nonatomic) __weak NSMenuItem *importFromChromeMenuItem; // @synthesize importFromChromeMenuItem=_importFromChromeMenuItem;
@property(retain, nonatomic) NSMenu *submenu; // @synthesize submenu=_submenu;
@property(retain, nonatomic) NSMenuItem *importBrowserDataMenuItem; // @synthesize importBrowserDataMenuItem=_importBrowserDataMenuItem;
@property(retain, nonatomic) NSMenuItem *importBookmarksFromFileMenuItem; // @synthesize importBookmarksFromFileMenuItem=_importBookmarksFromFileMenuItem;
- (void).cxx_destruct;
- (BOOL)validate_importFromFile:(id)arg1;
- (void)importFromFile:(id)arg1;
- (BOOL)validate_importFromBrowser:(id)arg1;
- (void)importFromBrowser:(id)arg1;
- (void)_updateBrowserMenuItems;
- (BOOL)_canCurrentlyImport;
- (BOOL)_canImportFromAnyBrowser;
- (void)updateItemsInMenu:(id)arg1;

@end
