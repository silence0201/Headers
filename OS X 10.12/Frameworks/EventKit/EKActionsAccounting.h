//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface EKActionsAccounting : NSObject
{
    NSMutableDictionary *_actions;
}

+ (id)sharedAccounting;
@property(retain, nonatomic) NSMutableDictionary *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (long long)resultForAction:(id)arg1;
- (void)reset;
- (void)recordResult:(long long)arg1 forAction:(id)arg2;
- (id)init;

@end
