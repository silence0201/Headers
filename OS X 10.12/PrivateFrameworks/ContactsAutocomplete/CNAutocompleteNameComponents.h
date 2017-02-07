//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/NSCopying-Protocol.h>

@class NSString;

@interface CNAutocompleteNameComponents : NSObject <NSCopying>
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_nickname;
    NSString *_nameSuffix;
}

+ (id)contactKeys;
+ (id)nameComponentsWithFirstName:(id)arg1 lastName:(id)arg2 nickname:(id)arg3 nameSuffix:(id)arg4;
@property(readonly) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(readonly) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
