//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiReply.h>

@class NSArray;

@interface LiConnectionInfoReply : LiReply
{
    NSArray *_connectionInfos;
}

+ (unsigned char)encodingObjectType;
@property(readonly) NSArray *connectionInfos; // @synthesize connectionInfos=_connectionInfos;
- (void).cxx_destruct;
- (void)encodeWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithConnectionInfos:(id)arg1 forRequest:(id)arg2;

@end
