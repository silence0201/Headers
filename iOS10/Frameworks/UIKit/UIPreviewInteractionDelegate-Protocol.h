//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIPreviewInteraction;

@protocol UIPreviewInteractionDelegate <NSObject>
- (void)previewInteractionDidCancel:(UIPreviewInteraction *)arg1;
- (void)previewInteraction:(UIPreviewInteraction *)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;

@optional
- (void)previewInteraction:(UIPreviewInteraction *)arg1 didUpdateCommitTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)previewInteractionShouldBegin:(UIPreviewInteraction *)arg1;
@end

