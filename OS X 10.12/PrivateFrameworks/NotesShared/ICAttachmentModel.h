//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/NSPasteboardWriting-Protocol.h>
#import <NotesShared/QLPreviewItem-Protocol.h>

@class ICAttachment, NSArray, NSString, NSURL;

@interface ICAttachmentModel : NSObject <QLPreviewItem, NSPasteboardWriting>
{
    NSArray *_searchStrings;
    BOOL _previewGenerationOperationCancelled;
    BOOL _mergeableDataDirty;
    BOOL _hasAdditionalSearchIndexStrings;
    ICAttachment *_attachment;
    struct CGSize _intrinsicContentSize;
}

+ (void)populateLocationSearchStringsIfPossible:(id)arg1 forAttachment:(id)arg2;
+ (struct NSImage *)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;
+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
@property(nonatomic) struct CGSize intrinsicContentSize; // @synthesize intrinsicContentSize=_intrinsicContentSize;
@property BOOL hasAdditionalSearchIndexStrings; // @synthesize hasAdditionalSearchIndexStrings=_hasAdditionalSearchIndexStrings;
@property(nonatomic, getter=isMergeableDataDirty) BOOL mergeableDataDirty; // @synthesize mergeableDataDirty=_mergeableDataDirty;
@property(readonly, nonatomic) __weak ICAttachment *attachment; // @synthesize attachment=_attachment;
@property BOOL previewGenerationOperationCancelled; // @synthesize previewGenerationOperationCancelled=_previewGenerationOperationCancelled;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)writableTypesForPasteboard:(id)arg1;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;
- (struct CGAffineTransform)previewImageOrientationTransform;
- (void)updateFileBasedAttributes;
- (BOOL)isReadyToPresent;
- (void)updateAttachmentSize;
- (id)attachmentModelType;
- (struct NSImage *)fileIconWithPreferredSize:(struct CGSize)arg1;
- (id)activityItems;
- (id)generateSearchIndexStringsOperation;
- (int)populateSearchStrings:(id)arg1;
- (void)invalidateSearchStrings;
@property(readonly, copy) NSArray *searchStrings;
- (void)didCancelPreviewGeneratorOperation;
- (void)generatePreviewsInOperation:(id)arg1;
@property(readonly, nonatomic) BOOL requiresNetworkToGeneratePreview;
@property(readonly, nonatomic) BOOL generatePreviewsDuringCloudActivity;
@property(readonly, nonatomic) BOOL generateAsynchronousPreviews;
@property(readonly, nonatomic) BOOL needToGeneratePreviews;
@property(readonly, nonatomic) CDUnknownBlockType genericBrickThumbnailCreator;
@property(readonly, nonatomic) CDUnknownBlockType genericListThumbnailCreator;
@property(readonly, nonatomic) BOOL canMarkup;
@property(readonly, nonatomic) BOOL showThumbnailInNoteList;
@property(readonly, nonatomic) BOOL hasThumbnailImage;
@property(readonly, nonatomic) BOOL hasPreviews;
- (void)writeMergeableData;
- (void)mergeWithMergeableData:(id)arg1;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id previewItemDisplayState;
@property(readonly) Class superclass;

@end

