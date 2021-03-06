//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMGroup, NSArray, NSCountedSet, NSData, NSMutableArray;

@interface AMLibrary : NSObject
{
    NSArray *_actionsLibrary;
    NSArray *_variablesLibrary;
    NSData *_defaultDescription;
    NSData *_defaultVariablesDescription;
    NSMutableArray *_mostRelevantActions;
    AMGroup *_applicationsGroup;
    AMGroup *_categoriesGroup;
    unsigned long long _organizationStyle;
    NSCountedSet *_observedGroups;
}

+ (id)sharedLibrary;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (id)actionsForApplication:(id)arg1;
- (void)organizeActions:(id)arg1 byKey:(id)arg2 inGroup:(id)arg3;
- (void)organizeAction:(id)arg1 byKey:(id)arg2 inGroup:(id)arg3;
- (void)setCategoriesGroup:(id)arg1;
- (id)categoriesGroup;
- (void)setApplicationsGroup:(id)arg1;
- (id)applicationsGroup;
- (id)actions;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)applicationWillTerminate:(id)arg1;
- (void)writeGroupsForContext:(void *)arg1;
- (void)registryDidAddAction:(id)arg1;
- (void)setDatesForNewActionsInPath:(id)arg1;
- (id)createVariableGroups;
- (id)createActionGroups;
- (id)createVariablesLibrary;
- (id)createActionsLibrary;
- (void)setOrganizationStyle:(unsigned long long)arg1;
- (unsigned long long)organizationStyle;
- (void)setVariablesLibrary:(id)arg1;
- (void)setActionsLibrary:(id)arg1;
- (id)mostRelevantActions;
- (id)variablesLibrary;
- (id)actionsLibrary;
- (void)removeAction:(id)arg1;
- (void)dealloc;
- (id)init;

@end

