//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class FIFinderView, NSArray, NSSet, NSString, NSURL, QLPreviewPanel;

@protocol FIFinderViewDelegate <NSObject>

@optional
- (NSSet *)finderViewQuerySearchUTIs:(FIFinderView *)arg1;
- (BOOL)finderView:(FIFinderView *)arg1 acceptsPreviewPanelControl:(QLPreviewPanel *)arg2;
- (void)finderView:(FIFinderView *)arg1 configureForGotoWithFilename:(NSString *)arg2;
- (void)finderView:(FIFinderView *)arg1 scopeChanged:(BOOL)arg2;
- (void)finderViewViewStyleChanged:(FIFinderView *)arg1;
- (NSArray *)finderViewRequestRecentPlaces:(FIFinderView *)arg1;
- (void)finderView:(FIFinderView *)arg1 clickedOnDisabledURL:(NSURL *)arg2;
- (void)finderView:(FIFinderView *)arg1 populationInProgress:(BOOL)arg2;
- (BOOL)finderViewOpenSelection:(FIFinderView *)arg1;
- (void)finderViewSelectionDidChange:(FIFinderView *)arg1;
- (void)finderView:(FIFinderView *)arg1 didChangeToDirectoryURL:(NSURL *)arg2;
- (BOOL)finderView:(FIFinderView *)arg1 showAsPackageForURL:(NSURL *)arg2;
- (BOOL)finderView:(FIFinderView *)arg1 canSelectURL:(NSURL *)arg2 itemIsContainer:(BOOL)arg3 itemIsPackage:(BOOL)arg4;
- (BOOL)finderView:(FIFinderView *)arg1 canSelectURL:(NSURL *)arg2;
- (BOOL)finderView:(FIFinderView *)arg1 shouldEnableURL:(NSURL *)arg2;
- (BOOL)finderView:(FIFinderView *)arg1 shouldEnableURL:(NSURL *)arg2 itemIsContainer:(BOOL)arg3 itemIsPackage:(BOOL)arg4;
- (BOOL)finderView:(FIFinderView *)arg1 shouldEnableURL:(NSURL *)arg2 itemIsContainer:(BOOL)arg3 itemIsPackage:(BOOL)arg4 pathExtension:(NSString *)arg5 itemHFSType:(unsigned int)arg6 typeIdentifier:(NSString *)arg7;
@end

