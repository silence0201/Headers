//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject-Protocol.h>

@class NSArray, NSUUID, NSXPCListenerEndpoint;

@protocol _NSExtensionContextVending <NSObject>
- (void)_beginRequestWithExtensionItems:(NSArray *)arg1 listenerEndpoint:(NSXPCListenerEndpoint *)arg2 withContextUUID:(NSUUID *)arg3 completion:(void (^)(NSUUID *, NSError *))arg4;
@end
