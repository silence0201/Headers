//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSString;

@interface CPLContainerRelation : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _keyAsset;
    NSString *_containerIdentifier;
    long long _position;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isKeyAsset) BOOL keyAsset; // @synthesize keyAsset=_keyAsset;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)proposedIdentifierForItemIdentifier:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
