//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSVariableWidthString : NSString
{
    NSDictionary *_variants;
    NSString *_defaultString;
}

@property(readonly) unsigned long long length;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)formatConfiguration;
- (id)variantFittingPresentationWidth:(long long)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithWidthContexts:(id)arg1;
- (id)initWithWidthVariants:(id)arg1;
- (id)initWithString:(id)arg1 widthVariants:(id)arg2;

@end

