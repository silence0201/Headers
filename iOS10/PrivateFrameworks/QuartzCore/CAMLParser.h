//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSURL;
@protocol CAMLParserDelegate;

@interface CAMLParser : NSObject
{
    struct _CAMLParserData *_data;
}

+ (id)parser;
+ (id)parseContentsOfURL:(id)arg1;
- (void)parserWarning:(id)arg1;
- (void)parserError:(id)arg1;
- (id)didFailToLoadResourceFromURL:(id)arg1;
- (void)didLoadResource:(id)arg1 fromURL:(id)arg2;
- (id)willLoadResourceFromURL:(id)arg1;
- (id)attributeForKey:(id)arg1 remove:(_Bool)arg2;
- (void)setElementValue:(id)arg1;
- (id)elementValue;
- (id)objectById:(id)arg1;
@property(readonly) id result;
@property(readonly) NSError *error;
- (_Bool)parseContentsOfURL:(id)arg1;
- (_Bool)parseData:(id)arg1;
- (_Bool)parseString:(id)arg1;
- (_Bool)parseBytes:(const char *)arg1 length:(unsigned long long)arg2;
@property __weak id <CAMLParserDelegate> delegate;
@property(retain) NSURL *baseURL;
- (void)dealloc;
- (id)init;

@end

