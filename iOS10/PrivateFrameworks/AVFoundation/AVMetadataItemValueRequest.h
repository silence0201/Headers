//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVMetadataItem, AVMetadataItemValueRequestInternal;

@interface AVMetadataItemValueRequest : NSObject
{
    AVMetadataItemValueRequestInternal *_valueRequest;
}

+ (id)metadataItemValueRequestWithMetadataItem:(id)arg1;
- (void)respondWithError:(id)arg1;
- (void)respondWithValue:(id)arg1;
- (id)error;
- (id)value;
@property(readonly) __weak AVMetadataItem *metadataItem;
- (void)finalize;
- (void)dealloc;
- (id)initWithMetadataItem:(id)arg1;

@end

