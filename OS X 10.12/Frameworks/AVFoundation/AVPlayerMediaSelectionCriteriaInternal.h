//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface AVPlayerMediaSelectionCriteriaInternal : NSObject
{
    NSArray *_preferredLanguages;
    NSArray *_requiredMediaCharacteristics;
    NSArray *_preferredMediaCharacteristics;
    NSArray *_precludedMediaCharacteristics;
    NSArray *_preferredMediaSubTypes;
    NSArray *_precludedMediaSubTypes;
    BOOL _preferMultichannelAudio;
    BOOL _precludeMultichannelAudio;
}

@property(nonatomic) BOOL precludeMultichannelAudio; // @synthesize precludeMultichannelAudio=_precludeMultichannelAudio;
@property(nonatomic) BOOL preferMultichannelAudio; // @synthesize preferMultichannelAudio=_preferMultichannelAudio;
@property(retain, nonatomic) NSArray *precludedMediaSubTypes; // @synthesize precludedMediaSubTypes=_precludedMediaSubTypes;
@property(retain, nonatomic) NSArray *preferredMediaSubTypes; // @synthesize preferredMediaSubTypes=_preferredMediaSubTypes;
@property(retain, nonatomic) NSArray *precludedMediaCharacteristics; // @synthesize precludedMediaCharacteristics=_precludedMediaCharacteristics;
@property(retain, nonatomic) NSArray *preferredMediaCharacteristics; // @synthesize preferredMediaCharacteristics=_preferredMediaCharacteristics;
@property(retain, nonatomic) NSArray *requiredMediaCharacteristics; // @synthesize requiredMediaCharacteristics=_requiredMediaCharacteristics;
@property(retain, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
- (void)dealloc;

@end
