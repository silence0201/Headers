//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CFPDDataBuffer : NSObject
{
}

+ (id)newBufferFromPropertyList:(void *)arg1;
+ (id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(BOOL)arg2;
+ (id)newBufferFromCFData:(struct __CFData *)arg1;
- (BOOL)purgable;
- (void)endAccessing;
- (BOOL)beginAccessing;
- (BOOL)validatePlist;
- (void *)copyPropertyListWithMutability:(unsigned long long)arg1;
- (id)copyXPCData;
- (struct __CFData *)copyCFData;
- (unsigned long long)length;
- (void *)bytes;

@end
