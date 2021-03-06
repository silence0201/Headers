//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFMessageLoadingContext, MFMimeBody, MFMimePart, NSArray, NSError;

@interface MFMessageLoadingContextEvent : NSObject
{
    _Bool _hasLoadedCompleteBody;
    _Bool _hasLoadedBestAlternativePart;
    MFMessageLoadingContext *_context;
    NSArray *_content;
    unsigned long long _remainingBytes;
    NSError *_error;
    MFMimePart *_loadedPart;
    MFMimeBody *_loadedBody;
}

@property(retain, nonatomic) MFMimeBody *loadedBody; // @synthesize loadedBody=_loadedBody;
@property(retain, nonatomic) MFMimePart *loadedPart; // @synthesize loadedPart=_loadedPart;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long remainingBytes; // @synthesize remainingBytes=_remainingBytes;
@property(nonatomic) _Bool hasLoadedBestAlternativePart; // @synthesize hasLoadedBestAlternativePart=_hasLoadedBestAlternativePart;
@property(nonatomic) _Bool hasLoadedCompleteBody; // @synthesize hasLoadedCompleteBody=_hasLoadedCompleteBody;
@property(copy, nonatomic) NSArray *content; // @synthesize content=_content;
@property(nonatomic) __weak MFMessageLoadingContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)_descriptionForDebugging:(_Bool)arg1;
@property(readonly, nonatomic) NSError *smimeError;
- (void)dealloc;

@end

