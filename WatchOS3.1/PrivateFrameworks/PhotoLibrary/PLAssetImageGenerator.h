//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetImageGenerator;

@interface PLAssetImageGenerator : NSObject
{
    _Bool _inUse;
    AVAssetImageGenerator *_imageGenerator;
}

@property(nonatomic) _Bool inUse; // @synthesize inUse=_inUse;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

@end

