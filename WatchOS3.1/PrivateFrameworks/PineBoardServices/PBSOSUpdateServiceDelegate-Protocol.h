//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PineBoardServices/NSObject-Protocol.h>

@class NSDictionary;

@protocol PBSOSUpdateServiceDelegate <NSObject>
- (void)osUpdateServiceDidFinishApplyWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidEncounterSlowUpdateWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidUpdateApplyProgressWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidStartApplyWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidStartRedownloadWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidFinishDownloadWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidUpdateDownloadProgressWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidStartDownloadWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidFinishCheckWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidStartCheckWithData:(NSDictionary *)arg1;
@end

