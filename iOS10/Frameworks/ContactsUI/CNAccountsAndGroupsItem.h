//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsItem : NSObject
{
    _Bool _selected;
    _Bool _bypassIfUnique;
    _Bool _soloSelect;
    NSString *_name;
    CDUnknownBlockType _nameProvider;
    NSString *_identifier;
    long long _containerType;
    NSArray *_childItems;
    CNAccountsAndGroupsItem *_parentItem;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool soloSelect; // @synthesize soloSelect=_soloSelect;
@property(nonatomic) _Bool bypassIfUnique; // @synthesize bypassIfUnique=_bypassIfUnique;
@property(nonatomic) __weak CNAccountsAndGroupsItem *parentItem; // @synthesize parentItem=_parentItem;
@property(retain, nonatomic) NSArray *childItems; // @synthesize childItems=_childItems;
@property(nonatomic) long long containerType; // @synthesize containerType=_containerType;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) CDUnknownBlockType nameProvider; // @synthesize nameProvider=_nameProvider;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (long long)localizedCompare:(id)arg1;
- (id)arrayForDisplay:(_Bool)arg1;
- (void)_setSelected:(_Bool)arg1;
- (id)initWithType:(long long)arg1 nameProvider:(CDUnknownBlockType)arg2;

@end

