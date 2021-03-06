//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiObject.h>

#import <PhotoLibraryPrivate/LiEncoding-Protocol.h>

@class LiStringAtomCache, LiStringAtomCoder, NSMutableArray, NSMutableSet, NSString;

@interface LiSqliteBuffer : LiObject <LiEncoding>
{
    _Bool _segmentsFromXPC;
    BOOL _protected;
    NSMutableArray *_columnPropertyTypes;
    struct vector<Li::Sqlite::BufferSegment *, std::__1::allocator<Li::Sqlite::BufferSegment *>> _bufferSegments;
    unsigned long long _rowCount;
    unsigned long long _columnCount;
    struct BufferSegment *_currentSegment;
    struct BufferSegment *_firstSegment;
    LiStringAtomCache *_stringAtomCache;
    NSMutableSet *_atomIds;
    NSMutableArray *_retainedObjects;
    BOOL _complete;
    unsigned long long _modelIdIndex;
    LiStringAtomCoder *_stringAtomCoder;
    unsigned long long _optimisticLockIndex;
}

+ (void)decodeAtomsWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
+ (unsigned char)encodingObjectType;
+ (void)cleanup;
+ (unsigned long long)maxDataSize;
+ (void)initialize;
@property(readonly, nonatomic) unsigned long long optimisticLockIndex; // @synthesize optimisticLockIndex=_optimisticLockIndex;
@property(retain, nonatomic) LiStringAtomCoder *stringAtomCoder; // @synthesize stringAtomCoder=_stringAtomCoder;
@property(nonatomic) BOOL complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) unsigned long long modelIdIndex; // @synthesize modelIdIndex=_modelIdIndex;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)vmData;
- (id)initWithVMData:(id)arg1 stringAtomCoder:(id)arg2 stringAtomCache:(id)arg3;
- (void)encodeAtomsWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (void)remapToServiceWithStringAtomCoder:(id)arg1;
- (BOOL)remapFromServiceWithStringAtomCoder:(id)arg1;
- (id)stringAtomColumnIndexSet;
- (void)encodeWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
- (unsigned long long)encodedSize;
- (id)getDataForRow:(unsigned long long)arg1 forColumn:(unsigned long long)arg2 withSegment:(struct BufferSegment *)arg3;
- (const char *)getBytesForRow:(unsigned long long)arg1 forColumn:(unsigned long long)arg2 length:(unsigned long long *)arg3 isNull:(char *)arg4 withSegment:(struct BufferSegment *)arg5 dataSegment:(struct BufferSegment **)arg6;
- (id)getStringForRow:(unsigned long long)arg1 forColumn:(unsigned long long)arg2 withSegment:(struct BufferSegment *)arg3 stringMapper:(Class)arg4;
- (id)objectForRow:(unsigned long long)arg1 forColumn:(unsigned long long)arg2 segment:(struct BufferSegment *)arg3 forType:(unsigned char)arg4 stringAtomCache:(id)arg5 stringMapper:(Class)arg6;
- (long long)optimisticLockForRow:(unsigned long long)arg1;
- (long long)rowForModelId:(unsigned long long)arg1;
- (long long)modelIdForRow:(unsigned long long)arg1;
- (const char *)getBytesForRow:(unsigned long long)arg1 forColumn:(unsigned long long)arg2 length:(unsigned long long *)arg3 isNull:(char *)arg4;
- (id)getDataForRow:(unsigned long long)arg1 forColumn:(unsigned long long)arg2;
- (id)getStringForRow:(unsigned long long)arg1 forColumn:(unsigned long long)arg2;
- (const char *)getCharsForRow:(unsigned long long)arg1 forColumn:(unsigned long long)arg2 length:(unsigned long long *)arg3;
- (double)getDoubleForRow:(unsigned long long)arg1 forColumn:(unsigned long long)arg2 isNull:(char *)arg3;
- (long long)getIntegerForRow:(unsigned long long)arg1 forColumn:(unsigned long long)arg2 isNull:(char *)arg3;
- (id)objectForRow:(unsigned long long)arg1 forColumn:(unsigned long long)arg2 stringMapper:(Class)arg3;
- (BOOL)isNullForRow:(unsigned long long)arg1 forColumn:(unsigned long long)arg2;
- (void)setOptimisticLock:(long long)arg1 forRow:(unsigned long long)arg2;
- (void)setModelId:(long long)arg1 forRow:(unsigned long long)arg2;
- (void)setData:(id)arg1 forRow:(long long)arg2 forColumn:(long long)arg3;
- (void)setString:(id)arg1 forRow:(long long)arg2 forColumn:(long long)arg3;
- (void)setChars:(const char *)arg1 forRow:(long long)arg2 forColumn:(long long)arg3;
- (char *)reserveBytesOfLength:(unsigned long long)arg1 forRow:(long long)arg2 forColumn:(long long)arg3;
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 forRow:(long long)arg3 forColumn:(long long)arg4;
- (void)setAtomId:(long long)arg1 forRow:(long long)arg2 forColumn:(long long)arg3;
- (void)setDouble:(double)arg1 forRow:(long long)arg2 forColumn:(long long)arg3;
- (void)setInteger:(long long)arg1 forRow:(long long)arg2 forColumn:(long long)arg3;
- (void)setObject:(id)arg1 forRow:(long long)arg2 forColumn:(long long)arg3;
- (void)setNullForRow:(long long)arg1 forColumn:(long long)arg2;
- (BOOL)moveCurrentSegmentToRow:(unsigned long long)arg1;
- (id)stringAtomFromId:(long long)arg1 withCache:(id)arg2;
- (const char *)storeString:(const char *)arg1;
- (void)retainObject:(id)arg1;
- (struct BufferSegment *)lastSegment;
- (struct BufferSegment *)addSegment;
- (BOOL)columnHasNoteStorage:(unsigned long long)arg1;
- (unsigned char)propertyTypeForColumn:(unsigned long long)arg1;
- (long long)addRow;
- (unsigned long long)columnCount;
- (unsigned long long)rowCount;
- (BOOL)isEmpty;
- (id)describeRow:(unsigned long long)arg1 column:(unsigned long long)arg2 propertyType:(unsigned char)arg3;
@property(readonly, copy) NSString *description;
- (BOOL)isEqualToSqliteBuffer:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)updateTrailingDataSegmentRowCounts;
- (BOOL)setupForWriting;
- (void)addAnonymousColumn:(unsigned char)arg1;
- (void)addPropertyDef:(id)arg1;
- (void)setPropertyDefs:(id)arg1;
- (void)resetComplete;
- (void)dealloc;
- (id)initWithSqliteBuffer:(id)arg1;
- (id)initWithPropertyDefs:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

