//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreUI/NSObject-Protocol.h>

@class FRToolbarManager, NSString;

@protocol FRToolbarManagerDelegate <NSObject>

@optional
- (void)toolbarManagerReloadedPage:(FRToolbarManager *)arg1;
- (void)toolbarManagerNavigatedForward:(FRToolbarManager *)arg1;
- (void)toolbarManagerNavigatedBack:(FRToolbarManager *)arg1;
- (void)toolbarManager:(FRToolbarManager *)arg1 selectedItem:(NSString *)arg2;
- (void)toolbarManager:(FRToolbarManager *)arg1 enteredSearchString:(NSString *)arg2;
@end
