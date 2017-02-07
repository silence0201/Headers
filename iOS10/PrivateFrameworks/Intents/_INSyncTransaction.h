//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _INVocabularyGenerationDocument, _INVocabularyStoreManager;

@interface _INSyncTransaction : NSObject
{
    NSString *_pathToLatestVocabularyDocument;
    NSString *_pathToStagedVocabularyDocument;
    NSString *_pathToSentVocabularyDocument;
    NSString *_syncSlot;
    _INVocabularyStoreManager *_storeManager;
    _Bool _deleteExistingVocabulary;
    _Bool _vocabularyUpdatesEnabled;
    _Bool _fullResetRequired;
    _INVocabularyGenerationDocument *_latest;
    _INVocabularyGenerationDocument *_sent;
}

+ (id)beginTransactionForBundleID:(id)arg1 bundlePath:(id)arg2 syncSlot:(id)arg3;
@property(nonatomic) _Bool fullResetRequired; // @synthesize fullResetRequired=_fullResetRequired;
@property(readonly, nonatomic) _INVocabularyGenerationDocument *latestVocabularyDocument; // @synthesize latestVocabularyDocument=_latest;
- (void).cxx_destruct;
- (void)_beginTransaction;
- (_Bool)_isMissingLatestFileError:(id)arg1;
- (void)_deleteInvalidSavedData;
- (id)_emptySentDocument;
@property(readonly, nonatomic) _INVocabularyGenerationDocument *sentVocabularyDocument; // @synthesize sentVocabularyDocument=_sent;
- (id)calculateDiff;
- (void)endTransactionWithFinalAnchor:(id)arg1;
- (void)_saveAndCleanup;
- (id)_initWithVocabularyManager:(id)arg1 syncSlot:(id)arg2 deleteExistingVocabulary:(_Bool)arg3;

@end

