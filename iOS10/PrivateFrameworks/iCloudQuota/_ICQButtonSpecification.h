//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICQLink, NSDictionary;

@interface _ICQButtonSpecification : NSObject
{
    NSDictionary *_serverDict;
    ICQLink *_buttonLink;
    NSDictionary *_linkForBundleIdentifier;
}

+ (id)buttonSpecificationSampleForLevel:(long long)arg1;
@property(retain, nonatomic) NSDictionary *linkForBundleIdentifier; // @synthesize linkForBundleIdentifier=_linkForBundleIdentifier;
- (void).cxx_destruct;
- (id)linkForBundleIdentifier:(id)arg1;
- (id)buttonLink;
- (id)initWithServerDictionary:(id)arg1;

@end
