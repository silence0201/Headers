//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/_FBSqlitePreparedSimpleStatement.h>

@class NSString;

@interface _FBSqliteDeferredPreparedSimpleStatement : _FBSqlitePreparedSimpleStatement
{
    NSString *_deferredSql;
}

- (_Bool)executeWithBindings:(id)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(out id *)arg3;
- (void)dealloc;
- (id)initWithDatabaseConnection:(id)arg1 deferredSql:(id)arg2;

@end
