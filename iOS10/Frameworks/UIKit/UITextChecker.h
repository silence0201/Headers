//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface UITextChecker : NSObject
{
    id _reserved;
    long long _usdt;
}

+ (void)queryLocalUpdateAssets:(CDUnknownBlockType)arg1;
+ (id)_textCheckerBackgroundQueue;
+ (void)setString:(id)arg1 isExemptFromChecker:(_Bool)arg2;
+ (void)unlearnWord:(id)arg1;
+ (_Bool)hasLearnedWord:(id)arg1;
+ (void)learnWord:(id)arg1;
+ (void)_setWords:(id)arg1 inDictionary:(id)arg2;
+ (id)_wordsInDictionary:(id)arg1;
+ (_Bool)_isWord:(id)arg1 inDictionary:(id)arg2;
+ (_Bool)_forgetWord:(id)arg1 inDictionary:(id)arg2;
+ (_Bool)_learnWord:(id)arg1 inDictionary:(id)arg2;
+ (id)dictionaryInfo:(id)arg1;
+ (id)openUserDictionary:(id)arg1;
+ (struct __CFSet *)createDictHashTable:(_Bool)arg1;
+ (id)bestLanguageForString:(id)arg1 fromAlternatives:(id)arg2 currentLanguage:(id)arg3;
+ (id)bestLanguageForString:(id)arg1 fromAlternatives:(id)arg2 currentLanguage:(id)arg3 insertionPointIndex:(unsigned long long)arg4 scriptForBestLanguage:(id *)arg5;
+ (id)availableLanguages;
+ (long long)uniqueSpellDocumentTag;
- (_Bool)isWordInUserDictionaries:(id)arg1 caseSensitive:(_Bool)arg2;
@property(retain, nonatomic) NSArray *ignoredWords;
- (void)ignoreWord:(id)arg1;
- (id)alternativesForPinyinInputString:(id)arg1;
- (id)stringForInputString:(id)arg1 language:(id)arg2;
- (_Bool)canChangeCaseOfFirstLetterInString:(id)arg1 toUpperCase:(_Bool)arg2 language:(id)arg3;
- (id)suggestWordInLanguage:(id)arg1;
- (id)completionsForPartialWordRange:(struct _NSRange)arg1 inString:(id)arg2 language:(id)arg3;
- (id)guessesForWordRange:(struct _NSRange)arg1 inString:(id)arg2 language:(id)arg3;
- (id)correctionForWordRange:(struct _NSRange)arg1 inString:(id)arg2 language:(id)arg3;
- (struct _NSRange)checkGrammarOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(_Bool)arg4 details:(id *)arg5;
- (struct _NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 languages:(id)arg3 wrap:(_Bool)arg4 correction:(id *)arg5;
- (struct _NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(_Bool)arg4 correction:(id *)arg5;
- (struct _NSRange)rangeOfMisspelledWordInString:(id)arg1 range:(struct _NSRange)arg2 startingAt:(long long)arg3 wrap:(_Bool)arg4 language:(id)arg5;
- (struct _NSRange)rangeOfMisspelledWordInString:(id)arg1 range:(struct _NSRange)arg2 startingAt:(long long)arg3 wrap:(_Bool)arg4 languages:(id)arg5;
- (struct _NSRange)_chunkAndFindMisspelledWordInString:(id)arg1 languages:(id)arg2 learnedDictionaries:(id)arg3 wordCount:(long long *)arg4 correction:(id *)arg5 usingChecker:(id)arg6;
- (struct _NSRange)_chunkAndCheckGrammarInString:(id)arg1 language:(id)arg2 usingChecker:(id)arg3 details:(id *)arg4;
- (long long)adjustOffsetToNextWordBoundaryInString:(id)arg1 startingAt:(long long)arg2;
- (id)_checker;
- (void)dealloc;
- (_Bool)_doneLoading;
- (id)_initWithAsynchronousLoading:(_Bool)arg1;
- (id)init;
- (void)initGlobals;
- (void)queryUpdateBundle;
- (void)initUserDictionaries;
- (void)_setDocumentDictionaryName:(id)arg1;
- (void)_setLanguageDictionaryName:(id)arg1;
- (id)_nameOfDictionaryForDocumentTag:(long long)arg1;

@end

