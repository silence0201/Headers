//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@interface MPStoreModelPumpkinPersonBuilder : MPStoreModelObjectBuilder
{
    struct {
        unsigned int initialized:1;
        unsigned int name:1;
        unsigned int handle:1;
        unsigned int biography:1;
        unsigned int hasPendingFollowRequestFromCurrentUser:1;
        unsigned int isFollowable:1;
        unsigned int isFollowedByCurrentUser:1;
        unsigned int isPrivate:1;
        unsigned int personType:1;
        unsigned int artwork:1;
    } _requestedPumpkinPersonProperties;
}

+ (id)allSupportedProperties;
- (void)_setupRequestedProperties;
- (id)modelObjectWithPumpkinProfileMetadata:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;

@end

