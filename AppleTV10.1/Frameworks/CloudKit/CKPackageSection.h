//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface CKPackageSection : NSObject
{
    long long _index;
    NSData *_signature;
    unsigned long long _size;
}

@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithIndex:(long long)arg1 signature:(id)arg2 size:(unsigned long long)arg3;

@end

