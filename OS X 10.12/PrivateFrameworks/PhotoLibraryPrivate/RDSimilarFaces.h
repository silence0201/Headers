//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSNumber, RDSimilarFacesTable;

@interface RDSimilarFaces : RDModel
{
}

+ (Class)tableClass;
@property(readonly, nonatomic) BOOL ignored;
@property(readonly, nonatomic) double score;
@property(readonly, copy, nonatomic) NSNumber *detectedFaceId;
@property(readonly, copy, nonatomic) NSNumber *faceKey;
@property(readonly, copy, nonatomic) NSNumber *seedFaceKey;
@property(readonly, nonatomic) RDSimilarFacesTable *table;

@end
