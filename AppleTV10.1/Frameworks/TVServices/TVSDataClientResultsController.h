//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, TVSDataClient, TVSDataQuery;
@protocol TVSDataClientResultsControllerDataSource, TVSDataClientResultsControllerDelegate;

@interface TVSDataClientResultsController : NSObject
{
    _Bool _initialResultsNeedUpdating;
    _Bool _pausedUpdateHandling;
    CDUnknownBlockType _dataQueryBlock;
    id <TVSDataClientResultsControllerDataSource> _dataSource;
    id <TVSDataClientResultsControllerDelegate> _delegate;
    TVSDataClient *_dataClient;
    NSArray *_results;
    long long _status;
    unsigned long long _queryAttempt;
    TVSDataQuery *_query;
    NSDictionary *_pausedDataClientDataUpdateInfo;
}

@property(copy, nonatomic) NSDictionary *pausedDataClientDataUpdateInfo; // @synthesize pausedDataClientDataUpdateInfo=_pausedDataClientDataUpdateInfo;
@property(nonatomic) _Bool pausedUpdateHandling; // @synthesize pausedUpdateHandling=_pausedUpdateHandling;
@property(nonatomic) _Bool initialResultsNeedUpdating; // @synthesize initialResultsNeedUpdating=_initialResultsNeedUpdating;
@property(retain, nonatomic) TVSDataQuery *query; // @synthesize query=_query;
@property(nonatomic) unsigned long long queryAttempt; // @synthesize queryAttempt=_queryAttempt;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) TVSDataClient *dataClient; // @synthesize dataClient=_dataClient;
@property(nonatomic) __weak id <TVSDataClientResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TVSDataClientResultsControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) CDUnknownBlockType dataQueryBlock; // @synthesize dataQueryBlock=_dataQueryBlock;
- (void).cxx_destruct;
- (void)resumeUpdateHandling;
- (void)pauseUpdateHandling;
- (void)stop;
- (void)start;
- (void)_notifyDidFailQuery:(id)arg1;
- (void)_notifyDidChangeResultsForQuery:(id)arg1;
- (void)_notifyWillChangeResultsForQuery:(id)arg1;
- (void)_attemptQuery;
- (void)_handleDataClientDataUpdated:(id)arg1;
- (void)_dataClientDataUpdated:(id)arg1;
- (void)dealloc;
- (id)initWithDataClient:(id)arg1;

@end
