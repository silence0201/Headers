//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString;

@protocol INSearchForFilesIntentResponseExport <NSObject, JSExport>
@property(copy) NSString *query;
@property(copy) NSNumber *numResults;
@property(copy) NSArray *entities;
@property(copy) NSNumber *success;
@property(readonly) long long code;
@end

