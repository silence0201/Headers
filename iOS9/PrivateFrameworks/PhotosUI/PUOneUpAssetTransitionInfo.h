//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface PUOneUpAssetTransitionInfo : NSObject
{
    UIImage *_image;
    CDStruct_1b6d18a9 _seekTime;
}

+ (id)oneUpAssetTransitionInfoWithImage:(id)arg1 andSeekTime:(CDStruct_1b6d18a9)arg2;
+ (id)oneUpAssetTransitionInfoWithImage:(id)arg1;
- (void)_setSeekTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) CDStruct_1b6d18a9 seekTime; // @synthesize seekTime=_seekTime;
- (void)_setImage:(id)arg1;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)init;

@end

