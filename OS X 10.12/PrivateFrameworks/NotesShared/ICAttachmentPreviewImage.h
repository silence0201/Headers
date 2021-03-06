//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAttachment, NSData, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface ICAttachmentPreviewImage : ICCloudSyncingObject
{
    NSObject<OS_dispatch_queue> *_fileQueue;
    long long _fileQueueOnceToken;
    unsigned long long _imageID;
}

+ (id)previewImageURLsForIdentifier:(id)arg1;
+ (id)identifierForContentIdentifier:(id)arg1 scale:(double)arg2 width:(double)arg3 height:(double)arg4;
+ (id)previewImageDirectoryURL;
+ (struct NSImage *)orientedImage:(struct NSImage *)arg1 withTransform:(struct CGAffineTransform)arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform)arg4;
+ (void)waitUntilAllFileWritesAreFinished;
+ (id)fileQueueGroup;
+ (id)fileGlobalQueue;
+ (id)concurrentFileLoadLimitSemaphore;
+ (void)purgePreviewImageFilesForIdentifiers:(id)arg1;
+ (void)purgeAllPreviewImageFiles;
+ (id)imageCache;
+ (void)deleteStrandedAttachmentPreviewImagesInContext:(id)arg1;
+ (id)attachmentPreviewImagesMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)allAttachmentPreviewImagesInContext:(id)arg1;
+ (id)visibleAttachmentPreviewImagesInContext:(id)arg1;
+ (id)attachmentPreviewImageIdentifiersForAccount:(id)arg1;
+ (id)attachmentPreviewImageWithIdentifier:(id)arg1 inContext:(id)arg2;
+ (void)purgeAllAttachmentPreviewImagesInContext:(id)arg1;
+ (id)newAttachmentPreviewImageInContext:(id)arg1;
- (void).cxx_destruct;
- (void)saveAndClearDecryptedData;
- (id)_decryptedImageData;
- (id)decryptedImageData;
- (BOOL)_writeEncryptedImageFromData:(id)arg1;
- (BOOL)writeEncryptedImageFromData:(id)arg1;
- (id)parentEncryptableObject;
- (void)deleteFromLocalDatabase;
- (BOOL)needsInitialFetchFromCloud;
- (BOOL)needsToBeFetchedFromCloud;
- (BOOL)needsToBeDeletedFromCloud;
- (BOOL)needsToBePushedToCloud;
- (void)updateFlagToExcludeFromBackupForURL:(id)arg1 touchFileIfNecessary:(BOOL)arg2;
- (void)updateFlagToExcludeFromBackupTouchFileIfNecessary:(BOOL)arg1;
- (void)updateFlagToExcludeFromBackup;
- (id)ic_loggingValues;
- (BOOL)shouldSyncToCloud;
- (BOOL)isMap;
- (BOOL)isSketch;
@property(retain, nonatomic) NSData *metadata; // @dynamic metadata;
- (id)oldPreviewImageURL;
- (id)orientedPreviewImageURLCreateIfNeeded:(BOOL)arg1;
- (id)orientedPreviewImageURL;
- (id)encryptedPreviewImageURL;
- (id)previewImageURL;
- (BOOL)makeSurePreviewImageDirectoryExists:(id *)arg1;
- (void)saveScaledImageFromImageSrc:(struct CGImageSource *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setImage:(struct NSImage *)arg1 withScale:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)imageIsValid;
- (struct NSImage *)image;
- (CDUnknownBlockType)asyncImage:(CDUnknownBlockType)arg1 aboutToLoadHandler:(CDUnknownBlockType)arg2;
- (id)newImageLoaderForUpdatingImageOnCompletion:(BOOL)arg1 asyncDataLoading:(BOOL)arg2;
- (id)newImageLoaderForUpdatingImageOnCompletion:(BOOL)arg1;
- (struct NSImage *)orientedImageWithBackground:(int)arg1;
- (struct NSImage *)imageWithBackground:(int)arg1;
- (struct NSImage *)orientedImage;
- (struct CGAffineTransform)orientedImageTransform;
- (void)invalidateCache;
- (void)invalidateImage;
- (void)invalidateOrientedImage;
- (void)removeItemAtURL:(id)arg1;
- (void)prepareForDeletion;
- (id)fileQueue;
- (struct CGSize)size;
- (void)setCachedOrientedImage:(struct NSImage *)arg1;
- (struct NSImage *)cachedOrientedImage;
- (id)orientedImageID;
- (void)setCachedImage:(struct NSImage *)arg1;
- (struct NSImage *)cachedImage;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) ICAttachment *attachment; // @dynamic attachment;
@property(retain, nonatomic) NSData *cryptoMetadataInitializationVector; // @dynamic cryptoMetadataInitializationVector;
@property(retain, nonatomic) NSData *cryptoMetadataTag; // @dynamic cryptoMetadataTag;
@property(retain, nonatomic) NSData *encryptedMetadata; // @dynamic encryptedMetadata;
@property(nonatomic) double height; // @dynamic height;
@property(retain, nonatomic) NSDate *modifiedDate; // @dynamic modifiedDate;
@property(nonatomic) double scale; // @dynamic scale;
@property(nonatomic) BOOL scaleWhenDrawing; // @dynamic scaleWhenDrawing;
@property(nonatomic) short version; // @dynamic version;
@property(nonatomic) BOOL versionOutOfDate; // @dynamic versionOutOfDate;
@property(nonatomic) double width; // @dynamic width;

@end

