//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, PLManagedObjectContext;

@protocol PLManagedObjectContextPTPNotificationDelegate <NSObject>
- (void)managedObjectContext:(PLManagedObjectContext *)arg1 libraryChangedWithInsertedAssetIDs:(NSArray *)arg2 deletedAssetIDs:(NSArray *)arg3 changedAssetIDs:(NSArray *)arg4;
@end

