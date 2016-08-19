//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, PKPaymentOptionsRecents;

@interface PKPaymentOptionsModel : NSObject
{
    NSMutableArray *_optionGroups;
    NSMutableDictionary *_optionGroupMap;
    PKPaymentOptionsRecents *_recents;
    CDUnknownBlockType _modelChangedHandler;
}

+ (id)_detailForReferenceObject:(id)arg1 withGroupType:(id)arg2;
+ (id)_titleForReferenceObject:(id)arg1 withGroupType:(id)arg2;
+ (id)_contactKeyForGroupType:(id)arg1;
+ (int)_propertyIDForGroupType:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType modelChangedHandler; // @synthesize modelChangedHandler=_modelChangedHandler;
@property(readonly, nonatomic) NSArray *optionGroups; // @synthesize optionGroups=_optionGroups;
- (id)optionGroupForGroupType:(id)arg1;
- (void)_fetchItemsFromCoreRecentsWithProperty:(id)arg1 forOptionGroup:(id)arg2 afterItem:(id)arg3;
- (void)_addMeCardEntriesForProperty:(id)arg1 toCoreRecentAndOptionsGroup:(id)arg2 afterItem:(id)arg3;
- (void)_mergeInCoreRecentsResults:(id)arg1 withProperty:(id)arg2 forOptionGroup:(id)arg3 afterItem:(id)arg4;
- (void)addPeoplePickedLabeledValue:(id)arg1 contact:(id)arg2 property:(id)arg3 toOptionsGroup:(id)arg4;
- (void)setShippingMethods:(id)arg1 currencyCode:(id)arg2 selectedIndex:(long long)arg3 displayMode:(id)arg4 selectedValueChangedHandler:(CDUnknownBlockType)arg5;
- (void)setUnavailablePaymentPasses:(id)arg1 displayName:(id)arg2 reasonHandler:(CDUnknownBlockType)arg3;
- (void)setSelectedPaymentPassIndex:(long long)arg1;
- (id)paymentPasses;
- (void)setPaymentPasses:(id)arg1 selectedIndex:(long long)arg2 selectedValueChangedHandler:(CDUnknownBlockType)arg3;
- (void)setOptionGroupType:(id)arg1 options:(id)arg2 selectedIndex:(long long)arg3 displayMode:(id)arg4 displayName:(id)arg5 editable:(_Bool)arg6 newItemHandler:(CDUnknownBlockType)arg7 pickedItemHandler:(CDUnknownBlockType)arg8 selectedValueChangedHandler:(CDUnknownBlockType)arg9;
- (void)dealloc;
- (id)init;

@end

