//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol CPLEngineTransportGetLibraryInfoTask;

@interface CPLGetAssetCountsTask : CPLEngineSyncTask
{
    id <CPLEngineTransportGetLibraryInfoTask> _transportTask;
}

- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)launch;

@end

