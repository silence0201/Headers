//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/CABehaviorDelegate-Protocol.h>

@class NSArray, NSLayoutManager, NSMutableArray, NSString, NSTextContainer, NSTextStorage, UITextView, UIView;

__attribute__((visibility("hidden")))
@interface _UISiriStreamingManager : NSObject <CABehaviorDelegate>
{
    UITextView *_textView;
    UIView *_siriItemView;
    NSLayoutManager *_streamingLayoutManager;
    NSTextStorage *_streamingTextStorage;
    NSTextContainer *_streamingTextContainer;
    NSMutableArray *_words;
    NSMutableArray *_wordTokens;
    NSArray *_wordsToSetAfterAnimations;
    unsigned long long _firstIndexToRemoveAfterLineChangeClearingAnimation;
    _Bool _isPerformingLineChangeClearingAnimation;
    _Bool _commitResultsAfterDynamicsFinish;
    _Bool _waitingForDynamicsBehaviorToStop;
}

@property(readonly, nonatomic) NSTextStorage *streamingTextStorage; // @synthesize streamingTextStorage=_streamingTextStorage;
@property(readonly, nonatomic) NSTextContainer *streamingTextContainer; // @synthesize streamingTextContainer=_streamingTextContainer;
@property(readonly, nonatomic) NSLayoutManager *streamingLayoutManager; // @synthesize streamingLayoutManager=_streamingLayoutManager;
@property(copy, nonatomic) NSArray *words; // @synthesize words=_words;
- (void).cxx_destruct;
- (void)behaviorDidStop:(id)arg1;
- (void)animateText;
- (void)_commitFinalResults;
- (void)commitFinalResults;
- (id)initWithTextView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

