//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface __NSWindowData : NSObject
{
    id window;
    long long windowNum;
    long long realWindowNum;
    struct _flags {
        unsigned int visible:1;
        unsigned int hidesOnDeactivate:1;
        unsigned int modal:1;
        unsigned int _RESERVED:13;
    } flags;
}

@end
