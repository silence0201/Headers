//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol StreamingUnzipDelegateProtocol
- (void)extractionEnteredPassThroughMode;
- (void)extractionCompleteAtArchivePath:(NSString *)arg1;
- (void)setExtractionProgress:(double)arg1;
@end

