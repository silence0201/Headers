//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _HKCFGReplacementRule : NSObject
{
    NSString *_description;
    NSArray *_rightHandSide;
    CDUnknownBlockType _nodeEvaluator;
    unsigned long long _lengthIncrease;
}

+ (id)ruleWithLHS:(id)arg1 RHS:(id)arg2 nodeEvaluator:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned long long lengthIncrease; // @synthesize lengthIncrease=_lengthIncrease;
@property(readonly, copy, nonatomic) CDUnknownBlockType nodeEvaluator; // @synthesize nodeEvaluator=_nodeEvaluator;
@property(readonly, copy, nonatomic) NSArray *rightHandSide; // @synthesize rightHandSide=_rightHandSide;
- (void).cxx_destruct;
- (id)description;

@end

