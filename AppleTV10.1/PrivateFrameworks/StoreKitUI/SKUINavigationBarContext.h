//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, SKUIClientContext, SKUILayoutCache, SKUIResourceLoader, UIViewController;

@interface SKUINavigationBarContext : NSObject
{
    SKUIClientContext *_clientContext;
    double _maximumNavigationBarWidth;
    NSOperationQueue *_operationQueue;
    UIViewController *_parentViewController;
    SKUIResourceLoader *_resourceLoader;
    SKUILayoutCache *_textLayoutCache;
}

@property(retain, nonatomic) SKUILayoutCache *textLayoutCache; // @synthesize textLayoutCache=_textLayoutCache;
@property(retain, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) double maximumNavigationBarWidth; // @synthesize maximumNavigationBarWidth=_maximumNavigationBarWidth;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;

@end
