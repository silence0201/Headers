//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDPersonsQuery.h>

@class LiRidList;

@interface RDLongLivedPersonsQuery : RDPersonsQuery
{
    LiRidList *_modelIdsFromNotification;
}

- (void).cxx_destruct;
- (void)loadFilteredModels;
- (void)modelsWithNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFilter:(id)arg1 database:(id)arg2 options:(id)arg3;

@end
