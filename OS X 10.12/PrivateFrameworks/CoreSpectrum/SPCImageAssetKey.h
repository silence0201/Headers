//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpectrum/SPCAssetKey.h>

#import <CoreSpectrum/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface SPCImageAssetKey : SPCAssetKey <NSCopying>
{
}

- (id)description;
@property(copy, nonatomic) NSArray *qualifiers;
@property(nonatomic) unsigned long long planeIndex;
@property(nonatomic) unsigned long long sliceIndex;
@property(nonatomic) unsigned long long rowIndex;
@property(nonatomic) unsigned long long columnIndex;
@property(nonatomic) unsigned long long layerIndex;
@property(copy, nonatomic) NSString *layerKeyPath;
@property(copy, nonatomic) NSString *controlDirection;
@property(copy, nonatomic) NSString *controlSize;
@property(nonatomic) double scaleFactor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned long long resolution;

@end
