//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NFFieldDetectSession, NFTechnologyEvent;

@protocol NFFieldDetectSessionDelegate <NSObject>

@optional
- (void)fieldDetectSessionDidEndUnexpectedly:(NFFieldDetectSession *)arg1;
- (void)fieldDetectSession:(NFFieldDetectSession *)arg1 didDetectTechnology:(NFTechnologyEvent *)arg2;
- (void)fieldDetectSession:(NFFieldDetectSession *)arg1 didDetectField:(BOOL)arg2;
@end

