//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/SFUInputStream-Protocol.h>

@protocol OISFUBufferedInputStream <SFUInputStream>
- (BOOL)seekWithinBufferToOffset:(long long)arg1;
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;
@end

