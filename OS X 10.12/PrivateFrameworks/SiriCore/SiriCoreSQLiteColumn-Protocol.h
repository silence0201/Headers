//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriCore/NSObject-Protocol.h>

@class NSString;
@protocol SiriCoreSQLiteValue;

@protocol SiriCoreSQLiteColumn <NSObject>
@property(readonly, copy, nonatomic) id <SiriCoreSQLiteValue> defaultValue;
@property(readonly, nonatomic) BOOL isNotNull;
@property(readonly, nonatomic) BOOL isPrimaryKey;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) long long identifier;
@end
