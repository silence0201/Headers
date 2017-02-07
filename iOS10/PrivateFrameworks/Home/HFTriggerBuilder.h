//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemBuilder.h>

@class HFMutableSetDiff, HFTriggerAnonymousActionSetBuilder, HMTrigger, NSArray, NSString;

@interface HFTriggerBuilder : HFItemBuilder
{
    _Bool _enabled;
    NSString *_name;
    HFTriggerAnonymousActionSetBuilder *_anonymousActionSetBuilder;
    NSArray *_conditions;
    HFMutableSetDiff *_actionSetBuilders;
}

+ (_Bool)supportsConditions;
+ (id)triggerBuilderForTrigger:(id)arg1 inHome:(id)arg2;
+ (Class)homeKitRepresentationClass;
@property(retain, nonatomic) HFMutableSetDiff *actionSetBuilders; // @synthesize actionSetBuilders=_actionSetBuilders;
@property(retain, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
@property(retain, nonatomic) HFTriggerAnonymousActionSetBuilder *anonymousActionSetBuilder; // @synthesize anonymousActionSetBuilder=_anonymousActionSetBuilder;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (id)commitEditTrigger;
- (id)commitCreateTrigger;
- (id)_updateConditions;
- (id)_updateName;
- (id)_updateActionSets;
- (id)_updateAnonymousActionSet;
- (id)_updateEnabledState;
- (id)commitItem;
- (id)_performValidation;
@property(readonly, nonatomic) _Bool requiresConfirmationToRun;
- (void)removeCondition:(id)arg1;
- (void)updateCondition:(id)arg1;
- (void)addCondition:(id)arg1;
- (void)removeAllActionsAndActionSets;
- (void)removeAction:(id)arg1;
- (void)updateAction:(id)arg1;
- (void)addAction:(id)arg1;
- (void)removeActionSet:(id)arg1;
- (void)updateActionSet:(id)arg1;
- (void)addActionSet:(id)arg1;
@property(readonly, nonatomic) NSArray *actionSets;
- (void)setTrigger:(id)arg1;
@property(readonly, nonatomic) HMTrigger *trigger;
@property(readonly, nonatomic) _Bool hasActions;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

@end
