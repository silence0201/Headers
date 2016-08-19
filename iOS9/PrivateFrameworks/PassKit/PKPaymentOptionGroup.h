//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PKPaymentOptionGroup : NSObject
{
    _Bool _editable;
    NSArray *_items;
    NSString *_groupType;
    NSString *_groupDisplayName;
    NSString *_readOnlyDisplayName;
    NSString *_groupDisplayMode;
    long long _indexForSelectedItem;
    CDUnknownBlockType _selectionChangedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType selectionChangedHandler; // @synthesize selectionChangedHandler=_selectionChangedHandler;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) long long indexForSelectedItem; // @synthesize indexForSelectedItem=_indexForSelectedItem;
@property(copy, nonatomic) NSString *groupDisplayMode; // @synthesize groupDisplayMode=_groupDisplayMode;
@property(copy, nonatomic) NSString *readOnlyDisplayName; // @synthesize readOnlyDisplayName=_readOnlyDisplayName;
@property(copy, nonatomic) NSString *groupDisplayName; // @synthesize groupDisplayName=_groupDisplayName;
@property(copy, nonatomic) NSString *groupType; // @synthesize groupType=_groupType;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSString *abTitleDisplayName;
@property(readonly, nonatomic) NSString *addNewDisplayName;
@property(readonly, nonatomic) NSString *addExistingDisplayName;
- (void)removeGroupItem:(id)arg1;
- (void)prependGroupItems:(id)arg1 afterItem:(id)arg2;
- (void)prependGroupItem:(id)arg1 promoteAndCoalesceDupes:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

