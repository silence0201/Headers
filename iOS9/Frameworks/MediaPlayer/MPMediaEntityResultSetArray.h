//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMediaArray.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPMediaQueryCriteria, MPMediaQuerySectionInfo, MPWeakRef, NSMutableArray, NSObject;
@protocol MPMediaLibraryResultSet, OS_dispatch_queue;

@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying>
{
    id <MPMediaLibraryResultSet> _resultSet;
    Class _entityClass;
    MPWeakRef *_libraryWeakRef;
    MPMediaQuerySectionInfo *_sectionInfo;
    NSMutableArray *_entities;
    NSObject<OS_dispatch_queue> *_entitiesQueue;
    MPMediaQueryCriteria *_queryCriteria;
    long long _revision;
}

- (id)sectionInfo;
@property(readonly, nonatomic) id <MPMediaLibraryResultSet> resultSet; // @synthesize resultSet=_resultSet;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)arg1;
- (_Bool)isQueryResultSetInvalidated;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResultSet:(id)arg1 queryCriteria:(id)arg2 entityType:(long long)arg3 library:(id)arg4;

@end

