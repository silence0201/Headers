//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSURLSessionDownloadTask;

@interface _TVURLSessionDownloadTaskWrapper : NSObject
{
    NSURL *_url;
    NSURLSessionDownloadTask *_downloadTask;
    long long _downloadTaskID;
    long long _state;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)resumeWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long state;
- (id)initWithURL:(id)arg1;

@end
