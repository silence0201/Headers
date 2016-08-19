//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNMultiValuePropertyDescription.h>

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNPhoneNumbersDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>
{
}

- (CDUnknownBlockType)fromPlistTransform;
- (CDUnknownBlockType)plistTransform;
- (Class)labeledValueClass;
- (_Bool)isValue:(id)arg1 equivalentToValue:(id)arg2;
- (id)stringForIndexingForContact:(id)arg1;
- (id)standardLabels;
- (id)equivalentLabelSets;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (id)CNValueForContact:(id)arg1;
- (_Bool)isNonnull;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (id)init;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1;
- (int)abPropertyID:(int *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

