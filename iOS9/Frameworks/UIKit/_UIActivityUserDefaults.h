//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface _UIActivityUserDefaults : NSObject
{
    NSString *_identifier;
    NSUserDefaults *_userDefaults;
}

+ (id)updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)arg1 someSortedActivityIdentifiers:(id)arg2;
+ (id)builtinActivityOrder;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)applicationExtensionForActivity:(id)arg1;
- (id)identifierForActivity:(id)arg1;
- (void)postActivityUserDefaultsDidChangeNotification;
- (void)setDefaultsValue:(id)arg1 forKey:(id)arg2 activity:(id)arg3;
- (id)defaultsValueForKey:(id)arg1 activity:(id)arg2;
- (id)mutableActivityIdentifiersArrayForActivitiesArray:(id)arg1;
- (void)setActivityIdentifiersInUserOrder:(id)arg1;
- (id)activityIdentifiersInUserOrder;
- (void)updateUserOrderWithSomeSortedActivities:(id)arg1;
- (id)activitiesSortedByUserOrderForActivities:(id)arg1;
- (id)migrateSortOrderIfNeededForBuiltInActivityType:(id)arg1 activityIdentifierOrder:(id)arg2;
- (id)activitiesSortedByActivityIdentifierOrder:(id)arg1 forActivities:(id)arg2;
- (void)setActivity:(id)arg1 asHidden:(_Bool)arg2;
- (_Bool)activityIsHidden:(id)arg1;
- (_Bool)canHideActivity:(id)arg1;
- (id)initWithIdentifier:(id)arg1 userDefaults:(id)arg2;
- (id)init;

@end

