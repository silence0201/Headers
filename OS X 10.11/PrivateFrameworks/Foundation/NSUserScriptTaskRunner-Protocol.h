//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSFileHandle, NSString;

@protocol NSUserScriptTaskRunner
- (oneway void)executeScript:(NSFileHandle *)arg1 interpreter:(NSString *)arg2 arguments:(NSArray *)arg3 standardInput:(NSFileHandle *)arg4 standardOutput:(NSFileHandle *)arg5 standardError:(NSFileHandle *)arg6 showingProgress:(BOOL)arg7:(void (^)(long long, int))arg8;
@end

