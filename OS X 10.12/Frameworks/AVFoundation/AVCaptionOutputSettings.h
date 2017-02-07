//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary;

@interface AVCaptionOutputSettings : AVOutputSettings
{
    NSDictionary *_captionSettingsDictionary;
}

+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;
- (BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id *)arg2;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
- (BOOL)willYieldCompressedSamples;
- (id)compatibleMediaTypes;
- (id)initWithCaptionSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end
