//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;

@interface MPMediaItemArtwork : NSObject
{
    UIImage *_image;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect imageCropRect;
@property(readonly, nonatomic) struct CGRect bounds;
- (id)imageWithSize:(struct CGSize)arg1;
- (id)initWithImage:(id)arg1;
- (id)init;

@end
