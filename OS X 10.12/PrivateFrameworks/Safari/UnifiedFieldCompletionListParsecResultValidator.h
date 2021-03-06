//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/UnifiedFieldCompletionListParsecResultValidation-Protocol.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface UnifiedFieldCompletionListParsecResultValidator : NSObject <UnifiedFieldCompletionListParsecResultValidation>
{
    NSMutableSet *_validatedResultIdentifiers;
}

- (void).cxx_destruct;
- (void)resetValidationState;
- (BOOL)validateParsecResult:(id)arg1 withSession:(id)arg2;
- (BOOL)_validateSimpleResult:(id)arg1 withSession:(id)arg2;
- (BOOL)_validateGenericResult:(id)arg1 withSession:(id)arg2;
- (BOOL)_validateNonEmptyDescriptionInResult:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

