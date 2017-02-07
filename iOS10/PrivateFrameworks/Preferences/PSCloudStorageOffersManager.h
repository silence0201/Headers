//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Preferences/CommerceRemoteUIDelegateDelegate-Protocol.h>

@class CommerceRemoteUIDelegate, NSString;
@protocol PSCloudStorageOffersManagerDelegate;

@interface PSCloudStorageOffersManager : NSObject <CommerceRemoteUIDelegateDelegate>
{
    CommerceRemoteUIDelegate *_commerceDelegate;
    id <PSCloudStorageOffersManagerDelegate> _delegate;
    unsigned long long _requiredStorageThreshold;
}

@property(nonatomic) unsigned long long requiredStorageThreshold; // @synthesize requiredStorageThreshold=_requiredStorageThreshold;
@property(nonatomic) __weak id <PSCloudStorageOffersManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commerceDelegateDidCancel:(id)arg1;
- (void)commerceDelegate:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)commerceDelegate:(id)arg1 willPresentObjectModel:(id)arg2 page:(id)arg3;
- (void)dealloc;
- (void)cancelLoad;
- (void)beginFlowWithNavigationController:(id)arg1 purchaseToken:(id)arg2 buyParameters:(id)arg3 requestHeaders:(id)arg4 modally:(_Bool)arg5;
- (void)beginFlowWithNavigationController:(id)arg1 modally:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
