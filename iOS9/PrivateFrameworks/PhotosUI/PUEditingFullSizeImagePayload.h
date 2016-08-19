//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface PUEditingFullSizeImagePayload : NSObject <NSSecureCoding>
{
    NSURL *_url;
    long long _imageOrientation;
    NSString *_sandboxExtensionToken;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property(nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(retain, nonatomic, setter=setURL:) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

