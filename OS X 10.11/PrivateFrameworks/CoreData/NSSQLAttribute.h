//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSSQLColumn.h>

__attribute__((visibility("hidden")))
@interface NSSQLAttribute : NSSQLColumn
{
    BOOL _unique;
    BOOL _constrained;
}

@property(nonatomic, getter=isConstrained) BOOL constrained; // @synthesize constrained=_constrained;
- (BOOL)isUnique;
- (BOOL)shouldIndex;
- (id)attributeDescription;
- (id)initForReadOnlyFetchWithExpression:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (unsigned int)_sqlTypeForAttributeType:(unsigned long long)arg1 flags:(unsigned long long)arg2;

@end

