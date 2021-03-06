//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABBookUndoableCommand.h>

@class ABBookGroupCopyCommand, ABBookGroupDeleteCommand;

@interface ABBookGroupCutCommand : ABBookUndoableCommand
{
    ABBookGroupCopyCommand *_copyCommand;
    ABBookGroupDeleteCommand *_deleteCommand;
}

- (void)executeRedo;
- (void)executeUndo;
- (void)execute;
- (id)actionName;
- (void)dealloc;
- (id)initWithCopyCommand:(id)arg1 deleteCommand:(id)arg2;

@end

