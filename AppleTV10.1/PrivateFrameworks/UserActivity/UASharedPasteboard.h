//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UASharedPasteboardManager;

@interface UASharedPasteboard : NSObject
{
    UASharedPasteboardManager *_manager;
}

+ (id)remotePasteboard;
+ (void)localPasteboardDidPasteGeneration:(unsigned long long)arg1;
+ (void)clearLocalPasteboardInformation;
+ (void)localPasteboardDidAddItems:(id)arg1 forGeneration:(unsigned long long)arg2;
+ (void)localPasteboardDidAddData:(id)arg1 toItemAtIndex:(unsigned long long)arg2 generation:(unsigned long long)arg3;
+ (void)initialize;
@property UASharedPasteboardManager *manager; // @synthesize manager=_manager;
- (void)prefetchRemotePasteboardTypes:(id)arg1;
- (void)requestRemotePasteboardDataForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

