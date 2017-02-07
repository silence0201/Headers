//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoRedoChange.h>

@class NSSet;

@interface RDAttachmentsInTrashChange : RDUndoRedoChange
{
    BOOL _putInTrash;
    unsigned short _reason;
    NSSet *_attachmentAddresses;
}

@property(readonly, nonatomic) unsigned short reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) BOOL putInTrash; // @synthesize putInTrash=_putInTrash;
@property(readonly, nonatomic) NSSet *attachmentAddresses; // @synthesize attachmentAddresses=_attachmentAddresses;
- (void).cxx_destruct;
- (void)redo;
- (void)undo;
- (id)description;
- (id)initWithAttachmentAddresses:(id)arg1 putInTrash:(BOOL)arg2 reason:(unsigned short)arg3;

@end
