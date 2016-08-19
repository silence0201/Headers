//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADSoftLinking : NSObject
{
    Class _MPMoviePlayerController;
    Class _MPMoviePlayerViewController;
    Class _MPNetworkPlayabilityMonitor;
    NSString *_MPMoviePlayerWillEnterFullscreenNotification;
    NSString *_MPMoviePlayerDidEnterFullscreenNotification;
    NSString *_MPMoviePlayerWillExitFullscreenNotification;
    NSString *_MPMoviePlayerDidExitFullscreenNotification;
    NSString *_MPMoviePlayerIsAirPlayVideoActiveDidChangeNotification;
    NSMutableDictionary *_loadedFrameworks;
    NSMutableDictionary *_boundSymbols;
    NSObject<OS_dispatch_queue> *_loadQueue;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loadQueue; // @synthesize loadQueue=_loadQueue;
@property(readonly, nonatomic) NSMutableDictionary *boundSymbols; // @synthesize boundSymbols=_boundSymbols;
@property(readonly, nonatomic) NSMutableDictionary *loadedFrameworks; // @synthesize loadedFrameworks=_loadedFrameworks;
@property(readonly, nonatomic) NSString *MPMoviePlayerIsAirPlayVideoActiveDidChangeNotification; // @synthesize MPMoviePlayerIsAirPlayVideoActiveDidChangeNotification=_MPMoviePlayerIsAirPlayVideoActiveDidChangeNotification;
@property(readonly, nonatomic) NSString *MPMoviePlayerDidExitFullscreenNotification; // @synthesize MPMoviePlayerDidExitFullscreenNotification=_MPMoviePlayerDidExitFullscreenNotification;
@property(readonly, nonatomic) NSString *MPMoviePlayerWillExitFullscreenNotification; // @synthesize MPMoviePlayerWillExitFullscreenNotification=_MPMoviePlayerWillExitFullscreenNotification;
@property(readonly, nonatomic) NSString *MPMoviePlayerDidEnterFullscreenNotification; // @synthesize MPMoviePlayerDidEnterFullscreenNotification=_MPMoviePlayerDidEnterFullscreenNotification;
@property(readonly, nonatomic) NSString *MPMoviePlayerWillEnterFullscreenNotification; // @synthesize MPMoviePlayerWillEnterFullscreenNotification=_MPMoviePlayerWillEnterFullscreenNotification;
@property(readonly, nonatomic) Class MPNetworkPlayabilityMonitor; // @synthesize MPNetworkPlayabilityMonitor=_MPNetworkPlayabilityMonitor;
@property(readonly, nonatomic) Class MPMoviePlayerViewController; // @synthesize MPMoviePlayerViewController=_MPMoviePlayerViewController;
@property(readonly, nonatomic) Class MPMoviePlayerController; // @synthesize MPMoviePlayerController=_MPMoviePlayerController;
@property(readonly, nonatomic) Class WBUFormDataControllerWK1;
@property(readonly, nonatomic) NSString *kToneArtistKey;
@property(readonly, nonatomic) NSString *kToneDurationKey;
@property(readonly, nonatomic) NSString *kToneGenreKey;
@property(readonly, nonatomic) NSString *kToneTitleKey;
@property(readonly, nonatomic) Class TLToneManager;
@property(readonly, nonatomic) NSString *SKStoreProductParameterITunesItemIdentifier;
@property(readonly, nonatomic) Class SKStoreProductViewController;
@property(readonly, nonatomic) NSString *SLServiceTypeTwitter;
@property(readonly, nonatomic) Class SLService;
@property(readonly, nonatomic) Class SLRequest;
@property(readonly, nonatomic) Class SLComposeViewController;
@property(readonly, nonatomic) Class PLStaticWallpaperImageViewController;
@property(readonly, nonatomic) NSString *PKPaymentNetworkVisa;
@property(readonly, nonatomic) NSString *PKPaymentNetworkMasterCard;
@property(readonly, nonatomic) NSString *PKPaymentNetworkChinaUnionPay;
@property(readonly, nonatomic) NSString *PKPaymentNetworkAmex;
@property(readonly, nonatomic) Class PKShippingMethod;
@property(readonly, nonatomic) Class PKPaymentSummaryItem;
@property(readonly, nonatomic) Class PKPaymentAuthorizationViewController;
@property(readonly, nonatomic) Class PKPaymentRequest;
@property(readonly, nonatomic) Class PKPayment;
@property(readonly, nonatomic) Class PKAddPassesViewController;
@property(readonly, nonatomic) Class PKPassLibrary;
@property(readonly, nonatomic) Class PKPass;
@property(readonly, nonatomic) Class MFMessageComposeViewController;
@property(readonly, nonatomic) Class MFMailComposeViewController;
@property(readonly, nonatomic) NSString *UIMoviePlayerControllerDidExitFullscreenNotification;
@property(readonly, nonatomic) NSString *UIMoviePlayerControllerDidEnterFullscreenNotification;
@property(readonly, nonatomic) Class EKReminderViewController;
@property(readonly, nonatomic) Class EKEventEditViewController;
@property(readonly, nonatomic) NSString *AVLayerVideoGravityResizeAspect;
@property(readonly, nonatomic) NSString *AVLayerVideoGravityResizeAspectFill;
@property(readonly, nonatomic) NSString *AVPlayerItemPlaybackStalledNotification;
@property(readonly, nonatomic) NSString *AVPlayerItemFailedToPlayToEndTimeErrorKey;
@property(readonly, nonatomic) NSString *AVPlayerItemFailedToPlayToEndTimeNotification;
@property(readonly, nonatomic) NSString *AVPlayerItemDidPlayToEndTimeNotification;
@property(readonly, nonatomic) Class AVURLAsset;
@property(readonly, nonatomic) Class AVPlayerLayer;
@property(readonly, nonatomic) Class AVPlayerItem;
@property(readonly, nonatomic) Class AVPlayer;
@property(readonly, nonatomic) CDUnknownFunctionPointerType AudioFileOpenWithCallbacks;
@property(readonly, nonatomic) CDUnknownFunctionPointerType AudioFileGetProperty;
@property(readonly, nonatomic) Class ABPeoplePickerNavigationController;
@property(readonly, nonatomic) Class ABNewPersonViewController;
- (id)_stringWithName:(id)arg1 inFrameworkAtPath:(id)arg2;
- (void *)_pointerToSymbolWithName:(id)arg1 inFrameworkAtPath:(id)arg2;
- (Class)_classWithName:(id)arg1 inFrameworkAtPath:(id)arg2;
- (void)_loadFrameworkIfNeeded:(id)arg1;
- (id)init;

@end

