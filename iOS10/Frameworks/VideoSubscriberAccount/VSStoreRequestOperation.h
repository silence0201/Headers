//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class SSRequest, VSFailable, VSStoreRequest;

__attribute__((visibility("hidden")))
@interface VSStoreRequestOperation : VSAsyncOperation
{
    int _requestCompletionFlag;
    VSStoreRequest *_request;
    VSFailable *_result;
    SSRequest *_storeServicesRequest;
}

@property(retain, nonatomic) SSRequest *storeServicesRequest; // @synthesize storeServicesRequest=_storeServicesRequest;
@property(retain, nonatomic) VSFailable *result; // @synthesize result=_result;
@property(copy, nonatomic) VSStoreRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (_Bool)_isFirstToFinish;

@end

