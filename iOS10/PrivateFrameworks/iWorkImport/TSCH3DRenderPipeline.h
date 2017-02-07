//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCH3DGLContext, TSCH3DRenderProcessor, TSCH3DSession;

__attribute__((visibility("hidden")))
@interface TSCH3DRenderPipeline : NSObject
{
    TSCH3DRenderProcessor *mProcessor;
    TSCH3DSession *mSession;
}

+ (id)pipelineWithProcessor:(id)arg1 session:(id)arg2;
+ (id)clipRectForTargetSize:(const tvec2_3b141483 *)arg1 intermediateSize:(const tvec2_3b141483 *)arg2;
@property(readonly, nonatomic) TSCH3DSession *session; // @synthesize session=mSession;
@property(retain, nonatomic) TSCH3DRenderProcessor *processor; // @synthesize processor=mProcessor;
@property(readonly, nonatomic) TSCH3DGLContext *context;
- (void)dealloc;
- (id)initWithProcessor:(id)arg1 session:(id)arg2;

@end
