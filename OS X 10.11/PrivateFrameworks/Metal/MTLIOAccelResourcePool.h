//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLIOAccelDevice;
@protocol MTLDevice;

@interface MTLIOAccelResourcePool : NSObject
{
    struct _MTLIOAccelResourcePoolPrivate _priv;
    Class _resourceClass;
    MTLIOAccelDevice<MTLDevice> *_device;
    struct IOAccelNewResourceArgs *_resourceArgs;
    unsigned int _resourceArgsSize;
    unsigned long long age_to_purge;
}

@property(readonly) unsigned int resourceArgsSize; // @synthesize resourceArgsSize=_resourceArgsSize;
@property(readonly) struct IOAccelNewResourceArgs *resourceArgs; // @synthesize resourceArgs=_resourceArgs;
- (void)purge;
- (int)availableCount;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 resourceArgs:(const struct IOAccelNewResourceArgs *)arg3 resourceArgsSize:(unsigned int)arg4 options:(id)arg5;

@end
