//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UINamedLayerImage-Protocol.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _UIStackedImageSingleNamedLayerImage : NSObject <UINamedLayerImage>
{
    UIImage *_imageObj;
}

@property(retain, nonatomic) UIImage *imageObj; // @synthesize imageObj=_imageObj;
- (void).cxx_destruct;
@property(readonly, nonatomic) int blendMode;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool fixedFrame;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

