//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (IMKStringAdditions)
+ (id)_stringWithCodePoint:(unsigned int)arg1;
- (id)_substringWithLenientRange:(struct _NSRange)arg1;
- (unsigned long long)_endIndexOfCodePointAtIndex:(unsigned long long)arg1;
- (unsigned long long)_startIndexOfCodePointAtIndex:(unsigned long long)arg1;
- (unsigned long long)_lengthInComposedCharacters;
- (unsigned long long)_lengthInCodePoints;
- (unsigned long long)_indexAtCodePoints:(unsigned long long)arg1 afterIndex:(unsigned long long)arg2 untilCharacterFromSet:(id)arg3;
- (unsigned long long)_indexAtCodePoints:(unsigned long long)arg1 afterIndex:(unsigned long long)arg2;
- (unsigned long long)_indexAtCodePoints:(unsigned long long)arg1 beforeIndex:(unsigned long long)arg2 untilCharacterFromSet:(id)arg3;
- (unsigned long long)_indexAtCodePoints:(unsigned long long)arg1 beforeIndex:(unsigned long long)arg2;
- (unsigned int)_lastCodePoint;
- (id)_firstComposedCharacter;
- (unsigned int)_firstCodePoint;
- (BOOL)_containsCharacterFromSet:(id)arg1;
- (unsigned long long)_codePointsCountInRange:(struct _NSRange)arg1;
- (id)_codePoints:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 untilCharacterFromSet:(id)arg3;
- (id)_codePoints:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2;
- (unsigned long long)_codePointsCountUpTo:(unsigned long long)arg1 beforeIndex:(unsigned long long)arg2 untilCharacterFromSet:(id)arg3;
- (id)_codePoints:(unsigned long long)arg1 beforeIndex:(unsigned long long)arg2 untilCharacterFromSet:(id)arg3;
- (unsigned long long)_codePointsCountUpTo:(unsigned long long)arg1 beforeIndex:(unsigned long long)arg2;
- (unsigned int)_codePointBeforeIndex:(unsigned long long)arg1;
- (id)_codePoints:(unsigned long long)arg1 beforeIndex:(unsigned long long)arg2;
- (unsigned int)_codePointAtIndex:(unsigned long long)arg1;
@end
