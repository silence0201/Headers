//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TSUZipWriterEntry : NSObject
{
    unsigned int _CRC;
    NSString *_name;
    unsigned long long _size;
    unsigned long long _offset;
}

@property(nonatomic) unsigned int CRC; // @synthesize CRC=_CRC;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
