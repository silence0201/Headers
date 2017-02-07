//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDAnnotationHosting-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor, TSPObject, TSTTableInfo;

__attribute__((visibility("hidden")))
@interface TSTCommentHosting : NSObject <TSDAnnotationHosting>
{
    TSDCommentStorage *mStorage;
    TSTTableInfo *mTableInfo;
    struct TSTCellUID mCellUID;
}

@property(readonly, nonatomic) struct TSTCellUID cellUID; // @synthesize cellUID=mCellUID;
@property(retain, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=mTableInfo;
- (id).cxx_construct;
- (void)commentWillBeAddedToDocumentRoot;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
@property(readonly, nonatomic) NSDate *date;
- (void)setAuthor:(id)arg1;
@property(readonly, nonatomic) TSKAnnotationAuthor *author;
@property(readonly, nonatomic) struct TSUCellCoord cellID;
@property(readonly, nonatomic) TSPObject *hostingModel;
- (Class)editorClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) TSDCommentStorage *storage;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 forTableInfo:(id)arg2 cellID:(struct TSUCellCoord)arg3;

// Remaining properties
@property(readonly, nonatomic) NSString *changeTrackingContentFormatString;
@property(readonly, nonatomic) NSString *changeTrackingContentString;
@property(readonly, nonatomic) NSString *changeTrackingTitleString;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
