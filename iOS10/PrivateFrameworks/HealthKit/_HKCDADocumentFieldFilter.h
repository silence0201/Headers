//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class NSRegularExpression, NSString;

@interface _HKCDADocumentFieldFilter : _HKFilter
{
    unsigned long long _operatorType;
    NSString *_keyPath;
    NSString *_comparisonValue;
    NSRegularExpression *_comparisonExpression;
}

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithOperatorType:(unsigned long long)arg1 keyPath:(id)arg2 comparisonValue:(id)arg3;
@property(readonly, nonatomic) NSRegularExpression *comparisonExpression; // @synthesize comparisonExpression=_comparisonExpression;
@property(readonly, nonatomic) NSString *comparisonValue; // @synthesize comparisonValue=_comparisonValue;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;
- (id)_comparisonExpression;

@end

