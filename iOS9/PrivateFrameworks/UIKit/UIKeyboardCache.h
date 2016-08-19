//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CPBitmapStore, NSSet;

__attribute__((visibility("hidden")))
@interface UIKeyboardCache : NSObject
{
    CPBitmapStore *_store;
    NSSet *_layouts;
    _Bool _isCommitting;
}

+ (_Bool)enabled;
+ (id)sharedInstance;
- (void)updateCacheForInputModes:(id)arg1;
- (id)uniqueLayoutsFromInputModes:(id)arg1;
- (id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3;
- (void)displayView:(id)arg1 imageWidth:(double)arg2 fromLayout:(id)arg3;
- (void)displayView:(id)arg1 fromLayout:(id)arg2;
- (struct CGImage *)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3;
- (struct CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;
- (void)clearNonPersistentCache;
- (void)commitTransaction;
- (void)dealloc;
- (id)init;

@end
