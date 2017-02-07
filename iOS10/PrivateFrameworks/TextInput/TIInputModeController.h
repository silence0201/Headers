//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TIInputModeController : NSObject
{
    NSArray *_supportedInputModeIdentifiers;
    NSArray *_supportedInputModeLanguageAndRegions;
    NSString *currentLocale;
    NSArray *preferredLanguages;
    NSArray *enabledInputModes;
    NSArray *defaultInputModes;
}

+ (id)_inputModesForLocale:(id)arg1 language:(id)arg2 modeFetcher:(CDUnknownBlockType)arg3;
+ (id)sharedInputModeController;
@property(copy, nonatomic) NSArray *defaultInputModes; // @synthesize defaultInputModes;
@property(copy, nonatomic) NSArray *enabledInputModes; // @synthesize enabledInputModes;
@property(copy, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages;
@property(copy, nonatomic) NSString *currentLocale; // @synthesize currentLocale;
@property(readonly) NSArray *enabledInputModeIdentifiers;
@property(readonly) NSArray *supportedInputModeLanguageAndRegions;
@property(readonly) NSArray *supportedInputModeIdentifiers;
- (id)defaultEnabledInputModesForCurrentLocale;
- (void)dealloc;

@end
