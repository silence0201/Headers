//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelGenre : MPModelObject
{
    NSString *_name;
    CDUnknownBlockType _artworkCatalogBlock;
}

+ (id)__MPModelPropertyGenreArtwork__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__MPModelPropertyGenreName__PROPERTY;
+ (id)__name__KEY;
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)descriptionWithType:(long long)arg1;

@end

