//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TVSInterstitialCollection : NSObject
{
    NSArray *_interstitials;
    NSArray *_interstitialsWithAdjacentsMerged;
    id _backingData;
}

@property(retain, nonatomic) id backingData; // @synthesize backingData=_backingData;
@property(retain, nonatomic) NSArray *interstitialsWithAdjacentsMerged; // @synthesize interstitialsWithAdjacentsMerged=_interstitialsWithAdjacentsMerged;
@property(retain, nonatomic) NSArray *interstitials; // @synthesize interstitials=_interstitials;
- (void).cxx_destruct;
- (id)mergedInterstitialForTime:(double)arg1;
- (id)interstitialForTime:(double)arg1;
- (double)timeAdjustedByIncludingInterstitials:(double)arg1;
- (double)timeAdjustedByRemovingInterstitials:(double)arg1;
- (id)initWithInterstitials:(id)arg1;

@end

