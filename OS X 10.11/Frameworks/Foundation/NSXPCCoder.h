//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCoder.h>

@protocol NSObject;

@interface NSXPCCoder : NSCoder
{
    id <NSObject> _userInfo;
    id _reserved1;
}

@property(retain) id <NSObject> userInfo; // @synthesize userInfo=_userInfo;
- (void)dealloc;
- (id)init;
- (void *)decodeXPCObjectOfType:(struct _xpc_type_s *)arg1 forKey:(id)arg2;
- (void *)decodeXPCObjectForKey:(id)arg1;
- (void)encodeXPCObject:(void *)arg1 forKey:(id)arg2;
- (BOOL)requiresSecureCoding;

@end
