//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKCollectionViewCell.h>

@class GKLabel, GKPlayerMultiPhotoView, NSImageView;

@interface GKFriendRequestsSynopsisCell : GKCollectionViewCell
{
    GKLabel *_titleLabel;
    GKLabel *_subtitleLabel;
    NSImageView *_caretView;
    GKPlayerMultiPhotoView *_iconView;
}

@property(retain, nonatomic) GKPlayerMultiPhotoView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSImageView *caretView; // @synthesize caretView=_caretView;
@property(retain, nonatomic) GKLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)prepareForReuse;
- (BOOL)canRemoveItem;
- (void)didUpdateModel;
- (void)setPlayers:(id)arg1;
- (id)players;

@end
