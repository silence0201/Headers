//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSDate, PUAssetDisplayDescriptor;

@protocol PUAssetDisplayDescriptorNavigator <NSObject>
- (void)navigateToAssetDisplayDescriptor:(PUAssetDisplayDescriptor *)arg1 beforeDate:(NSDate *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
@end

