//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVServices/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVSPodcastGUID : NSObject <NSSecureCoding>
{
    NSString *_guid;
    NSString *_episodeURL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *stringValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGUID:(id)arg1 episodeURL:(id)arg2;
- (id)init;

@end

