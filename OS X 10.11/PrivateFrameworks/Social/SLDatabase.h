//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;

@interface SLDatabase : NSObject
{
    NSString *_modelPath;
    NSString *_storePath;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
}

- (void).cxx_destruct;
- (void)_removeFilesAtURL:(id)arg1 forStoreCoordinator:(id)arg2;
- (id)_managedObjectModel;
- (id)_persistentStoreCoordinator;
- (void)_setUpManagedObjectContext;
- (BOOL)save:(id *)arg1;
- (id)newObjectForEntityNamed:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)initWithStoreName:(id)arg1 modelPath:(id)arg2;

@end

