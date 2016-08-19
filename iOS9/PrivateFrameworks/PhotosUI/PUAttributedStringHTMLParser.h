//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PUAttributedStringHTMLParser : NSObject
{
    unsigned int __currentTraits;
    CDUnknownBlockType _parsedAttributedStringBlock;
    CDUnknownBlockType _parsedErrorBlock;
    NSString *__htmlString;
    NSDictionary *__defaultAttributes;
    NSCountedSet *__currentMarkupElements;
    NSDictionary *__currentAttributes;
}

@property(copy, nonatomic, setter=_setCurrentAttributes:) NSDictionary *_currentAttributes; // @synthesize _currentAttributes=__currentAttributes;
@property(nonatomic, setter=_setCurrentTraits:) unsigned int _currentTraits; // @synthesize _currentTraits=__currentTraits;
@property(readonly, nonatomic) NSCountedSet *_currentMarkupElements; // @synthesize _currentMarkupElements=__currentMarkupElements;
@property(readonly, copy, nonatomic) NSDictionary *_defaultAttributes; // @synthesize _defaultAttributes=__defaultAttributes;
@property(readonly, nonatomic) NSString *_htmlString; // @synthesize _htmlString=__htmlString;
@property(copy, nonatomic) CDUnknownBlockType parsedErrorBlock; // @synthesize parsedErrorBlock=_parsedErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType parsedAttributedStringBlock; // @synthesize parsedAttributedStringBlock=_parsedAttributedStringBlock;
- (void).cxx_destruct;
- (void)_updateCurrentTraits;
- (void)parse;
- (id)initWithHTMLString:(id)arg1 defaultAttributes:(id)arg2;
- (id)init;

@end

