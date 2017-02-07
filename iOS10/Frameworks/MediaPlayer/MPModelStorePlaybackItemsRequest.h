//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelRequest.h>

#import <MediaPlayer/MPModelRequestDetailedKeepLocalStatusRequesting-Protocol.h>
#import <MediaPlayer/MPModelStorePreviousRequestStoring-Protocol.h>

@class MPModelResponse, NSArray, NSString;

@interface MPModelStorePlaybackItemsRequest : MPModelRequest <MPModelRequestDetailedKeepLocalStatusRequesting, MPModelStorePreviousRequestStoring>
{
    _Bool _allowsMultipleResponseHandlerCalls;
    _Bool _wantsDetailedKeepLocalRequestableResponse;
    _Bool _allowLocalEquivalencies;
    MPModelResponse *_previousResponse;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
    NSArray *_storeIDs;
}

@property(copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
@property(copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;
@property(copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property(nonatomic) _Bool allowLocalEquivalencies; // @synthesize allowLocalEquivalencies=_allowLocalEquivalencies;
@property(nonatomic) _Bool wantsDetailedKeepLocalRequestableResponse; // @synthesize wantsDetailedKeepLocalRequestableResponse=_wantsDetailedKeepLocalRequestableResponse;
@property(nonatomic) _Bool allowsMultipleResponseHandlerCalls; // @synthesize allowsMultipleResponseHandlerCalls=_allowsMultipleResponseHandlerCalls;
@property(retain, nonatomic) MPModelResponse *previousResponse; // @synthesize previousResponse=_previousResponse;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

