//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CRRecentContactsLibrary;

@interface PKPaymentOptionsRecents : NSObject
{
    void *_abRef;
    CRRecentContactsLibrary *_coreRecentsLibrary;
}

+ (id)_coreRecentsKindForProperty:(id)arg1;
+ (id)defaultInstance;
- (void)_coreRecentsContactsForProperty:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)meCard;
- (_Bool)_addressIsInChina:(id)arg1;
- (void)meCardEntriesForProperty:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)meCardEntriesForProperty:(id)arg1;
- (id)_contactFromRecent:(id)arg1 property:(id)arg2;
- (void)deleteRecent:(id)arg1 forProperty:(id)arg2;
- (void)deleteRecentsForProperty:(id)arg1;
- (void)recentsForProperty:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)recentsForProperty:(id)arg1;
- (id)saveItemToCoreRecents:(id)arg1 contact:(id)arg2 property:(id)arg3;
- (void)dealloc;
- (id)init;

@end

