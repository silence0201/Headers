//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelResponse.h>

#import <MediaPlayer/MPModelResponseDetailedKeepLocalStatusRequesting-Protocol.h>

@class MPMediaLibraryConnectionAssertion, NSArray, NSString;

@interface MPModelLibraryResponse : MPModelResponse <MPModelResponseDetailedKeepLocalStatusRequesting>
{
    NSArray *_sectionKeepLocalStatusConfigurations;
    MPMediaLibraryConnectionAssertion *_libraryAssertion;
}

@property(retain, nonatomic) MPMediaLibraryConnectionAssertion *libraryAssertion; // @synthesize libraryAssertion=_libraryAssertion;
@property(copy, nonatomic) NSArray *sectionKeepLocalStatusConfigurations; // @synthesize sectionKeepLocalStatusConfigurations=_sectionKeepLocalStatusConfigurations;
- (void).cxx_destruct;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

