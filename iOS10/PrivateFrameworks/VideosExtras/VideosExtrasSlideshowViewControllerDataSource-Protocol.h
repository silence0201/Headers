//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosExtras/NSObject-Protocol.h>

@class VideosExtrasSlideshowViewController;

@protocol VideosExtrasSlideshowViewControllerDataSource <NSObject>
- (void)slideshowViewController:(VideosExtrasSlideshowViewController *)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(void (^)(UIImage *))arg3;
- (unsigned long long)numberOfImagesForSlideshowViewController:(VideosExtrasSlideshowViewController *)arg1;
@end
