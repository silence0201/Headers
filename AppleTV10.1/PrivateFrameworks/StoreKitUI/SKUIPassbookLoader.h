//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, SKUIClientContext;
@protocol SKUIPassbookLoaderDelegate;

@interface SKUIPassbookLoader : NSObject
{
    SKUIClientContext *_clientContext;
    id <SKUIPassbookLoaderDelegate> _delegate;
    long long _loadCount;
    NSOperationQueue *_operationQueue;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <SKUIPassbookLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_sendDidFinishIfFinished;
- (void)_loadPassWithURL:(id)arg1;
- (void)loadPassWithURL:(id)arg1;
- (id)initWithClientContext:(id)arg1;

@end

