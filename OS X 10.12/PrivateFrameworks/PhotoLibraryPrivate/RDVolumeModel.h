//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSDate, NSString, RDVolumeTable;

@interface RDVolumeModel : RDModel
{
}

+ (Class)tableClass;
@property(nonatomic) long long bookmarkSSBId;
@property(nonatomic) long long bookmarkId;
@property(copy, nonatomic) NSDate *modDate;
@property(copy, nonatomic) NSDate *createDate;
@property(nonatomic) BOOL isOffline;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSString *diskUuid;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) RDVolumeTable *table;

@end

