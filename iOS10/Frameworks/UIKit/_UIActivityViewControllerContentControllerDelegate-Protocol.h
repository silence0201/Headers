//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSString, UIActivity, UIViewController;

@protocol _UIActivityViewControllerContentControllerDelegate <NSObject>
- (void)airDropActivityDidSuccessfullyCompleteTransfer;
- (void)airDropActivityDidSuccessfullyStartTransfer;
- (NSArray *)_availableActivitiesMatchingOnlyUserElectedExtensions:(_Bool)arg1;
- (NSString *)_titleForActivity:(NSString *)arg1;
- (void)_presentUserDefaultsController:(UIViewController *)arg1;
- (void)_performActivity:(UIActivity *)arg1;
- (void)_changeActionButtonToDone;
@end

