//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

@class UIActivityIndicatorView, UIView;

__attribute__((visibility("hidden")))
@interface PUIndeterminateProgressTileViewController : PUTileViewController
{
    _Bool _progressIndicatorVisible;
    UIActivityIndicatorView *__spinnerView;
    UIView *__contentView;
}

@property(retain, nonatomic) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(retain, nonatomic) UIActivityIndicatorView *_spinnerView; // @synthesize _spinnerView=__spinnerView;
@property(nonatomic, getter=isProgressIndicatorVisible) _Bool progressIndicatorVisible; // @synthesize progressIndicatorVisible=_progressIndicatorVisible;
- (void).cxx_destruct;
- (void)_addSpinnerToContentView;
- (void)viewDidLoad;

@end
