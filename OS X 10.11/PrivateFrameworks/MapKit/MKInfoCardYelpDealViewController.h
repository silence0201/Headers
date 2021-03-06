//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSLayoutConstraint, NSView;
@protocol MKMapItemVendorDeal;

@interface MKInfoCardYelpDealViewController : NSViewController
{
    BOOL _loaded;
    id <MKMapItemVendorDeal> _deal;
    NSLayoutConstraint *_topConstraint;
    NSView *_container;
}

@property(nonatomic) __weak NSView *container; // @synthesize container=_container;
@property(nonatomic) __weak NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) id <MKMapItemVendorDeal> deal; // @synthesize deal=_deal;
- (void).cxx_destruct;
- (void)openYelpDeal:(id)arg1;
- (void)insertDealViewInContainer;
- (void)awakeFromNib;

@end

