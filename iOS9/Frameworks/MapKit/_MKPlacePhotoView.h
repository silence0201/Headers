//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <MapKit/UIScrollViewDelegate-Protocol.h>

@class MKPlacePhotosView, NSString, NSTimer, NSURLSessionTask, UIActivityIndicatorView, UIImage, UIImageView, UILabel;
@protocol GEOMapItemPhoto;

__attribute__((visibility("hidden")))
@interface _MKPlacePhotoView : UIScrollView <UIScrollViewDelegate>
{
    UIActivityIndicatorView *_activity;
    _Bool _isZoomed;
    NSTimer *_tapTimer;
    UILabel *_descriptionLabel;
    UILabel *_licenseLabel;
    id <GEOMapItemPhoto> _photo;
    MKPlacePhotosView *_viewer;
    NSURLSessionTask *_task;
    _Bool _hasLoadedFullPhoto;
    UIImageView *_imageView;
    UIImage *_thumbnail;
}

@property(nonatomic) _Bool hasLoadedFullPhoto; // @synthesize hasLoadedFullPhoto=_hasLoadedFullPhoto;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)toggleBackground;
- (void)zoomToPoint:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)unloadFullPhoto;
- (void)urlRequestFinished:(id)arg1 withError:(id)arg2;
- (void)loadFullPhoto;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 photo:(id)arg2 viewer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

