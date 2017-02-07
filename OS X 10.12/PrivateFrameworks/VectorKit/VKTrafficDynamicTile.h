//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTile.h>

__attribute__((visibility("hidden")))
@interface VKTrafficDynamicTile : VKTile
{
    struct _GEOTileKey _downloadKey;
    struct shared_ptr<zilch::TrafficDynamicTile> _tile;
    struct unordered_multimap<long long, const zilch::TrafficDynamicTile::Flow *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, const zilch::TrafficDynamicTile::Flow *>>> _flows;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct Incident *)incidentAtIndex:(unsigned long long)arg1;
- (int)flowForRoadId:(long long)arg1 buffer:(const struct Flow **)arg2 maxSize:(int)arg3;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1 downloadKey:(const struct _GEOTileKey *)arg2 data:(id)arg3;
@property(readonly, nonatomic) long long updateTime;
@property(readonly, nonatomic) unsigned long long incidentCount;

@end
