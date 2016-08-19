//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>

@interface PHAssetResourceRequestOptions : NSObject <NSCopying>
{
    _Bool _networkAccessAllowed;
    _Bool _resistentToPrune;
    CDUnknownBlockType _progressHandler;
}

@property(nonatomic) _Bool resistentToPrune; // @synthesize resistentToPrune=_resistentToPrune;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
