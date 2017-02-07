//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface WFWhitelistSiteBuffer : NSObject
{
    NSMutableSet *_siteSet;
    NSMutableArray *_siteBuffer;
    unsigned long long maxSize;
}

@property(retain) NSMutableArray *siteBuffer; // @synthesize siteBuffer=_siteBuffer;
@property(retain) NSMutableSet *siteSet; // @synthesize siteSet=_siteSet;
@property unsigned long long maxSize;
- (id)description;
- (unsigned long long)count;
- (BOOL)containsMetasitePrefixOfURLString:(id)arg1;
- (BOOL)containsURLString:(id)arg1;
- (void)addURLString:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)trimToSize:(unsigned long long)arg1;

@end
