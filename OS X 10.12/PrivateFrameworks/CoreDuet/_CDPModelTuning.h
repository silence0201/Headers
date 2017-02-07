//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, _CDPModelTuningState, _CDPSimpleModel;

@interface _CDPModelTuning : NSObject
{
    _CDPModelTuningState *_currentState;
    int _numberOfGridTests;
    CDUnknownBlockType _scorer;
    CDUnknownBlockType _heartBeat;
    _CDPSimpleModel *_model;
    NSIndexSet *_testIndices;
}

+ (void)_addArray:(float *)arg1 size:(unsigned long long)arg2 inArray:(float *)arg3;
+ (void)_cumulativeSumOfArray:(float *)arg1 size:(unsigned long long)arg2 reverse:(_Bool)arg3;
+ (unsigned int *)_newSetDifference:(unsigned int *)arg1 setLength:(unsigned long long)arg2 subset:(unsigned int *)arg3 subsetLength:(unsigned long long)arg4;
+ (void)_enumerateSubsetsOfSet:(unsigned int *)arg1 setLength:(unsigned long long)arg2 withSize:(unsigned long long)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)_enumerateSubsetsOfSet:(unsigned int *)arg1 setLength:(unsigned long long)arg2 index:(unsigned long long)arg3 subset:(unsigned int *)arg4 subsetLength:(unsigned long long)arg5 index:(unsigned long long)arg6 callback:(CDUnknownBlockType)arg7;
+ (CDUnknownBlockType)fScoreWithBeta:(float)arg1;
+ (CDUnknownBlockType)f2Score;
+ (CDUnknownBlockType)f1Score;
@property(readonly, nonatomic) int numberOfGridTests; // @synthesize numberOfGridTests=_numberOfGridTests;
@property(retain, nonatomic) NSIndexSet *testIndices; // @synthesize testIndices=_testIndices;
@property(retain, nonatomic) _CDPSimpleModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType heartBeat; // @synthesize heartBeat=_heartBeat;
@property(copy, nonatomic) CDUnknownBlockType scorer; // @synthesize scorer=_scorer;
@property(readonly, nonatomic) _CDPModelTuningState *currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (float)_testModelWithThreshold:(float *)arg1;
- (void)resumeTuningWithState:(id)arg1;

@end
