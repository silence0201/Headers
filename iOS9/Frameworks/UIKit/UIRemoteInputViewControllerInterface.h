//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <UIKit/_UIIVCResponseDelegate-Protocol.h>

@class NSString;
@protocol _UIIVCResponseDelegate;

__attribute__((visibility("hidden")))
@interface UIRemoteInputViewControllerInterface : NSExtensionContext <_UIIVCResponseDelegate>
{
    id <_UIIVCResponseDelegate> _responseDelegate;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(retain, nonatomic) id <_UIIVCResponseDelegate> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleInputViewControllerState:(id)arg1;
- (void)_tearDownRemoteService;
- (void)_performInputViewControllerOutput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

