//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextAttachmentCell.h>

#import <NotesShared/NSTextAttachmentCell-Protocol.h>

@class NSString, NSTextAttachment;

@interface ICTextAttachmentCell : NSTextAttachmentCell <NSTextAttachmentCell>
{
}

- (BOOL)wantsToTrackMouse;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;

// Remaining properties
@property NSTextAttachment *attachment;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

