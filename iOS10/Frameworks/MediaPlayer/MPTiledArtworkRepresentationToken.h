//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol NSCopying;

@interface MPTiledArtworkRepresentationToken : NSObject
{
    id <NSCopying> _revisionIdentifier;
    NSArray *_tileArtworkVisualIdenticalityIdentifiers;
}

@property(copy, nonatomic) NSArray *tileArtworkVisualIdenticalityIdentifiers; // @synthesize tileArtworkVisualIdenticalityIdentifiers=_tileArtworkVisualIdenticalityIdentifiers;
@property(copy, nonatomic) id <NSCopying> revisionIdentifier; // @synthesize revisionIdentifier=_revisionIdentifier;
- (void).cxx_destruct;

@end

