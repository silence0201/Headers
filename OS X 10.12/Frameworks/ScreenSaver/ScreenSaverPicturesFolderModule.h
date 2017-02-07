//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenSaver/ScreenSaverImagesModule.h>

#import <ScreenSaver/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface ScreenSaverPicturesFolderModule : ScreenSaverImagesModule <NSCopying>
{
    NSURL *_url;
    NSString *_uuid;
}

+ (id)picturesFolderModuleFromPrefsDictionary:(id)arg1;
+ (id)picturesFolderModuleWithPath:(id)arg1;
- (BOOL)requiresGraphicsAcceleration;
- (void)refreshLocation;
- (id)dictionaryRepresentation;
- (BOOL)isSlideshow;
- (id)uuid;
- (id)url;
- (id)displayName;
- (id)defaultsName;
- (id)name;
- (id)path;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setUUID:(id)arg1;
- (void)_setURL:(id)arg1;
- (void)dealloc;

@end
