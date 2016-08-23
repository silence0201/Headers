//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVOutputSettingsValidation-Protocol.h>

@class AVMediaFileType;

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation>
{
    AVMediaFileType *_fileType;
}

+ (id)mediaFileOutputSettingsValidatorForFileType:(id)arg1;
+ (void)initialize;
- (BOOL)validateVideoOutputSettings:(id)arg1 reason:(id *)arg2;
- (BOOL)validateAudioOutputSettings:(id)arg1 reason:(id *)arg2;
@property(readonly, nonatomic) AVMediaFileType *fileType;
- (void)dealloc;
- (id)initWithFileType:(id)arg1;
- (id)init;

@end
