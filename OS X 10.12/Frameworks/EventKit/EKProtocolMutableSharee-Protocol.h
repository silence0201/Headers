//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKProtocolMutableObject-Protocol.h>
#import <EventKit/EKProtocolSharee-Protocol.h>

@class NSManagedObjectID, NSString, NSURL;

@protocol EKProtocolMutableSharee <EKProtocolSharee, EKProtocolMutableObject>
@property(retain, nonatomic) NSManagedObjectID *managedObjectID;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSURL *URL;
- (void)setAccessLevel:(NSString *)arg1;
- (void)setStatus:(NSString *)arg1;
@end
