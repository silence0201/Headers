//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSMutableSet, _HKCFGNonTerminal;

@interface _HKContextFreeGrammar : NSObject
{
    NSMutableSet *_nonTerminals;
    NSMutableSet *_terminals;
    NSCharacterSet *_terminalCharacters;
    _HKCFGNonTerminal *_rootNonTerminal;
    CDUnknownBlockType _emptyStringEvaluator;
}

+ (id)grammarWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(CDUnknownBlockType)arg2;
+ (id)grammarWithRootNonTerminal:(id)arg1;
@property(readonly, nonatomic) CDUnknownBlockType emptyStringEvaluator; // @synthesize emptyStringEvaluator=_emptyStringEvaluator;
@property(readonly, nonatomic) _HKCFGNonTerminal *rootNonTerminal; // @synthesize rootNonTerminal=_rootNonTerminal;
- (void).cxx_destruct;
- (void)_gatherExpressionsStartingAt:(id)arg1;
- (void)_gatherExpressions;
- (void)invalidate;
- (id)parseTreeForString:(id)arg1;
- (id)initWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(CDUnknownBlockType)arg2;

@end

