//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSPredicate : NSObject <NSSecureCoding, NSCopying>
{
    struct _predicateFlags {
        unsigned int _evaluationBlocked:1;
        unsigned int _reservedPredicateFlags:31;
    } _predicateFlags;
    unsigned int reserved;
}

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithBlock:(CDUnknownBlockType)arg1;
+ (id)predicateWithValue:(_Bool)arg1;
+ (id)predicateWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)predicateWithFormat:(id)arg1;
+ (id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (struct __CFLocale *)retainedLocale;
+ (id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2;
+ (void)initialize;
@property(readonly, copy) NSString *predicateFormat;
- (id)description;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (_Bool)evaluateWithObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)allowEvaluation;
- (_Bool)_allowsEvaluation;
- (id)generateMetadataDescription;
- (void)_validateForMetadataQueryScopes:(id)arg1;

@end

