//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, CNAvatarView;

__attribute__((visibility("hidden")))
@interface CNContactGridClippingView : UIView
{
    CNAvatarView *_avatarView;
    CAShapeLayer *_actionsMaskLayer;
}

@property(retain, nonatomic) CAShapeLayer *actionsMaskLayer; // @synthesize actionsMaskLayer=_actionsMaskLayer;
@property(nonatomic) __weak CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
@property(nonatomic) _Bool masksToAvatar;
- (void)layoutSubviews;

@end

