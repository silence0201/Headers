//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceServices/NSObject-Protocol.h>

@class NSError, NSString, VSInstrumentMetrics;

@protocol VSSpeechServiceDelegate <NSObject>
- (oneway void)speechRequestSuccessWithInstrumentMetrics:(VSInstrumentMetrics *)arg1;
- (oneway void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(NSString *)arg2 error:(NSError *)arg3;
- (oneway void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2;
- (oneway void)speechRequestDidContinue;
- (oneway void)speechRequestDidPause;
- (oneway void)speechRequestDidStart;
@end

