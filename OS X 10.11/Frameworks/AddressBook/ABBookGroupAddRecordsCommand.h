//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABBookUndoableCommand.h>

@class ABBookGroupAddMembersCommand, ABBookGroupAddSubgroupsCommand, NSSet;

@interface ABBookGroupAddRecordsCommand : ABBookUndoableCommand
{
    ABBookGroupAddMembersCommand *_addMembersCommand;
    ABBookGroupAddSubgroupsCommand *_addSubgroupsCommand;
}

- (void)executeUndo;
- (void)execute;
@property(readonly) NSSet *newSubgroupUids;
@property(readonly) NSSet *newMemberUids;
- (id)actionName;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 group:(id)arg2 newMemberUids:(id)arg3 newSubgroupUids:(id)arg4;

@end
