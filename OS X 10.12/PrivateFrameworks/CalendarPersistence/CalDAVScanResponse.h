//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CalDAVScanResponse : NSObject
{
    NSURL *_fileURL;
    NSString *_etag;
}

@property(retain) NSString *etag; // @synthesize etag=_etag;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)initWithFileURL:(id)arg1 etag:(id)arg2;
- (void)dealloc;

@end
