//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXViewSpec.h>

@class PXImageViewSpec, PXTitleSubtitleLabelSpec;

@interface PXImageTitleSubtitleSpec : PXViewSpec
{
    PXTitleSubtitleLabelSpec *_titleSubtitleSpec;
    PXImageViewSpec *_imageSpec;
}

@property(retain, nonatomic) PXImageViewSpec *imageSpec; // @synthesize imageSpec=_imageSpec;
@property(retain, nonatomic) PXTitleSubtitleLabelSpec *titleSubtitleSpec; // @synthesize titleSubtitleSpec=_titleSubtitleSpec;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

