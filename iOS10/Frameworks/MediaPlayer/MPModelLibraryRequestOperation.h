//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryRequest, NSOperationQueue;

@interface MPModelLibraryRequestOperation : MPAsyncOperation
{
    MPModelLibraryRequest *_request;
    CDUnknownBlockType _responseHandler;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_serialAccessQueue;
}

@property(retain, nonatomic) NSOperationQueue *serialAccessQueue; // @synthesize serialAccessQueue=_serialAccessQueue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPModelLibraryRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_sanityCheckRequest;
- (void)execute;

@end

