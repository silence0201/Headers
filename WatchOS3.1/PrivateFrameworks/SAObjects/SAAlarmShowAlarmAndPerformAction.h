//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@protocol SAAlarmAlarmAction;

@interface SAAlarmShowAlarmAndPerformAction : SAUISnippet
{
}

+ (id)showAlarmAndPerformActionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showAlarmAndPerformAction;
@property(retain, nonatomic) id <SAAlarmAlarmAction> alarmAction;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
