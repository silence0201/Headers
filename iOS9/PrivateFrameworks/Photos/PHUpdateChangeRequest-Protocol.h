//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHChangeRequest-Protocol.h>

@class NSManagedObject, NSString;

@protocol PHUpdateChangeRequest <PHChangeRequest>
@property(readonly, getter=isMutated) _Bool mutated;
- (_Bool)applyMutationsToManagedObject:(NSManagedObject *)arg1 error:(id *)arg2;
- (_Bool)validateMutationsToManagedObject:(NSManagedObject *)arg1 error:(id *)arg2;
- (_Bool)allowMutationToManagedObject:(NSManagedObject *)arg1 propertyKey:(NSString *)arg2 error:(id *)arg3;
@end

