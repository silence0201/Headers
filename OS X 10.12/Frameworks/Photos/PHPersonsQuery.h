//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHQuery.h>

@class RDPersonsQuery;

@interface PHPersonsQuery : PHQuery
{
    RDPersonsQuery *_rdquery;
}

+ (id)propertyPathsFromFetchOptions:(id)arg1 photoLibrary:(id)arg2;
- (void).cxx_destruct;
- (BOOL)changedByModelChangeGroups:(id)arg1;
- (id)resolveModels;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClusterSequenceNumbers:(id)arg1 photoLibrary:(id)arg2 options:(id)arg3;
- (id)initWithFaceGroup:(id)arg1 fetchOptions:(id)arg2;
- (id)initWithFace:(id)arg1 fetchOptions:(id)arg2;
- (id)initWithAsset:(id)arg1 fetchOptions:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1 fetchOptions:(id)arg2;
- (id)initWithFilter:(id)arg1 photoLibrary:(id)arg2 options:(id)arg3;

@end
