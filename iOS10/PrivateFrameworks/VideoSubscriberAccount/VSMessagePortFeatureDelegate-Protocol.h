//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class VSMessagePortFeature, VSScriptMessage;

@protocol VSMessagePortFeatureDelegate <NSObject>
- (void)messagePort:(VSMessagePortFeature *)arg1 didReceiveMessage:(VSScriptMessage *)arg2;
@end

