//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSViewModel.h>

@class NSURL, VSMessageQueue;

__attribute__((visibility("hidden")))
@interface VSWebAuthenticationViewModel : VSViewModel
{
    NSURL *_sourceURL;
    VSMessageQueue *_messagesToWeb;
    VSMessageQueue *_messagesFromWeb;
}

@property(readonly, nonatomic) VSMessageQueue *messagesFromWeb; // @synthesize messagesFromWeb=_messagesFromWeb;
@property(readonly, nonatomic) VSMessageQueue *messagesToWeb; // @synthesize messagesToWeb=_messagesToWeb;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void).cxx_destruct;
- (id)init;

@end
