//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSFailable, VSStoreRequestOperation;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderFetchAllFromStoreOperation : VSAsyncOperation
{
    VSFailable *_result;
    VSStoreRequestOperation *_requestOperation;
}

@property(retain, nonatomic) VSStoreRequestOperation *requestOperation; // @synthesize requestOperation=_requestOperation;
@property(retain, nonatomic) VSFailable *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (void)_handleResult:(id)arg1;

@end

