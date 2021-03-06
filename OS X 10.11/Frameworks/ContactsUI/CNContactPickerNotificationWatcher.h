//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAddressBook, ABGroupListNotificationHandler, ABPersonListUIReflector, NSMutableArray;

@interface CNContactPickerNotificationWatcher : NSObject
{
    ABGroupListNotificationHandler *_groupListHandler;
    ABPersonListUIReflector *_personListReflector;
    ABAddressBook *_addressBook;
    NSMutableArray *_observers;
}

- (void).cxx_destruct;
- (void)accountConfigurationDidChange:(id)arg1;
- (void)accountRepositoryDidChange:(id)arg1;
- (void)addressBookChangedExternally:(id)arg1;
- (BOOL)isNotificationFromDirectorySearch:(id)arg1;
- (BOOL)shouldProcessNotification:(id)arg1;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)registerForLocalNotifications;
- (void)registerForExternalNotifications;
- (void)dealloc;
- (id)initWithGroupListHandler:(id)arg1 personListReflector:(id)arg2 addressBook:(id)arg3;

@end

