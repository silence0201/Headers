//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@class CPLResource, NSString;
@protocol CPLEngineTransportTask;

@interface CPLEngineResourceDownloadTask : CPLResourceTransferTask
{
    _Bool _backgroundTask;
    _Bool _cancelledByEngine;
    _Bool _wantsTransportTask;
    _Bool _transportOwnsTask;
    CPLResource *_cloudResource;
    unsigned long long _taskIdentifierForQueue;
    NSString *_clientBundleID;
    id <CPLEngineTransportTask> _transportTask;
    CDUnknownBlockType _launchHandler;
    CDUnknownBlockType _cancelHandler;
    CDUnknownBlockType _didStartHandler;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
}

@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) CDUnknownBlockType didStartHandler; // @synthesize didStartHandler=_didStartHandler;
@property(readonly, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(readonly, nonatomic) CDUnknownBlockType launchHandler; // @synthesize launchHandler=_launchHandler;
@property(retain, nonatomic) id <CPLEngineTransportTask> transportTask; // @synthesize transportTask=_transportTask;
@property(nonatomic) _Bool transportOwnsTask; // @synthesize transportOwnsTask=_transportOwnsTask;
@property(nonatomic) _Bool wantsTransportTask; // @synthesize wantsTransportTask=_wantsTransportTask;
@property(nonatomic, getter=isCancelledByEngine) _Bool cancelledByEngine; // @synthesize cancelledByEngine=_cancelledByEngine;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(retain, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(nonatomic) unsigned long long taskIdentifierForQueue; // @synthesize taskIdentifierForQueue=_taskIdentifierForQueue;
@property(retain, nonatomic) CPLResource *cloudResource; // @synthesize cloudResource=_cloudResource;
- (void).cxx_destruct;
- (void)cancelTask;
- (void)launch;
- (id)initWithLaunchHandler:(CDUnknownBlockType)arg1 cancelHandler:(CDUnknownBlockType)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

