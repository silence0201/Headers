//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSString, NSURL, _WKFrameHandle;

@interface WKWebProcessPlugInFrame : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebFrame> _frame;
}

+ (id)lookUpFrameFromHandle:(id)arg1;
@property(readonly) struct Object *_apiObject;
- (id)_provisionalURL;
- (struct __SecTrust *)_serverTrust;
- (id)_certificateChain;
- (_Bool)_hasCustomContentProvider;
- (id)_parentFrame;
@property(readonly, nonatomic) NSArray *faviconURLs;
@property(readonly, nonatomic) NSArray *appleTouchIconURLs;
@property(readonly, nonatomic) _WKFrameHandle *handle;
@property(readonly, nonatomic) _Bool containsAnyFormElements;
@property(readonly, nonatomic) NSArray *childFrames;
@property(readonly, nonatomic) NSURL *URL;
- (id)_browserContextController;
- (id)jsNodeForNodeHandle:(id)arg1 inWorld:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1;
- (id)jsContextForWorld:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

