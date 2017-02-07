//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface _PASSqliteDatabase : NSObject
{
    struct sqlite3 *_db;
    int _transactionDepth;
    BOOL _transactionRolledback;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _isClosed
    NSString *_filename;
    NSCache *_queryCache;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSOperationQueue *_operationQueue;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_threadInQueue;
    BOOL _currentExclusivity;
    BOOL _isInMemory;
}

+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 nscoding:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 nsdata:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 nsstring:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 double:(double)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 int64:(long long)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 int:(int)arg3;
+ (int)bindParamToNull:(struct sqlite3_stmt *)arg1 name:(const char *)arg2;
+ (BOOL)shouldCacheSql:(const char *)arg1;
+ (void)truncateDatabaseAtPath:(id)arg1;
+ (id)corruptionMarkerPathForPath:(id)arg1;
+ (id)corruptionMarkerFilename;
+ (id)randomlyNamedInMemoryPathWithBaseName:(id)arg1;
+ (id)inMemoryPath;
+ (BOOL)isInMemoryPath:(id)arg1;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id *)arg2;
+ (id)protectedDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
+ (id)sqliteDatabaseInMemoryWithError:(id *)arg1;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id *)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
@property(readonly, nonatomic) BOOL isInMemory; // @synthesize isInMemory=_isInMemory;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (id)languageForFTSTable:(id)arg1;
- (unsigned long long)numberOfRowsInTable:(id)arg1;
- (BOOL)hasIndexNamed:(id)arg1;
- (BOOL)hasColumnOnTable:(id)arg1 named:(id)arg2;
- (id)tablesWithColumnNamed:(id)arg1;
- (BOOL)hasTableNamed:(id)arg1;
- (BOOL)setUserVersion:(unsigned long long)arg1;
- (unsigned long long)userVersion;
- (BOOL)createSnapshot:(id)arg1;
- (id)description;
- (BOOL)_transactionWithExclusivity:(BOOL)arg1 transaction:(CDUnknownBlockType)arg2;
- (void)_txnEnd;
- (void)_txnRollback;
- (void)_txnBeginExclusive;
- (void)_txnBegin;
- (BOOL)frailReadTransaction:(CDUnknownBlockType)arg1;
- (void)readTransaction:(CDUnknownBlockType)arg1;
- (BOOL)frailWriteTransaction:(CDUnknownBlockType)arg1;
- (void)writeTransaction:(CDUnknownBlockType)arg1;
- (void)clearCaches;
- (id)selectColumns:(id)arg1 fromTable:(id)arg2 whereClause:(id)arg3 onPrep:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (void)insertOrReplaceIntoTable:(id)arg1 dictionary:(id)arg2 onError:(CDUnknownBlockType)arg3;
- (void)updateTable:(id)arg1 dictionary:(id)arg2 whereClause:(id)arg3 onError:(CDUnknownBlockType)arg4;
- (BOOL)prepAndRunNonDataQueries:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (void)_prepAndRunQuery:(id)arg1 columns:(id)arg2 dictionary:(id)arg3 onError:(CDUnknownBlockType)arg4;
- (BOOL)prepAndRunQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onRow:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (void)prepQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (BOOL)runQuery:(struct sqlite3_stmt *)arg1 onRow:(CDUnknownBlockType)arg2;
- (BOOL)runQuery:(struct sqlite3_stmt *)arg1 onRow:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)dbErrorWithCode:(unsigned long long)arg1 sqliteReturnValue:(int)arg2 lastErrno:(int)arg3 query:(id)arg4;
- (id)freeSpace;
@property(readonly, nonatomic) struct sqlite3 *handle;
- (void)placeCorruptionMarker;
- (id)corruptionMarkerPath;
- (long long)lastInsertRowId;
- (void)simulateOnDiskDatabase;
- (void)closePermanently;
- (void)dealloc;
- (void)withDbLockNonblocking:(CDUnknownBlockType)arg1;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;

@end
