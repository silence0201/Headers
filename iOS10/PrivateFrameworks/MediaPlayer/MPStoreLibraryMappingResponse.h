//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MPStoreLibraryMappingResponse : NSObject
{
    NSMutableDictionary *_storeIdentifierSetToLibraryIdentifierSet;
    long long _libraryAddedStatus;
}

@property(nonatomic) long long libraryAddedStatus; // @synthesize libraryAddedStatus=_libraryAddedStatus;
- (void).cxx_destruct;
- (void)setLibraryIdentifierSet:(id)arg1 forIdentifierSet:(id)arg2;
- (id)libraryIdentifierSetForIdentifierSet:(id)arg1;

@end

