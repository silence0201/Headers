//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMDaemonCore/IMServicePlugInGroupListSupport-Protocol.h>

@class NSArray, NSString;

@protocol IMServicePlugInGroupListEditingSupport <IMServicePlugInGroupListSupport>
- (oneway void)removeHandles:(NSArray *)arg1 fromGroup:(NSString *)arg2;
- (oneway void)addHandles:(NSArray *)arg1 toGroup:(NSString *)arg2;
- (oneway void)renameGroup:(NSString *)arg1 toGroup:(NSString *)arg2;
- (oneway void)removeGroups:(NSArray *)arg1;
- (oneway void)addGroups:(NSArray *)arg1;
@end
