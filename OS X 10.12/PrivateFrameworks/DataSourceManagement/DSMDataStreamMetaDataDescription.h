//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataSourceManagement/NSCoding-Protocol.h>

@class NSString;

@interface DSMDataStreamMetaDataDescription : NSObject <NSCoding>
{
    int _metaDataType;
    NSString *_name;
    NSString *_detailedDescription;
}

@property(readonly) int metaDataType; // @synthesize metaDataType=_metaDataType;
@property(readonly) NSString *detailedDescription; // @synthesize detailedDescription=_detailedDescription;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 andDetailedDescription:(id)arg2 andMetaDataType:(int)arg3;

@end
