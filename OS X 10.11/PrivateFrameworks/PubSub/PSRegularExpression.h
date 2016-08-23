//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PubSub/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PSRegularExpression : NSObject <NSCopying>
{
    struct URegularExpression *_regexp;
    int _err;
    NSString *_retainedStr;
    unsigned short *_mallocedChars;
}

+ (id)regularExpressionWithPattern:(id)arg1 options:(int)arg2 error:(id *)arg3;
- (id)matchedGroup:(unsigned int)arg1;
- (id)nextMatch;
- (struct _NSRange)rangeOfMatchedGroup:(unsigned int)arg1;
- (id)_searchStringRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeOfNextMatch;
- (void)resetMatches;
- (BOOL)matchesString:(id)arg1;
- (BOOL)matchesFrom:(unsigned int)arg1;
- (BOOL)matches;
- (BOOL)setSearchString:(id)arg1;
- (int)lastError;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)_initWithURegularExpression:(struct URegularExpression *)arg1;
- (id)initWithPattern:(id)arg1 options:(int)arg2 error:(id *)arg3;

@end
