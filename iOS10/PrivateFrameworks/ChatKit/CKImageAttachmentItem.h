//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKAttachmentItem.h>

@class NSString;

@interface CKImageAttachmentItem : CKAttachmentItem
{
    _Bool _backgroundEnqueued;
    _Bool _useDefaultSize;
    struct CGSize _imageSize;
}

+ (id)UTITypes;
@property(nonatomic) _Bool useDefaultSize; // @synthesize useDefaultSize=_useDefaultSize;
@property(nonatomic) _Bool backgroundEnqueued; // @synthesize backgroundEnqueued=_backgroundEnqueued;
@property struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void)generatePreviewWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGSize)_calculateImageSize;
- (void)startDeferredSetup;
- (struct CGSize)size;
- (id)imageData;
- (id)_newImageData;

// Remaining properties
@property(retain, nonatomic) NSString *transferGUID;

@end
