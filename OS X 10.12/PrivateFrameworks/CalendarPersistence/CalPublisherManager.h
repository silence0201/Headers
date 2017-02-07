//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CalPublisherManager : NSObject
{
    NSMutableDictionary *_publishers;
    double _autoPublishDelay;
    int _autoPublishStatus;
    BOOL _isAutoPublishEnabled;
    NSObject<OS_dispatch_queue> *_publish_queue;
}

+ (id)defaultManager;
- (void)scheduleAutoPublish;
- (void)removePublisherForKey:(id)arg1;
- (void)setPublisher:(id)arg1 forKey:(id)arg2;
- (id)publisherForKey:(id)arg1;
- (void)removeAllPublishers;
- (void)finalize;
- (void)dealloc;
- (BOOL)autoPublishEnabled;
- (void)setAutoPublishEnabled:(BOOL)arg1;
- (id)init;
- (void)publishNeeded:(id)arg1;
- (void)doAutoPublish;
- (void)cancelAutoPublish;

@end
