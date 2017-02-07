//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPStoreLyricsRequest, NSOperationQueue;

@interface MPStoreLyricsRequestOperation : MPAsyncOperation
{
    NSOperationQueue *_operationQueue;
    MPStoreLyricsRequest *_request;
    CDUnknownBlockType _responseHandler;
}

+ (id)_lyricsURLForURLBagDictionary:(id)arg1;
+ (_Bool)supportsLyricsForURLBagDictionary:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPStoreLyricsRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_enqueueOperationWithURL:(id)arg1 bagDictionary:(id)arg2 allowingAuthentication:(_Bool)arg3;
- (void)execute;

@end

