//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVContentPartnerKitUI/TVCKAppDelegate.h>

#import <TVContentPartnerKitUI/TVCKStoreFavoritesViewControllerDelegate-Protocol.h>
#import <TVContentPartnerKitUI/TVSMediaCacheManagerResponder-Protocol.h>
#import <TVContentPartnerKitUI/TVSSecureKeyLoaderDelegate-Protocol.h>

@class NSString, TVSSecureKeyStandardLoader;

@interface TVCKStoreAppDelegate : TVCKAppDelegate <TVSMediaCacheManagerResponder, TVSSecureKeyLoaderDelegate, TVCKStoreFavoritesViewControllerDelegate>
{
    TVSSecureKeyStandardLoader *_fpsCertLoader;
}

@property(retain, nonatomic) TVSSecureKeyStandardLoader *fpsCertLoader; // @synthesize fpsCertLoader=_fpsCertLoader;
- (void).cxx_destruct;
- (void)_loadFPSCertWithURL:(id)arg1 keyDataURL:(id)arg2;
- (void)_storeURLBagDidLoad:(id)arg1;
- (void)_loadFPSCert;
- (void)playCurrentlyCachingVideo;
- (_Bool)isDeviceAsleepAndSleptManually:(_Bool *)arg1;
@property(readonly, copy, nonatomic) NSString *mediaType;
- (void)secureKeyLoader:(id)arg1 didLoadKeyResponseData:(id)arg2 renewalDate:(id)arg3 forRequest:(id)arg4;
- (void)secureKeyLoader:(id)arg1 didLoadContentIdentifierData:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didLoadCertificateData:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didFailWithError:(id)arg2 forRequest:(id)arg3;
- (_Bool)mediaCacheManagerItemDidBecomeLikelyToKeepUp:(id)arg1;
- (void)storeFavoritesViewController:(id)arg1 didSelectItem:(id)arg2;
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;
- (id)launchOptionsWithDefaultOptions:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
