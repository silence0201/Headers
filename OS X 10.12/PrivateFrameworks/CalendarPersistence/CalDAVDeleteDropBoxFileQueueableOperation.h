//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVEntityQueueableOperation.h>

@class CALEntity, NSString;

@interface CalDAVDeleteDropBoxFileQueueableOperation : CalDAVEntityQueueableOperation
{
    NSString *_attachmentName;
    CALEntity *_masterEntity;
}

- (void)performOperation;
- (id)masterEntity;
- (void)dealloc;
- (id)initWithChangeRequest:(id)arg1 attachmentName:(id)arg2 entity:(id)arg3 fromSource:(id)arg4;

@end
