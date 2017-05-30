//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSSubscriptionPredicateFactory : NSObject
{
}

+ (id)_subscriptionPredicateTemplateValues;
+ (id)_subscriptionSourcePredicateTemplateValues;
+ (id)_subscriptionSourceKindPredicateTemplateValues;
- (id)predicateByConvertingSubscriptionKeyPathsInPredicate:(id)arg1 toAttributeKeysInEntity:(id)arg2;
- (id)_expressionByConvertingSubscriptionKeyPathInExpression:(id)arg1 toAttributeKeysInEntity:(id)arg2;
- (id)subscriptionFetchPredicateForTask:(id)arg1 withOptions:(id)arg2;
- (id)allowedSubscriptionsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)allowedSubscriptionsPredicateForTask:(id)arg1;
- (id)allowedSubscriptionSourcesPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)allowedSubscriptionSourceKindsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)_predicateTemplateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)_predicateTemplateForSourceOfTask:(id)arg1;
- (id)_predicateTemplateForAppPredicate:(id)arg1 withTask:(id)arg2;
- (id)_topLevelAccessPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)_predicateTemplateForSourceIdentifier:(id)arg1;
- (id)_predicateTemplateForSourceKind:(long long)arg1;

@end
