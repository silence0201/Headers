//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHObjectPropertySet-Protocol.h>

@class NSString, PHFace;
@protocol PHFetchDictionaryAccessing;

@protocol PHFacePropertySet <PHObjectPropertySet>
+ (NSString *)propertySetName;
- (id)initWithFetchDictionary:(id <PHFetchDictionaryAccessing>)arg1 face:(PHFace *)arg2 prefetched:(_Bool)arg3;
@end

