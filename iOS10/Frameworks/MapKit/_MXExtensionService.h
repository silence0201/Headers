//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSUUID, UIViewController, _MXExtension;

@interface _MXExtensionService : NSObject
{
    _MXExtension *_extension;
    unsigned long long _state;
    NSArray *_returnItems;
    NSError *_error;
    struct UIViewController *_remoteViewController;
    NSUUID *_serviceIdentifier;
}

@property(retain, nonatomic) NSUUID *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(nonatomic) __weak UIViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *returnItems; // @synthesize returnItems=_returnItems;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _MXExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
@property(readonly, nonatomic) int processIdentifier;
- (id)vendorContextWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)vendorContext;
- (id)description;
- (void)completeServiceWithReturnItems:(id)arg1 error:(id)arg2;
- (void)_completeServiceIfNeededWithError:(id)arg1;
- (void)cancel;
- (id)context;
- (id)initWithExtension:(id)arg1 serviceIdentifier:(id)arg2 remoteViewController:(struct UIViewController *)arg3;
- (id)initWithExtension:(id)arg1 serviceIdentifier:(id)arg2;
- (id)init;

@end

