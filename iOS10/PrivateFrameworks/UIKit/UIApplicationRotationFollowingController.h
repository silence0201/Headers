//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIApplicationRotationFollowingController : UIViewController
{
    _Bool _sizesWindowToScene;
}

@property(nonatomic) _Bool sizesWindowToScene; // @synthesize sizesWindowToScene=_sizesWindowToScene;
- (void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2;
- (long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

