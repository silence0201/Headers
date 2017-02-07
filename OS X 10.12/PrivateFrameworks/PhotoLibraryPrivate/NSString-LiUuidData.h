//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (LiUuidData)
@property(readonly, nonatomic) BOOL isSupportedUuidString;
@property(readonly, nonatomic) BOOL isMercuryUuidString;
@property(readonly, nonatomic) BOOL isCanonicalUuidString;
- (BOOL)isEquivalentToUuidString:(id)arg1;
- (id)uuidData;
- (id)mercuryUuidString;
- (id)canonicalUuidString;
@end
