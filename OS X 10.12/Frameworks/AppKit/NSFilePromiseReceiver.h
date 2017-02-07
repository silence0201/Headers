//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSPasteboardReading-Protocol.h>

@class NSArray, NSOperationQueue, NSPasteboard, NSPasteboardItem, NSString;

@interface NSFilePromiseReceiver : NSObject <NSPasteboardReading>
{
    NSPasteboard *_pasteboard;
    NSPasteboardItem *_pasteboardItem;
    NSArray *_fileTypes;
    NSArray *_reservedA;
    NSArray *_fileNames;
    NSArray *_fileURLs;
    NSOperationQueue *_operationQueue;
    long long _promiseType;
    CDUnknownBlockType _readerBlock;
    struct {
        unsigned int usesFileCoordination:1;
        unsigned int registered:1;
        unsigned int reserved:30;
    } _flags;
    id _private;
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (id)acceptableDragTypes;
+ (id)readableDraggedTypes;
@property(readonly, copy) NSArray *alternateFileTypes; // @synthesize alternateFileTypes=_reservedA;
@property(readonly, copy) NSArray *fileNames; // @synthesize fileNames=_fileNames;
@property(readonly, copy) NSArray *fileTypes; // @synthesize fileTypes=_fileTypes;
- (void)draggingCancelled:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)receivePromisedFilesAtDestination:(id)arg1 options:(id)arg2 operationQueue:(id)arg3 reader:(CDUnknownBlockType)arg4;
- (void)registerDestinationLocation:(id)arg1 options:(id)arg2 operationQueue:(id)arg3 reader:(CDUnknownBlockType)arg4;
- (void)registerDesinationLocation:(id)arg1 options:(id)arg2 operationQueu:(id)arg3 reader:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (BOOL)providerIsUsingFileCoordination;
- (void)_setPasteboardItem:(id)arg1;
- (void)_setPasteboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
