//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoConference/DotMacConfiguration.h>

__attribute__((visibility("hidden")))
@interface CommNATConfiguration : DotMacConfiguration
{
    _Bool _gotServerInfo;
    unsigned int _mainIP;
    unsigned short _mainPort0;
    unsigned short _mainPort1;
    unsigned int _cohortIP;
    unsigned short _cohortPort;
}

- (void)getConfiguration;
- (int)getServerInfo:(unsigned int *)arg1 pMainPort0:(unsigned short *)arg2 pMainPort1:(unsigned short *)arg3 pCohortIP:(unsigned int *)arg4 pCohortPort:(unsigned short *)arg5;
- (void)dealloc;
- (id)init;

@end

