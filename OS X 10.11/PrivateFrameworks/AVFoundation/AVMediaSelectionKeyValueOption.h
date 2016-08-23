//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVWeakReference, NSDictionary, NSString;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption
{
    id _groupID;
    id _groupMediaType;
    NSString *_optionMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)locale;
- (BOOL)isPlayable;
- (id)mediaSubTypes;
- (id)mediaType;
- (id)_groupMediaType;
- (id)_groupID;
- (id)group;
- (id)dictionary;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;

@end
