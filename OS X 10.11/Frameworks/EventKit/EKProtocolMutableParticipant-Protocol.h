//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKProtocolMutableObject-Protocol.h>
#import <EventKit/EKProtocolParticipant-Protocol.h>

@class NSString;

@protocol EKProtocolMutableParticipant <EKProtocolParticipant, EKProtocolMutableObject>
- (void)setScheduleForceSend:(BOOL)arg1;
- (void)setStatus:(NSString *)arg1;
- (void)setReplyRequested:(BOOL)arg1;
@end
