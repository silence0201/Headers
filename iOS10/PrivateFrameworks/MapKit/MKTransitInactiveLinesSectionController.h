//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKTransitSectionController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MKTransitInactiveLinesSectionController : MKTransitSectionController
{
    NSArray *_inactiveLines;
}

- (void).cxx_destruct;
- (void)_buildRows;
- (void)_setNeedsBuildRows;
- (id)_pagingFilter;
@property(readonly, nonatomic) NSArray *inactiveLines; // @synthesize inactiveLines=_inactiveLines;
- (id)init;

@end
