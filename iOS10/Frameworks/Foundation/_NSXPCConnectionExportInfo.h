//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExportInfo : NSObject
{
    id _exportedObject;
    NSXPCInterface *_exportedInterface;
    long long _exportCount;
}

@property long long exportCount; // @synthesize exportCount=_exportCount;
@property(retain) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain) id exportedObject; // @synthesize exportedObject=_exportedObject;
- (id)description;
- (void)dealloc;
- (id)init;

@end

