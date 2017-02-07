//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDFacePrintTable : RDTable
{
    LiKeyPath *_faceprintVersionKeyPath;
    LiKeyPath *_faceIdKeyPath;
    LiKeyPath *_faceprintKeyPath;
}

+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *faceprintKeyPath; // @synthesize faceprintKeyPath=_faceprintKeyPath;
@property(readonly, nonatomic) LiKeyPath *faceIdKeyPath; // @synthesize faceIdKeyPath=_faceIdKeyPath;
@property(readonly, nonatomic) LiKeyPath *faceprintVersionKeyPath; // @synthesize faceprintVersionKeyPath=_faceprintVersionKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (unsigned long long)saveOrder;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;

@end
