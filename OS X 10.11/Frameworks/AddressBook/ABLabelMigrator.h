//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStore;

__attribute__((visibility("hidden")))
@interface ABLabelMigrator : NSObject
{
    NSManagedObjectContext *_moc;
    NSPersistentStore *_store;
}

- (void)updateLabelsForEntityNamed:(id)arg1 fromLabel:(id)arg2 toLabel:(id)arg3;
- (void)migrateLabels;
- (void)dealloc;
- (id)initWithStore:(id)arg1;

@end
