//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ABRecordConstraint : NSObject
{
    Class mConstraintClass;
    NSArray *mValidProperties;
}

@property Class mConstraintClass; // @synthesize mConstraintClass;
- (id)genericRepresentationOfLabel:(id)arg1 forProperty:(id)arg2;
- (id)initialProperties;
- (id)initialLabelsForProperty:(id)arg1;
- (id)availableLabelsForProperty:(id)arg1 contact:(id)arg2 delegate:(id)arg3;
- (id)availableLabelsForProperty:(id)arg1 person:(id)arg2 delegate:(id)arg3;
- (id)validLabelsForProperty:(id)arg1;
- (id)availablePropertiesForContact:(id)arg1 delegate:(id)arg2;
- (id)availablePropertiesForPerson:(id)arg1 delegate:(id)arg2;
- (BOOL)isReadOnlyRecord:(id)arg1;
- (id)validProperties;
- (BOOL)isValidProperty:(id)arg1;
- (void)dealloc;
- (id)initWithRecordClass:(Class)arg1;

@end
