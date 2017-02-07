//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TVLDocument, TVLVideoAssetElement;
@protocol OS_dispatch_queue;

@interface TVLEventGroupUpdater : NSObject
{
    TVLDocument *_feedDocument;
    TVLVideoAssetElement *_feedElement;
    NSMutableArray *_eventGroupLoaders;
    NSObject<OS_dispatch_queue> *_documentLoaderCreationQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *documentLoaderCreationQueue; // @synthesize documentLoaderCreationQueue=_documentLoaderCreationQueue;
@property(retain, nonatomic) NSMutableArray *eventGroupLoaders; // @synthesize eventGroupLoaders=_eventGroupLoaders;
@property(retain, nonatomic) TVLVideoAssetElement *feedElement; // @synthesize feedElement=_feedElement;
@property(retain, nonatomic) TVLDocument *feedDocument; // @synthesize feedDocument=_feedDocument;
- (void).cxx_destruct;
- (id)_eventGroupURLStrings;
- (id)_requiredEventGroupURLStrings;
- (void)_fetchDocumentLoaderWithURLString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cancelAllEventGroupLoaders;
- (id)_chaptersFromEventGroupElement:(id)arg1;
- (void)_processEventGroupDocument:(id)arg1 forRequestedURL:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)cancelAllLoads;
- (void)loadEventGroupURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadEventGroupChapterCollectionsAndInterstitialsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFeedElement:(id)arg1;

@end
