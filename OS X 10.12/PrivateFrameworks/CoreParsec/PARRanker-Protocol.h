//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSDictionary, PARRankerParameters, PARResponse;

@protocol PARRanker <NSObject>
@property(readonly) PARRankerParameters *parameters;
- (void)rank:(PARResponse *)arg1 withAlgorithms:(NSDictionary *)arg2 enableSectionRanking:(BOOL)arg3;
- (void)rank:(PARResponse *)arg1 withAlgorithms:(NSDictionary *)arg2;
- (void)rank:(PARResponse *)arg1 enableSectionRanking:(BOOL)arg2;
- (void)rank:(PARResponse *)arg1;
@end
