//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Suggestions/SGTSuggester.h>

@class NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface SGTFolderSuggester : SGTSuggester
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_rootPath;
}

@property(retain) NSURL *rootPath; // @synthesize rootPath=_rootPath;
- (void)setInput:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)cleanup;
- (id)initWithRootPath:(id)arg1;

@end
