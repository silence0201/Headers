//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ECMappingInfo : NSObject
{
    NSString *mSheetName;
}

+ (id)mappingInfoWithSheetName:(id)arg1;
@property(readonly, nonatomic) NSString *sheetName; // @synthesize sheetName=mSheetName;
@property(readonly, nonatomic) int columnOffset;
@property(readonly, nonatomic) int rowOffset;
- (void)dealloc;
- (id)initWithSheetName:(id)arg1;

@end
