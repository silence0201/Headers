//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pasteboard/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString, NSURL, NSUUID;
@protocol NSObject;

@interface PBItem : NSObject <NSSecureCoding>
{
    _Bool _itemQueue_shouldCacheData;
    _Bool _itemQueue_isStoredOnServer;
    NSUUID *_UUID;
    NSData *_itemQueue_primaryData;
    NSURL *_itemQueue_primaryFileURL;
    NSString *_itemQueue_primaryFileTypeIdentifier;
    NSMutableDictionary *_itemQueue_cachedDataByType;
    NSArray *_itemQueue_overriddenAvailableTypes;
    NSDictionary *_itemQueue_privateMetadata;
    NSMutableDictionary *_itemQueue_loaderByType;
    id _itemQueue_localUserInfo;
    id <NSObject> _itemQueue_localObject;
    NSDictionary *_itemQueue_metadata;
    NSMutableOrderedSet *_itemQueue_loaderTypeOrder;
}

+ (id)allowedClassesForSecureCoding;
+ (_Bool)supportsSecureCoding;
+ (id)itemWithContentsOfFileURL:(id)arg1 type:(id)arg2 outError:(id *)arg3;
+ (id)itemWithData:(id)arg1 type:(id)arg2;
+ (id)itemWithObject:(id)arg1;
+ (id)item;
@property(nonatomic) _Bool itemQueue_isStoredOnServer; // @synthesize itemQueue_isStoredOnServer=_itemQueue_isStoredOnServer;
@property(retain, nonatomic) NSMutableOrderedSet *itemQueue_loaderTypeOrder; // @synthesize itemQueue_loaderTypeOrder=_itemQueue_loaderTypeOrder;
@property(copy, nonatomic) NSDictionary *itemQueue_metadata; // @synthesize itemQueue_metadata=_itemQueue_metadata;
@property(retain, nonatomic) id <NSObject> itemQueue_localObject; // @synthesize itemQueue_localObject=_itemQueue_localObject;
@property(retain, nonatomic) id itemQueue_localUserInfo; // @synthesize itemQueue_localUserInfo=_itemQueue_localUserInfo;
@property(retain, nonatomic) NSMutableDictionary *itemQueue_loaderByType; // @synthesize itemQueue_loaderByType=_itemQueue_loaderByType;
@property(nonatomic) _Bool itemQueue_shouldCacheData; // @synthesize itemQueue_shouldCacheData=_itemQueue_shouldCacheData;
@property(retain, nonatomic) NSDictionary *itemQueue_privateMetadata; // @synthesize itemQueue_privateMetadata=_itemQueue_privateMetadata;
@property(copy, nonatomic) NSArray *itemQueue_overriddenAvailableTypes; // @synthesize itemQueue_overriddenAvailableTypes=_itemQueue_overriddenAvailableTypes;
@property(retain, nonatomic) NSMutableDictionary *itemQueue_cachedDataByType; // @synthesize itemQueue_cachedDataByType=_itemQueue_cachedDataByType;
@property(retain, nonatomic) NSString *itemQueue_primaryFileTypeIdentifier; // @synthesize itemQueue_primaryFileTypeIdentifier=_itemQueue_primaryFileTypeIdentifier;
@property(retain, nonatomic) NSURL *itemQueue_primaryFileURL; // @synthesize itemQueue_primaryFileURL=_itemQueue_primaryFileURL;
@property(retain, nonatomic) NSData *itemQueue_primaryData; // @synthesize itemQueue_primaryData=_itemQueue_primaryData;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadObjectOfClass:(Class)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadRepresentationAsType:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_invokeLoaderBlock:(CDUnknownBlockType)arg1 type:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_loaderBlockForRepresentationAsType:(id)arg1;
- (CDUnknownBlockType)itemQueue_loaderBlockForRepresentationAsType:(id)arg1;
@property(copy, nonatomic) NSArray *itemQueue_availableTypes;
- (_Bool)canInstantiateObjectOfClass:(Class)arg1;
- (_Bool)itemQueue_canInstantiateObjectOfClass:(Class)arg1;
- (_Bool)hasRepresentationConformingToType:(id)arg1;
- (_Bool)itemQueue_hasRepresentationConformingToType:(id)arg1;
- (_Bool)hasRepresentationOfType:(id)arg1;
- (_Bool)itemQueue_hasRepresentationOfType:(id)arg1;
- (void)setLoaderBlock:(CDUnknownBlockType)arg1 forType:(id)arg2;
- (void)itemQueue_setLoaderBlock:(CDUnknownBlockType)arg1 forType:(id)arg2;
- (void)addRepresentationType:(id)arg1 loaderBlock:(CDUnknownBlockType)arg2;
- (void)itemQueue_addRepresentationType:(id)arg1 protectAgainstLargeDataSizes:(_Bool)arg2 loaderBlock:(CDUnknownBlockType)arg3;
- (id)initWithContentsOfFileURL:(id)arg1 type:(id)arg2 outError:(id *)arg3;
- (id)initWithData:(id)arg1 type:(id)arg2;
- (id)initWithObject:(id)arg1;
- (void)_commonInitGenerateUUID:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (void)setShouldCacheData:(_Bool)arg1;
- (_Bool)shouldCacheData;
- (void)setPrivateMetadata:(id)arg1;
- (id)privateMetadata;
@property(copy, nonatomic) NSArray *availableTypes; // @dynamic availableTypes;
@property(copy, nonatomic) NSDictionary *metadata; // @dynamic metadata;
- (void)setLocalObject:(id)arg1;
- (id)localObject;
@property(retain, nonatomic) id localUserInfo; // @dynamic localUserInfo;

@end
