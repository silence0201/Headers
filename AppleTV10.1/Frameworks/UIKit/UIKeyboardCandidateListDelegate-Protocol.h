//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@protocol UIKeyboardCandidateList;

@protocol UIKeyboardCandidateListDelegate <NSObject>

@optional
- (void)candidateListInvalidateSelection:(id <UIKeyboardCandidateList>)arg1;
- (void)candidateListShouldBeDismissed:(id <UIKeyboardCandidateList>)arg1;
- (void)candidateListSelectionDidChange:(id <UIKeyboardCandidateList>)arg1;
- (void)candidateListAcceptCandidate:(id <UIKeyboardCandidateList>)arg1;
- (void)setCandidateList:(id <UIKeyboardCandidateList>)arg1;
@end

