//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGQPPhrasebook : NSObject
{
    struct {
        union {
            void *base;
            struct *hdr;
        } ;
        unsigned long long size;
        int fd;
    } _pb;
}

- (void)enumerateEntitiesInText:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
