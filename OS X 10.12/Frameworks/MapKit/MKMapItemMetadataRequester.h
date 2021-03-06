//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSURLSessionDataDelegate-Protocol.h>
#import <MapKit/NSURLSessionDelegate-Protocol.h>
#import <MapKit/NSURLSessionTaskDelegate-Protocol.h>

@class ACAccountCredential, ACAccountStore, NSMapTable, NSString, NSURLSession, OAURLRequestSigner;

@interface MKMapItemMetadataRequester : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate>
{
    NSURLSession *_session;
    NSMapTable *_requestsForURLs;
    NSMapTable *_tasksForURLs;
    NSMapTable *_dataForTasks;
    BOOL _hasCheckedYelpAccountCredentials;
    ACAccountStore *_accountStore;
    ACAccountCredential *_yelpAccountCredentials;
    OAURLRequestSigner *_signer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) ACAccountCredential *yelpAccountCredentials;
- (void)accountStoreDidChange:(id)arg1;
- (id)accountStore;
@property(readonly, nonatomic) OAURLRequestSigner *signer;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)handleTask:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (void)cancelRequestsForMapItem:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

