//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKNumericSuggestionsAlgorithm.h>

@class NSArray, NSDecimalNumber, NSDecimalNumberHandler, NSString, PKNumericSuggestionLastInput;

@interface PKNumericSuggestionsEnterValueAlgorithm : PKNumericSuggestionsAlgorithm
{
    NSDecimalNumberHandler *_roundingBehavior;
    NSArray *_valuesToDefaults;
    NSArray *_defaultSuggestions;
    unsigned long long _powerOfTenFactor;
    PKNumericSuggestionLastInput *_lastInput;
    BOOL _useBuiltInDefaults;
    BOOL _hasValidDefaultSuggestions;
    NSDecimalNumber *_cardBalance;
    NSDecimalNumber *_minAmount;
    NSDecimalNumber *_maxAmount;
    NSArray *_defaultValues;
    long long _decimalPrecision;
    NSString *_currencyCode;
}

@property(readonly, nonatomic) BOOL hasValidDefaultSuggestions; // @synthesize hasValidDefaultSuggestions=_hasValidDefaultSuggestions;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic) long long decimalPrecision; // @synthesize decimalPrecision=_decimalPrecision;
@property(nonatomic) unsigned long long powerOfTenFactor; // @synthesize powerOfTenFactor=_powerOfTenFactor;
@property(copy, nonatomic) NSArray *defaultValues; // @synthesize defaultValues=_defaultValues;
@property(copy, nonatomic) NSDecimalNumber *maxAmount; // @synthesize maxAmount=_maxAmount;
@property(copy, nonatomic) NSDecimalNumber *minAmount; // @synthesize minAmount=_minAmount;
@property(copy, nonatomic) NSDecimalNumber *cardBalance; // @synthesize cardBalance=_cardBalance;
- (void).cxx_destruct;
- (id)_generateValuesToDefaults;
- (id)_generateDefaultSuggestions;
- (id)_maxAmountSuggestion;
- (id)_useMaxAmountSuggestion;
- (void)_generateCalculatedSuggestions;
- (id)_possibleValueForAmount:(id)arg1;
- (BOOL)_possibleAmountIsValidWithDefaultValue:(id)arg1 amount:(id)arg2;
- (BOOL)_amountIsValid:(id)arg1;
- (void)setUseBuiltInDefaults:(BOOL)arg1;
- (id)suggestionsWithAmount:(id)arg1;
- (id)init;
- (id)initWithLastInput:(id)arg1;

@end
