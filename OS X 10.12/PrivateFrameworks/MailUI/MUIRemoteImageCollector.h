//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSOperationQueue;

@interface MUIRemoteImageCollector : NSObject
{
    NSMutableArray *_attachments;
    NSOperationQueue *_downloadQueue;
}

@property(readonly, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAttachments:(id)arg1;

@end

