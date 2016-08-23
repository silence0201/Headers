//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSString;

@interface ABPeoplePickerView : NSView
{
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    id _reserved5;
    SEL _reserved6;
    SEL _reserved7;
    id _reserved8;
    id _reserved9;
    id _reserved10;
}

+ (Class)_controllerClass;
- (id)_uiController;
- (void)_postSearchUpdateNotifications;
- (void)_setValueColumnWidthPercentage:(double)arg1;
- (void)decodeColumns:(id)arg1;
- (void)removeAllProperties;
- (void)_loadPickerUI;
- (void)_placeAccessoryView;
- (void)setIsDistributionListEditor:(BOOL)arg1;
- (void)setShowIdentityGroups:(BOOL)arg1;
- (void)setShowIdentityBadges:(BOOL)arg1;
- (void)setAllowsGroupEditing:(BOOL)arg1;
- (double)_valueColumnWidthPercentage;
- (BOOL)isDistributionListEditor;
- (BOOL)allowsGroupEditing;
- (BOOL)inDistributionListEditor;
- (void)setInDistributionListEditor:(BOOL)arg1;
- (BOOL)allowsDirectoriesSearches;
- (void)setAllowsDirectoriesSearches:(BOOL)arg1;
- (void)addFilter:(id)arg1 title:(id)arg2 identifier:(id)arg3;
- (id)_searchField;
- (void)setHasTableBorder:(BOOL)arg1;
- (BOOL)hasTableBorder;
- (void)setTypes:(id)arg1 forProperty:(id)arg2;
- (void)setColumnTitle:(id)arg1 forProperty:(id)arg2;
- (void)addProperty:(id)arg1;
- (void)selectIdentifier:(id)arg1 forPerson:(id)arg2 byExtendingSelection:(BOOL)arg3;
- (void)clearSearchField:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)deselectIdentifier:(id)arg1 forPerson:(id)arg2;
- (void)deselectRecord:(id)arg1;
- (void)deselectGroup:(id)arg1;
- (void)selectRecord:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)selectGroup:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)removeProperty:(id)arg1;
- (id)properties;
- (id)selectedIdentifiersForPerson:(id)arg1;
- (id)columnTitleForProperty:(id)arg1;
@property(nonatomic) SEL nameDoubleAction;
@property(nonatomic) SEL groupDoubleAction;
@property(nonatomic) id target;
@property(retain, nonatomic) NSString *autosaveName;
@property(retain, nonatomic) NSString *displayedProperty;
@property(nonatomic) BOOL allowsMultipleSelection;
@property(nonatomic) BOOL allowsGroupSelection;
@property(nonatomic) int valueSelectionBehavior;
@property(retain, nonatomic) NSView *accessoryView;
@property(readonly) NSArray *selectedRecords;
@property(readonly) NSArray *selectedGroups;
- (void)_openSelectionInAddressBook:(BOOL)arg1;
- (void)printDescription:(id)arg1;
- (id)controller;
- (void)_commonInit;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)selectInAddressBook:(id)arg1;
- (void)editInAddressBook:(id)arg1;
- (id)selectedValues;

@end
