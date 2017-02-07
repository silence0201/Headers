//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Messages/MSMessageLayout.h>

#import <Messages/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL, UIImage;

@interface MSMessageTemplateLayout : MSMessageLayout <NSSecureCoding>
{
    NSString *_caption;
    NSString *_subcaption;
    NSString *_trailingCaption;
    NSString *_trailingSubcaption;
    NSURL *_mediaFileURL;
    UIImage *_image;
    NSData *_mediaData;
    NSString *_mediaType;
    NSString *_imageTitle;
    NSString *_imageSubtitle;
    long long _tapAction;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long tapAction; // @synthesize tapAction=_tapAction;
@property(copy, nonatomic) NSString *imageSubtitle; // @synthesize imageSubtitle=_imageSubtitle;
@property(copy, nonatomic) NSString *imageTitle; // @synthesize imageTitle=_imageTitle;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSData *mediaData; // @synthesize mediaData=_mediaData;
@property(copy, nonatomic) NSString *trailingSubcaption; // @synthesize trailingSubcaption=_trailingSubcaption;
@property(copy, nonatomic) NSString *trailingCaption; // @synthesize trailingCaption=_trailingCaption;
@property(copy, nonatomic) NSString *subcaption; // @synthesize subcaption=_subcaption;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSURL *mediaFileURL; // @synthesize mediaFileURL=_mediaFileURL;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

