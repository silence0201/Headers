//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicProfileDetailView;

@protocol MusicProfileDetailViewDelegate <NSObject>

@optional
- (void)profileDetailViewDidSelectTitle:(MusicProfileDetailView *)arg1;
- (void)profileDetailViewDidSelectShareActionsButton:(MusicProfileDetailView *)arg1;
- (void)profileDetailViewDidSelectEditButton:(MusicProfileDetailView *)arg1;
- (void)profileDetailViewDidSelectContextualActionsButton:(MusicProfileDetailView *)arg1;
- (void)profileDetailView:(MusicProfileDetailView *)arg1 didUpdateFollowingState:(_Bool)arg2;
@end
