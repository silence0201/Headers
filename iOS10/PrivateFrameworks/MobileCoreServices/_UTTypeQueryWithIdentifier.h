//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/_UTTypeQuery.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UTTypeQueryWithIdentifier : _UTTypeQuery
{
    NSString *_identifier;
    _Bool _dynamic;
    _Bool _valid;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_canResolveLocallyWithoutMappingDatabase;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (_Bool)getLocallyResolvedType:(id *)arg1 orErrorWithoutMappingDatabase:(id *)arg2;

@end

