//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNPropertyDescription.h>

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNFullscreenImageDataDescription : CNPropertyDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (id)CNValueForContact:(id)arg1;
- (Class)valueClass;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (id)init;
- (_Bool)setABValue:(void *)arg1 onABPerson:(void *)arg2 error:(struct __CFError **)arg3;
- (_Bool)setCNValue:(id)arg1 onABPerson:(void *)arg2 withDependentPropertiesContext:(id)arg3 error:(id *)arg4;
- (void *)ABValueForABPerson:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

