//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSSQLSelectIntermediate.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate
{
    BOOL _onlyFetchesAggregates;
    NSMutableDictionary *_variableToAliasMappings;
    NSMutableDictionary *_propertyToAliasMappings;
}

- (id)generateSQLStringInContext:(id)arg1;
- (id)resolveVariableExpression:(id)arg1 inContext:(id)arg2;
- (BOOL)onlyFetchesAggregates;
- (void)dealloc;
- (id)initWithScope:(id)arg1;

@end

