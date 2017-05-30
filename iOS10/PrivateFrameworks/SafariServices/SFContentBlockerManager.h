//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, WKUserContentController;

@interface SFContentBlockerManager : NSObject
{
    id _extensionMatchingContext;
    WKUserContentController *_userContentController;
    NSArray *_extensions;
    NSMutableSet *_observers;
    _Bool _lastExtensionDiscoveryHadError;
}

+ (void)getStateOfContentBlockerWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)reloadContentBlockerWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_contentBlockerLoaderConnection;
+ (id)contentBlockerStore;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_loadContentBlockerWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)displayNameForExtension:(id)arg1;
- (void)setExtension:(id)arg1 isEnabled:(_Bool)arg2;
- (_Bool)extensionIsEnabled:(id)arg1;
- (void)_beginContentBlockerDiscovery;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSArray *extensions;
- (void)reloadUserContentController;
@property(readonly, nonatomic) WKUserContentController *userContentController;

@end
