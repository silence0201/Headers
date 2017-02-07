//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSProRenditionMetrics : NSObject
{
    struct CGSize _imageSize;
    struct CGSize _edgeBottomLeftMargin;
    struct CGSize _edgeTopRightMargin;
    struct CGSize _alignmentBottomLeftMargin;
    struct CGSize _alignmentTopRightMargin;
    struct prmFlags _prmFlags;
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

- (id)description;
- (struct CGRect)alignmentRect;
- (struct CGRect)edgeRect;
- (BOOL)scalesHorizontally;
- (BOOL)scalesVertically;
- (struct CGSize)alignmentTopRightMargin;
- (struct CGSize)alignmentBottomLeftMargin;
- (struct CGSize)edgeTopRightMargin;
- (struct CGSize)edgeBottomLeftMargin;
- (struct CGSize)imageSize;
- (id)initWithImageSize:(struct CGSize)arg1 edgeBottomLeft:(struct CGSize)arg2 edgeTopRight:(struct CGSize)arg3 alignmentBottomLeft:(struct CGSize)arg4 alignmentTopRight:(struct CGSize)arg5 scalesVertically:(BOOL)arg6 scalesHorizontally:(BOOL)arg7;

@end
