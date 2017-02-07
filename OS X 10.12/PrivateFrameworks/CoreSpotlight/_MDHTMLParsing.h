//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface _MDHTMLParsing : NSObject
{
    unsigned short *uniChars;
    unsigned long long uniCharLen;
    unsigned long long uniCharSize;
    unsigned char newLineBuffer[8];
    unsigned long long newLineLength;
    NSMutableDictionary *attributes;
    NSString *metaName;
    NSString *metaHttpEquiv;
    NSString *metaContent;
    unsigned long long sourceEncoding;
    unsigned int sourceCFEncoding;
    unsigned long long indexingLimit;
    const char *titleStart;
    unsigned int titleLength;
    BOOL inHead;
    BOOL inTitle;
    BOOL inScript;
    BOOL inStyle;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)appendNewline;
- (void)appendUnichars:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (void)appendText:(const char *)arg1 length:(unsigned long long)arg2;
- (id)initWithEncoding:(unsigned long long)arg1;
- (void)dealloc;

@end
