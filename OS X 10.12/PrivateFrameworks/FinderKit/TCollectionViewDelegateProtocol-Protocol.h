//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FinderKit/TBrowserViewDelegate-Protocol.h>

@class NSCollectionView, NSEvent;

@protocol TCollectionViewDelegateProtocol <TBrowserViewDelegate>
- (_Bool)handleQuickLookWithEvent:(NSEvent *)arg1;
- (_Bool)handleKeyDown:(NSEvent *)arg1 currentKey:(unsigned short)arg2;
- (_Bool)handleMouseUp:(NSEvent *)arg1;
- (_Bool)handleMouseDragged:(NSEvent *)arg1;
- (_Bool)handleMouseDown:(NSEvent *)arg1;

@optional
- (void)collectionViewDidLayout:(NSCollectionView *)arg1;
- (void)collectionViewWillLayout:(NSCollectionView *)arg1;
@end

