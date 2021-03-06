//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CKItemArtworkImage : NSObject
{
    long long _height;
    NSString *_imageKind;
    BOOL _prerendered;
    NSURL *_url;
    long long _width;
}

@property(readonly, nonatomic) long long width; // @synthesize width=_width;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) NSString *imageKind; // @synthesize imageKind=_imageKind;
@property(readonly, nonatomic) long long height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)initWithArtworkDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

