//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface RDAlbumVersionCountByMediaType : NSObject
{
    NSDictionary *_countByType;
    unsigned long long _burstCount;
}

+ (id)versionCountsByMediaTypeForVersions:(id)arg1 includeBursts:(BOOL)arg2;
- (void).cxx_destruct;
- (unsigned long long)burstCount;
- (unsigned long long)imageCountForSummary;
- (unsigned long long)countForType:(unsigned char)arg1;
- (id)initWithCountByMediaTypeDictionary:(id)arg1 burstCount:(unsigned long long)arg2;

@end
