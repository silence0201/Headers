//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSWPImageBulletProvider : NSObject
{
    NSMutableArray *_images;
    NSMutableArray *_filenames;
}

+ (id)sharedInstance;
- (id)p_predefinedImageNames;
- (id)p_pathToPredefinedImages;
- (id)dataForImageBullet:(id)arg1 withContext:(id)arg2;
- (id)dataForDefaultImageBulletWithContext:(id)arg1;
@property(readonly, nonatomic) NSArray *predefinedImages;

@end
