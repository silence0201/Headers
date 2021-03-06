//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEODBReader.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceDataDBReader : GEODBReader
{
    struct sqlite3_stmt *_sqlMUIDForPhoneNumber;
    struct sqlite3_stmt *_sqlAllComponents;
    struct sqlite3_stmt *_sqlAllPhoneNumbers;
    struct sqlite3_stmt *_sqlAllComponentsPerPlaceData;
    struct sqlite3_stmt *_sqlAllComponentsForPlaceData;
}

- (id)allCacheEntries;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg1;
- (id)placeDataForPhoneNumber:(unsigned long long)arg1;
- (id)placeDataForKey:(struct _GEOTileKey)arg1;
- (id)placeDataForMUID:(unsigned long long)arg1;
- (id)_placeDataForIdentifier:(unsigned long long)arg1;
- (void)_openDBIfNotAlreadyOpen;
- (void)_openDB;
- (void)dealloc;
- (id)componentForKey:(union _GEOPlaceDataComponentKey)arg1;

@end

