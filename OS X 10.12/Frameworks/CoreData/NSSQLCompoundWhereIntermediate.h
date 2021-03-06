//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSSQLWhereIntermediate.h>

@class NSArray, NSMutableArray, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate
{
    NSMutableArray *_subclauses;
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    BOOL _disambiguationKeypathHasToMany;
}

- (BOOL)isOrScoped;
- (id)generateSQLStringInContext:(id)arg1;
- (id)_generateMulticlauseStringInContext:(id)arg1;
- (void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(BOOL)arg3;
- (BOOL)disambiguationKeypathHasToMany;
- (id)disambiguationKeypath;
- (id)disambiguatingEntity;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;

@end

