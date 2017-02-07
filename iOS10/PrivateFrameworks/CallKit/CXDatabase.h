//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface CXDatabase : NSObject
{
    NSURL *_url;
    struct sqlite3 *_database;
    NSMutableDictionary *_sqlQueryToStatements;
}

@property(retain, nonatomic) NSMutableDictionary *sqlQueryToStatements; // @synthesize sqlQueryToStatements=_sqlQueryToStatements;
@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)performTransactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 transient:(_Bool)arg4 resultRowHandler:(CDUnknownBlockType)arg5 error:(id *)arg6;
- (_Bool)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 resultRowHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (_Bool)executeSQL:(id)arg1 withStatementPreparationBlock:(CDUnknownBlockType)arg2 transient:(_Bool)arg3 error:(id *)arg4;
- (_Bool)executeSQL:(id)arg1 withStatementPreparationBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)executeSQL:(id)arg1 withBindings:(id)arg2 transient:(_Bool)arg3 error:(id *)arg4;
- (_Bool)executeSQL:(id)arg1 withBindings:(id)arg2 error:(id *)arg3;
- (id)_statementForSQL:(id)arg1 transient:(_Bool)arg2 error:(id *)arg3;
- (_Bool)executeSQL:(id)arg1 error:(id *)arg2;
- (_Bool)rollbackTransactionWithError:(id *)arg1;
- (_Bool)commitTransactionWithError:(id *)arg1;
- (_Bool)beginTransactionWithError:(id *)arg1;
@property(readonly, nonatomic) long long lastInsertedRowID;
- (_Bool)setBusyTimeout:(double)arg1 error:(id *)arg2;
- (_Bool)vacuumWithError:(id *)arg1;
- (_Bool)enableForeignKeysWithError:(id *)arg1;
- (_Bool)closeWithError:(id *)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1 readOnly:(_Bool)arg2 error:(id *)arg3;

@end

