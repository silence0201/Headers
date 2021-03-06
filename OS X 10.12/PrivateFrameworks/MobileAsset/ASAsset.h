//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface ASAsset : NSObject
{
    NSString *_assetType;
    NSDictionary *_attributes;
    NSDictionary *_downloadOptions;
    NSString *_clientName;
    NSString *_identifier;
    CDUnknownBlockType _progressHandler;
    struct __MobileAsset *_cfAsset;
    BOOL _userInitiatedDownload;
}

+ (BOOL)nonUserInitiatedDownloadsAllowed;
@property(nonatomic) BOOL userInitiatedDownload; // @synthesize userInitiatedDownload=_userInitiatedDownload;
@property(retain, nonatomic) NSDictionary *downloadOptions; // @synthesize downloadOptions=_downloadOptions;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
- (id)_getLocalAttribute:(id)arg1;
- (struct __MobileAsset *)mobileAsset;
- (BOOL)purgeAndReturnError:(id *)arg1;
- (void)purge:(CDUnknownBlockType)arg1;
- (BOOL)cancelDownloadAndReturnError:(id *)arg1;
- (void)cancelDownload:(CDUnknownBlockType)arg1;
- (BOOL)resumeDownloadAndReturnError:(id *)arg1;
- (void)resumeDownload:(CDUnknownBlockType)arg1;
- (BOOL)pauseDownloadAndReturnError:(id *)arg1;
- (void)pauseDownload:(CDUnknownBlockType)arg1;
- (void)beginDownloadWithOptions:(id)arg1;
- (void)_downloadWithOptions:(id)arg1 shouldFireCallback:(BOOL)arg2;
- (void)adjustDownloadOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)requiredDiskSpaceIsAvailableForDownloadOptions:(id)arg1 requiredBytes:(long long *)arg2 error:(id *)arg3;
- (BOOL)requiredDiskSpaceIsAvailable:(long long *)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSDate *installDate;
@property(nonatomic) long long garbageCollectionBehavior;
@property(readonly, nonatomic) long long state;
- (long long)assetStateForStateString:(id)arg1;
@property(readonly, nonatomic) NSDictionary *attributes;
@property(readonly, nonatomic) NSURL *localURL;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isPresentOnDisk;
- (id)identifier;
@property(readonly, nonatomic) NSDictionary *fullAttributes;
@property(retain, nonatomic) NSString *clientName;
- (id)initWithAssetType:(id)arg1 attributes:(id)arg2;

@end

