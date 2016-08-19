//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PKPaymentOptionGroupItem : NSObject
{
    _Bool _selectable;
    _Bool _editable;
    _Bool _deletable;
    NSString *_groupType;
    id _referenceObject;
    NSString *_title;
    NSString *_detail;
}

+ (id)_singleLineGroupTypes;
@property(nonatomic, getter=isDeletable) _Bool deletable; // @synthesize deletable=_deletable;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic, getter=isSelectable) _Bool selectable; // @synthesize selectable=_selectable;
@property(readonly, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) id referenceObject; // @synthesize referenceObject=_referenceObject;
@property(readonly, nonatomic) NSString *groupType; // @synthesize groupType=_groupType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToOptionGroupItem:(id)arg1;
@property(readonly, nonatomic) Class tableViewCellClass;
- (void)dealloc;
- (id)initWithReferenceObject:(id)arg1 title:(id)arg2 detail:(id)arg3 groupType:(id)arg4;

@end

