//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/_NSViewAnimator.h>

__attribute__((visibility("hidden")))
@interface _NSViewAnimator_NSCollectionView : _NSViewAnimator
{
}

- (void)reloadItemsAtIndexes:(id)arg1 inSectionObject:(id)arg2;
- (void)deleteItemsAtIndexes:(id)arg1 inSectionObject:(id)arg2;
- (void)insertItemsAtIndexes:(id)arg1 inSectionObject:(id)arg2;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)setSelectionIndexPaths:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1;

@end
