//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <QuartzCore/EAGLDrawable-Protocol.h>

@class NSDictionary;

@interface CAEAGLLayer : CALayer <EAGLDrawable>
{
    struct _CAEAGLNativeWindow *_win;
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
@property(copy) NSDictionary *drawableProperties;
@property _Bool presentsWithTransaction;
- (void)_didCommitLayer:(struct Transaction *)arg1;
- (void)_display;
- (_Bool)_defersDidBecomeVisiblePostCommit;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (void)dealloc;
@property(readonly) struct _EAGLWindowObject *nativeWindow;
- (void)didChangeValueForKey:(id)arg1;
- (_Bool)shouldArchiveValueForKey:(id)arg1;
@property _Bool lowLatency;
@property(getter=isAsynchronous) _Bool asynchronous;
- (void)discardContents;
- (_Bool)isDrawableAvailable;

@end

