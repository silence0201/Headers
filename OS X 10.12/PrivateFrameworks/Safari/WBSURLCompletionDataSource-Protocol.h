//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSString, WBSURLCompletionUserTypedString;
@protocol WBSURLCompletionMatchData;

@protocol WBSURLCompletionDataSource <NSObject>
- (id <WBSURLCompletionMatchData>)fakeBookmarkMatchDataWithURLString:(NSString *)arg1 title:(NSString *)arg2;
- (void)enumerateMatchDataForTypedStringHint:(WBSURLCompletionUserTypedString *)arg1 withBlock:(void (^)(NSString *, NSString *, id <WBSURLCompletionMatchData> (^)(void)))arg2;
@end

