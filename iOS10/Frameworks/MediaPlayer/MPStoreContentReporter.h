//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSOperationQueue;

@interface MPStoreContentReporter : NSObject
{
    NSOperationQueue *_operationQueue;
    NSDictionary *_reportConcernBagDictionary;
}

+ (id)sharedReporter;
- (void).cxx_destruct;
- (id)_deletePostURLComponentsFromBag:(id)arg1;
- (id)_deleteCommentURLComponentsFromBag:(id)arg1;
- (id)_reportConcernBagDictionary;
- (id)_dictionariesForType:(long long)arg1;
- (id)baseURLStringForReport;
- (id)reportsForType:(long long)arg1 contentId:(id)arg2 aucType:(id)arg3;
- (void)_performWithBag:(CDUnknownBlockType)arg1;
- (void)deletePost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteComment:(id)arg1 activityID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)submitReport:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

