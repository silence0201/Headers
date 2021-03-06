//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKObjectRelation.h>

@class EKObject;

__attribute__((visibility("hidden")))
@interface EKObjectToOneRelation : EKObjectRelation
{
    EKObject *_weakRelatedObject;
    EKObject *_strongRelatedObject;
    _Bool _weak;
}

- (void).cxx_destruct;
- (id)description;
- (void)_setWeakRelatedObjectTo:(id)arg1 andStrongRelatedObjectTo:(id)arg2;
- (_Bool)validate:(id *)arg1;
- (void)didCommit;
- (void)refresh;
- (void)rollback;
- (void)_unload;
- (void)reset;
- (void)updatePersistentObject;
- (id)committedValue;
- (id)relatedObject;
- (void)_setRelatedObject:(id)arg1 setInverse:(_Bool)arg2 dirty:(_Bool)arg3;
- (void)_removeRelatedObject:(id)arg1 setInverse:(_Bool)arg2 dirty:(_Bool)arg3;
- (void)_addRelatedObject:(id)arg1 setInverse:(_Bool)arg2 dirty:(_Bool)arg3;
- (void)setRelatedObject:(id)arg1;
- (void)_clear;
- (_Bool)isWeak;
- (void)dealloc;
- (id)initWithObject:(id)arg1 relationName:(id)arg2 inverseRelationName:(id)arg3 weak:(_Bool)arg4;

@end

