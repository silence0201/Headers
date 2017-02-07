//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOGeocodeProvider.h>

#import <GeoServices/GEOPBSessionRequesterDelegate-Protocol.h>

@class GEORequester, NSString;

__attribute__((visibility("hidden")))
@interface GEOVoltaireGeocodeProvider : GEOGeocodeProvider <GEOPBSessionRequesterDelegate>
{
    GEORequester *_requester;
    BOOL _cancelled;
}

+ (id)batchReverseGeocoderURL;
+ (id)providerName;
- (void)cancel;
- (void)requesterDidCancel:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidFinish:(id)arg1;
- (void)_batchRequesterDidFinish:(id)arg1;
- (void)batchReverseGeocode:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (id)newRequester:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
