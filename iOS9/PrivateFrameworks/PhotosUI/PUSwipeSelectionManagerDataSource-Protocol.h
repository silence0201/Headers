//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PHAssetCollection, PUSwipeSelectionManager;

@protocol PUSwipeSelectionManagerDataSource <NSObject>
- (PHAssetCollection *)swipeSelectionManager:(PUSwipeSelectionManager *)arg1 photoCollectionAtIndex:(unsigned long long)arg2;
- (long long)swipeSelectionManager:(PUSwipeSelectionManager *)arg1 numberOfItemsInSection:(long long)arg2;
@end

