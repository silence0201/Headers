//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UISettings.h>

#import <PrototypeTools/_UISettingsKeyObserver-Protocol.h>

@class NSData, NSString, UIImage;

@interface PTSImageSettings : _UISettings <_UISettingsKeyObserver>
{
    _Bool _unarchiving;
    UIImage *_image;
    NSData *_pngData;
    long long _imageOrientation;
    double _imageScale;
}

@property double imageScale; // @synthesize imageScale=_imageScale;
@property long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(retain) NSData *pngData; // @synthesize pngData=_pngData;
@property(retain) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)_updateImageProperties;
- (void)_updateImageData;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
