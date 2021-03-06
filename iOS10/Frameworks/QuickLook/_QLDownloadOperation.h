//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QLItem;

__attribute__((visibility("hidden")))
@interface _QLDownloadOperation : NSObject
{
    QLItem *_previewItem;
    CDUnknownBlockType _progressUpdateBlock;
    CDUnknownBlockType _completionBlock;
}

@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy) CDUnknownBlockType progressUpdateBlock; // @synthesize progressUpdateBlock=_progressUpdateBlock;
@property(readonly) __weak QLItem *previewItem; // @synthesize previewItem=_previewItem;
- (void).cxx_destruct;
- (void)subscribeToPreviewItemProgress;
- (_Bool)cancel;
- (_Bool)canBeCanceled;
- (_Bool)performDownload;
- (id)initWithPreviewItem:(id)arg1;

@end

