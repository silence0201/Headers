//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/_LSIconCache.h>

#import <MobileCoreServices/LSIconCacheServiceProtocol-Protocol.h>
#import <MobileCoreServices/NSXPCListenerDelegate-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSIconCacheService : _LSIconCache <LSIconCacheServiceProtocol, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)cacheSalt;
+ (id)sharedInstance;
+ (void)beginListening;
- (_Bool)getIconBitmapDataWithResourceDirectoryURL:(id)arg1 boundContainerURL:(id)arg2 dataContainerURL:(id)arg3 bundleIdentifier:(id)arg4 iconsDictionary:(id)arg5 cacheFileName:(id)arg6 variant:(int)arg7 bitmapData:(id *)arg8;
- (_Bool)getIconBitmapDataWithResourceDirectoryURL:(id)arg1 bundleIdentifier:(id)arg2 roleIdentifier:(id)arg3 iconFiles:(id)arg4 variant:(int)arg5 options:(int)arg6 bitmapData:(id *)arg7;
- (void)setIconData:(id)arg1 forKey:(id)arg2;
- (_Bool)invalidateItemsForBundleIdentifier:(id)arg1;
- (void)copyIconBitmapCacheConfigurationWithReply:(CDUnknownBlockType)arg1;
- (void)invalidateItemsForBundeID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getIconBitmapDataWithResourceDirectoryURL:(id)arg1 boundContainerURL:(id)arg2 dataContainerURL:(id)arg3 bundleIdentifier:(id)arg4 iconsDictionary:(id)arg5 cacheFileName:(id)arg6 variant:(int)arg7 reply:(CDUnknownBlockType)arg8;
- (void)getIconBitmapDataWithResourceDirectoryURL:(id)arg1 bundleIdentifier:(id)arg2 roleIdentifier:(id)arg3 iconFiles:(id)arg4 variant:(int)arg5 options:(int)arg6 reply:(CDUnknownBlockType)arg7;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
