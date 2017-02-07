//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol MKSystemControllerOpenURLDelegate;

@interface MKSystemController : NSObject
{
    id <MKSystemControllerOpenURLDelegate> _openURLDelegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <MKSystemControllerOpenURLDelegate> openURLDelegate; // @synthesize openURLDelegate=_openURLDelegate;
- (void).cxx_destruct;
- (_Bool)overrideBlurStyle;
- (void)openURL:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)placeDialRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)openURL:(id)arg1;
- (_Bool)_shouldUseLaunchServices;
- (_Bool)_openURLsOnBackgroundThread;
- (id)_defaultOpenURLOptions;
- (_Bool)reduceMotionEnabled;
- (_Bool)requiresRTT;
- (_Bool)supports3DImagery;
- (_Bool)supportsPitchAPI;
- (_Bool)supports3DMaps;
- (_Bool)isInternalInstall;
- (int)userInterfaceIdiom;
- (_Bool)isHiDPI;
- (struct CGSize)screenSize;
- (double)screenScale;
- (_Bool)supportsAlwaysOnCompass;
- (_Bool)isPhone6PlusOrLarger;
- (_Bool)isDevicePluggedIn;
- (_Bool)isWifiEnabled;

@end
