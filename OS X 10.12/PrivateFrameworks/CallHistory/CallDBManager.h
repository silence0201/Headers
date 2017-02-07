//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBManager;

@interface CallDBManager : NSObject
{
    BOOL _deviceUnlocked;
    unsigned char _dataStoreType;
    unsigned char _notifyDataStoreChangeReason;
    DBManager *_dbManager;
    id _deviceUnlockNotificationRef;
}

+ (id)getDBLocationIsSandboxed:(BOOL)arg1 isTemporary:(BOOL)arg2 error:(unsigned char *)arg3;
+ (id)dataStoreName;
+ (id)modelURL;
@property(retain) id deviceUnlockNotificationRef; // @synthesize deviceUnlockNotificationRef=_deviceUnlockNotificationRef;
@property unsigned char notifyDataStoreChangeReason; // @synthesize notifyDataStoreChangeReason=_notifyDataStoreChangeReason;
@property unsigned char dataStoreType; // @synthesize dataStoreType=_dataStoreType;
@property BOOL deviceUnlocked; // @synthesize deviceUnlocked=_deviceUnlocked;
@property(retain) DBManager *dbManager; // @synthesize dbManager=_dbManager;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleTemporaryCreated;
- (void)handlePermanentCreated;
- (id)createManagedObjectContext;
- (BOOL)notifyDataStoreChanged;
- (void)moveCallsFromTempDatabase;
- (id)permDBLocation:(unsigned char *)arg1;
- (id)tempDBLocation:(unsigned char *)arg1;
- (void)createTemporary;
- (BOOL)shouldCreateTemporary;
- (void)createPermanent;
- (BOOL)shouldCreatePermanent;
- (void)registerForNotifications;
- (void)createDataStore;
- (void)reFetchState;
- (id)init;

@end
