//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSString, PXImageRequester, PXViewSpec;
@protocol UICoordinateSpace;

@interface PXRegionOfInterest : NSObject <NSCopying>
{
    id <UICoordinateSpace> _coordinateSpace;
    PXImageRequester *_imageRequester;
    PXViewSpec *_imageViewSpec;
    NSString *_title;
    NSString *_subtitle;
    PXViewSpec *_textViewSpec;
    CDUnknownBlockType _placeholderViewFactory;
    struct CGRect _rect;
    struct CGRect _imageContentsRect;
}

@property(copy, nonatomic) CDUnknownBlockType placeholderViewFactory; // @synthesize placeholderViewFactory=_placeholderViewFactory;
@property(retain, nonatomic) PXViewSpec *textViewSpec; // @synthesize textViewSpec=_textViewSpec;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) PXViewSpec *imageViewSpec; // @synthesize imageViewSpec=_imageViewSpec;
@property(nonatomic) struct CGRect imageContentsRect; // @synthesize imageContentsRect=_imageContentsRect;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)rectInCoordinateSpace:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (id)init;

@end
