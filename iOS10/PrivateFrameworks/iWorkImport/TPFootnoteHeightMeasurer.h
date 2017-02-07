//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSWPFootnoteHeightMeasurer-Protocol.h>

@class NSString, TPFootnoteContainerLayout, TSDLayoutController, TSULRUCache;

__attribute__((visibility("hidden")))
@interface TPFootnoteHeightMeasurer : NSObject <TSWPFootnoteHeightMeasurer>
{
    TPFootnoteContainerLayout *_footnoteContainerLayout;
    TSDLayoutController *_layoutController;
    TSULRUCache *_footnoteLayoutCache;
}

- (void)p_clearFootnoteLayoutCache;
- (void)setFootnoteSpacing:(long long)arg1;
- (void)setContainerWidth:(double)arg1;
- (double)footnoteHeight;
- (void)removeAllFootnoteReferenceStorages;
- (void)removeFootnoteReferenceStorage:(id)arg1;
- (void)addFootnoteReferenceStorage:(id)arg1;
- (void)dealloc;
- (id)initWithFootnoteMarkProvider:(id)arg1 maxFootnoteWidth:(double)arg2 maxFootnoteHeight:(double)arg3 footnoteSpacing:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
