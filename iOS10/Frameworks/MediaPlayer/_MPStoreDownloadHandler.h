//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSDownloadHandler.h>

@class NSString;

@interface _MPStoreDownloadHandler : SSDownloadHandler
{
    _Bool _skipInstall;
    NSString *_downloadFilePath;
}

@property(nonatomic) _Bool skipInstall; // @synthesize skipInstall=_skipInstall;
@property(copy, nonatomic) NSString *downloadFilePath; // @synthesize downloadFilePath=_downloadFilePath;
- (void).cxx_destruct;

@end

