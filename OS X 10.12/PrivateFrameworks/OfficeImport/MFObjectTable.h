//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFObjectTable : NSObject
{
    NSMutableArray *m_objects;
}

- (int)size;
- (id)getObject:(unsigned int)arg1;
- (int)putObject:(id)arg1:(unsigned int)arg2;
- (unsigned int)insertPos;
- (void)clear;
- (int)selectInto:(int)arg1:(id)arg2;
- (int)deleteObject:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end
