//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MusicForYouRecommendationsResponse, NSOperationQueue;

@interface MCDForYouContentManager : NSObject
{
    _Bool _hasAdditionalRecommendations;
    MusicForYouRecommendationsResponse *_recommendationsResponse;
    long long _modelRevisionID;
    unsigned long long _additionalRecommendationsLoadedCount;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) unsigned long long additionalRecommendationsLoadedCount; // @synthesize additionalRecommendationsLoadedCount=_additionalRecommendationsLoadedCount;
@property(nonatomic) long long modelRevisionID; // @synthesize modelRevisionID=_modelRevisionID;
@property(retain, nonatomic) MusicForYouRecommendationsResponse *recommendationsResponse; // @synthesize recommendationsResponse=_recommendationsResponse;
@property(nonatomic) _Bool hasAdditionalRecommendations; // @synthesize hasAdditionalRecommendations=_hasAdditionalRecommendations;
- (void).cxx_destruct;
- (_Bool)_responseHasContent:(id)arg1;
- (id)_newForYouRecommendationsRequestWithType:(unsigned long long)arg1;
- (id)lastRecommendation;
- (void)_additionalRecommendationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadMCDForYouContentWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end
