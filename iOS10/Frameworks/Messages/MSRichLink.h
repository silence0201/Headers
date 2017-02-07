//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Messages/NSCopying-Protocol.h>
#import <Messages/NSSecureCoding-Protocol.h>

@class LPLinkMetadata, NSURL;

@interface MSRichLink : NSObject <NSCopying, NSSecureCoding>
{
    LPLinkMetadata *_linkMetadata;
    NSURL *_URL;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) LPLinkMetadata *_linkMetadata; // @synthesize _linkMetadata;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

@end
