//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ICQBannerView, ICQOffer, NSArray;
@protocol ICQBannerViewDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotosICQWrapperBannerView : UIView
{
    ICQBannerView *_bannerView;
    NSArray *_constraints;
    ICQOffer *_offer;
    id <ICQBannerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <ICQBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ICQOffer *offer; // @synthesize offer=_offer;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithOffer:(id)arg1;

@end
