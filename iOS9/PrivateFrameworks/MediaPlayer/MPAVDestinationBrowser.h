//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPAVRoutingController;

@interface MPAVDestinationBrowser : NSObject
{
    MPAVRoutingController *_routingController;
    _Bool _scansForDestinationsWhenEnteringForeground;
    _Bool _isScanning;
}

- (void).cxx_destruct;
- (void)_endScanningForDestinationsNotification:(id)arg1;
- (void)_beginScanningForDestinationsNotification:(id)arg1;
@property(nonatomic) _Bool scansForDestinationsWhenEnteringForeground;
- (void)endScanningForDestinations;
- (void)beginScanningForDestinations;
- (void)dealloc;
- (id)init;

@end

