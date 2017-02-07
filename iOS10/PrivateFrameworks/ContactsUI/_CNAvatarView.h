//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol _CNAvatarViewDelegate;

@interface _CNAvatarView : UIView
{
    id <_CNAvatarViewDelegate> _delegate;
    NSArray *_likenessProviders;
    NSArray *_likenessViews;
    NSArray *_subviewsConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(copy, nonatomic) NSArray *subviewsConstraints; // @synthesize subviewsConstraints=_subviewsConstraints;
@property(copy, nonatomic) NSArray *likenessViews; // @synthesize likenessViews=_likenessViews;
@property(retain, nonatomic) NSArray *likenessProviders; // @synthesize likenessProviders=_likenessProviders;
@property(nonatomic) __weak id <_CNAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setupSubviews;

@end

