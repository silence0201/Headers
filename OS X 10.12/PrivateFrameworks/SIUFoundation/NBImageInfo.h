//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NBImageInfo : NSObject
{
    NSMutableDictionary *_imageInfo;
}

@property(retain, nonatomic) NSMutableDictionary *imageInfo; // @synthesize imageInfo=_imageInfo;
- (id)supportedModelsForImage:(id)arg1;
- (id)generateKnownList;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)writeToImage:(id)arg1;
- (void)setNetBoot;
- (void)setNetInstall;
- (void)syncWithDictionary:(id)arg1;
- (void)dealloc;
- (id)init;

@end
