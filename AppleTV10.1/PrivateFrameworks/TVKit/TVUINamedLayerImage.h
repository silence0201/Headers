//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVKit/UINamedLayerImage-Protocol.h>

@class NSString, UIImage;

@interface TVUINamedLayerImage : NSObject <UINamedLayerImage>
{
    _Bool _fixedFrame;
    int _blendMode;
    struct CGImage *_image;
    NSString *_name;
    double _opacity;
    UIImage *_imageObj;
    struct CGRect _frame;
}

@property(retain, nonatomic) UIImage *imageObj; // @synthesize imageObj=_imageObj;
@property(nonatomic) _Bool fixedFrame; // @synthesize fixedFrame=_fixedFrame;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

