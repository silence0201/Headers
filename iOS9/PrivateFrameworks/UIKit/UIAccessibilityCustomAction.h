//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UIAccessibilityCustomAction : NSObject
{
    NSString *_name;
    id _target;
    SEL _selector;
}

@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)init;

@end

