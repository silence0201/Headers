//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCDocumentItem, NSData, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingModifyAccessOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    BRCDocumentItem *_document;
    BOOL _allowAccess;
    NSData *_accessToken;
    NSString *_referenceIdentifier;
}

- (void).cxx_destruct;
- (void)main;
- (id)createActivity;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithItem:(id)arg1 allowAccess:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

