//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface LiExclusiveFileLock : NSObject
{
    NSURL *_url;
    int _fd;
}

- (void).cxx_destruct;
- (id)lockFailure;
- (id)lockData;
- (void)unlock;
- (BOOL)lockWithError:(id *)arg1;
@property(readonly, nonatomic) BOOL isLocked;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

