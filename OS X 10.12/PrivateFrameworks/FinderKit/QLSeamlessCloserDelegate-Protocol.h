//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FinderKit/NSObject-Protocol.h>

@class NSImage, QLPreviewView;
@protocol QLPreviewItem;

@protocol QLSeamlessCloserDelegate <NSObject>

@optional
- (NSImage *)seamlessCloserTransitionImageForPreviewItem:(id <QLPreviewItem>)arg1 contentRect:(struct CGRect *)arg2;
- (struct CGRect)seamlessCloserSourceFrameOnScreenForPreviewItem:(id <QLPreviewItem>)arg1;
- (QLPreviewView *)seamlessCloserSourcePreviewViewForPreviewItem:(id <QLPreviewItem>)arg1;
@end
