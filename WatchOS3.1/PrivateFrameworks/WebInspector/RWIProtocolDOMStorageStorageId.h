//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDOMStorageStorageId : RWIProtocolJSONObject
{
}

@property(nonatomic) _Bool isLocalStorage;
@property(copy, nonatomic) NSString *securityOrigin;
- (id)initWithSecurityOrigin:(id)arg1 isLocalStorage:(_Bool)arg2;

@end
