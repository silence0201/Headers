//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSPointerArray;

@interface _PXPhotosDetailsPurger : NSObject
{
    NSHashTable *_allViewControllers;
    NSPointerArray *_lastUsedViewControllers;
}

+ (id)sharedPurger;
- (void).cxx_destruct;
- (void)_purgeAllViewControllers;
- (void)purgeOldViewControllers;
- (void)detailsViewControllerDidAppear:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)init;

@end
