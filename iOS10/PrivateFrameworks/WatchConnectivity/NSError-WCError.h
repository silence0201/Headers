//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (WCError)
+ (id)userInfoDictionaryWithErrorStringsForErrorCode:(long long)arg1;
+ (id)wcErrorFromInternalError:(id)arg1;
+ (id)wcInternalErrorWithCode:(long long)arg1;
+ (id)wcErrorWithCode:(long long)arg1 underlyingWCErrorWithCode:(long long)arg2;
+ (id)wcErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)wcErrorFromReceivedCode:(long long)arg1;
+ (id)wcErrorWithCode:(long long)arg1;
+ (id)wcErrorWithCode:(long long)arg1 userInfo:(id)arg2;
@end

