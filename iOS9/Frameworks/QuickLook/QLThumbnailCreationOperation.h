//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSURL, UIImage;

@interface QLThumbnailCreationOperation : NSOperation
{
    _Bool _finished;
    _Bool _executing;
    UIImage *_image;
    NSError *_error;
    NSURL *_documentURL;
    double _maximumDimension;
    double _scaleFactor;
    unsigned long long _useMode;
    struct CGRect _contentRect;
}

@property unsigned long long useMode; // @synthesize useMode=_useMode;
@property double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property double maximumDimension; // @synthesize maximumDimension=_maximumDimension;
@property(retain) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) UIImage *image; // @synthesize image=_image;
@property struct CGRect contentRect; // @synthesize contentRect=_contentRect;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (void)retrieveThumbnailForPhysicalURL:(id)arg1 hasThumbnailInIndex:(_Bool)arg2;
- (void)checkIfThumbnailExistsAtPhysicalURL:(id)arg1;
- (void)main;
- (_Bool)_finishIfCancelled;
- (void)_finish;
- (void)start;
- (_Bool)isConcurrent;
- (void)setExecuting:(_Bool)arg1;
- (void)setFinished:(_Bool)arg1;
- (void)dealloc;

@end

