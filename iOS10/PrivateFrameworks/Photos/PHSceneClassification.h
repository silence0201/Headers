//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHSceneClassification : NSObject
{
    unsigned int _sceneIdentifier;
    double _confidence;
}

+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) unsigned int sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToSceneClassification:(id)arg1;
- (id)initWithSceneIdentifier:(unsigned int)arg1 confidence:(double)arg2;

@end

