//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNMutableSaveResponse, CNSaveRequest, NSMapTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CNiOSABSaveContext : NSObject
{
    void *_addressBook;
    CNMutableSaveResponse *_saveResponse;
    NSMapTable *_contactIndicesByInstance;
    NSMapTable *_groupIndicesByInstance;
    NSMapTable *_containerIndicesByInstance;
    NSMutableDictionary *_abPersonsByIdentifier;
    NSMutableDictionary *_abGroupsByIdentifier;
    NSMutableDictionary *_abSourcesByIdentifier;
    NSMutableDictionary *_abAccountsByIdentifier;
    CNSaveRequest *_saveRequest;
}

@property(readonly, nonatomic) CNMutableSaveResponse *saveResponse; // @synthesize saveResponse=_saveResponse;
@property(readonly, nonatomic) CNSaveRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
@property(retain, nonatomic) NSMutableDictionary *abAccountsByIdentifier; // @synthesize abAccountsByIdentifier=_abAccountsByIdentifier;
@property(retain, nonatomic) NSMutableDictionary *abSourcesByIdentifier; // @synthesize abSourcesByIdentifier=_abSourcesByIdentifier;
@property(retain, nonatomic) NSMutableDictionary *abGroupsByIdentifier; // @synthesize abGroupsByIdentifier=_abGroupsByIdentifier;
@property(retain, nonatomic) NSMutableDictionary *abPersonsByIdentifier; // @synthesize abPersonsByIdentifier=_abPersonsByIdentifier;
- (id)indexPathForContainerInstance:(id)arg1;
- (id)indexPathForGroupInstance:(id)arg1;
- (id)indexPathForContactInstance:(id)arg1;
- (void)_populateSaveRequestIndexTables;
- (void)dealloc;
@property(readonly, nonatomic) void *addressBook;
- (id)initWithSaveRequest:(id)arg1 response:(id)arg2 addressBook:(void *)arg3;

@end

