//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/HSBrowserDelegate-Protocol.h>

@class NSString;

@interface MPHSBrowserDelegate : NSObject <HSBrowserDelegate>
{
}

- (void)browser:(id)arg1 didRemoveLibrary:(id)arg2;
- (void)browser:(id)arg1 didAddLibrary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

