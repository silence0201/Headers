//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/NSObject-Protocol.h>

@class NSString;

@protocol TVSImageLoader <NSObject>
- (void)cancelLoad:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 completionHandler:(void (^)(TVSImage *, NSString *, NSDate *, unsigned long long, NSError *))arg4;
- (NSString *)imageKeyForObject:(id)arg1;
@end
