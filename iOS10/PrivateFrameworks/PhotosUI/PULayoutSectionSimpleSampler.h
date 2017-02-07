//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PULayoutSectionSampler.h>

__attribute__((visibility("hidden")))
@interface PULayoutSectionSimpleSampler : PULayoutSectionSampler
{
    long long _numberOfVisibleItems;
    long long _numberOfRealItems;
}

- (void)dumpInternalMemory;
- (void)enumerateUnsampledIndexesForSampledIndexInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)unsampledIndexForIndex:(long long)arg1;
- (long long)indexForUnsampledIndex:(long long)arg1 isMainItem:(_Bool *)arg2;
- (id)initWithNumberOfVisibleItems:(long long)arg1 numberOfRealItems:(long long)arg2;

@end

