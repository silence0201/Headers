//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, XMPPNode, XMPPNodeStream;

@protocol XMPPNodeStreamDelegate
- (void)nodeStream:(XMPPNodeStream *)arg1 finishedNode:(XMPPNode *)arg2;
- (void)nodeStream:(XMPPNodeStream *)arg1 startedNode:(XMPPNode *)arg2;
- (void)nodeStream:(XMPPNodeStream *)arg1 error:(NSError *)arg2;
- (void)nodeStream:(XMPPNodeStream *)arg1 connected:(BOOL)arg2;
@end
