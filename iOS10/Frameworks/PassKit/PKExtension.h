//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PKExtensionProvider;

@interface PKExtension : NSObject
{
    NSString *_identifier;
    PKExtensionProvider *_provider;
}

@property(nonatomic) __weak PKExtensionProvider *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (void)beginRemoteViewControllerExtensionServiceWithInputItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *extensionPointIdentifier;
@property(readonly, nonatomic) long long type;
- (id)extension;
- (id)initWithIdentifier:(id)arg1 provider:(id)arg2;

@end

