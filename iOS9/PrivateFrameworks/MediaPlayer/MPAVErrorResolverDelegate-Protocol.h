//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPAVErrorResolver, NSError;

@protocol MPAVErrorResolverDelegate <NSObject>

@optional
- (void)errorResolver:(MPAVErrorResolver *)arg1 didResolveError:(NSError *)arg2 withResolution:(long long)arg3;
@end

