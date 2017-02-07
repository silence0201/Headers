//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVVideoCompositionRenderContext, AVWeakReference, NSArray, NSDictionary;
@protocol AVVideoCompositionInstruction;

@interface AVAsynchronousVideoCompositionRequestInternal : NSObject
{
    AVWeakReference *_session;
    AVVideoCompositionRenderContext *_renderContext;
    struct OpaqueFigVideoCompositorFrame *_compositionFrame;
    CDStruct_1b6d18a9 _compositionTime;
    NSDictionary *_sourcesByTrackID;
    NSArray *_sourceTrackIDsInClientOrder;
    id <AVVideoCompositionInstruction> _instruction;
    _Bool _isFinished;
}

@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(retain, nonatomic) id <AVVideoCompositionInstruction> instruction; // @synthesize instruction=_instruction;
@property(retain, nonatomic) NSArray *sourceTrackIDsInClientOrder; // @synthesize sourceTrackIDsInClientOrder=_sourceTrackIDsInClientOrder;
@property(retain, nonatomic) NSDictionary *sourcesByTrackID; // @synthesize sourcesByTrackID=_sourcesByTrackID;
@property(nonatomic) CDStruct_1b6d18a9 compositionTime; // @synthesize compositionTime=_compositionTime;
@property(nonatomic) struct OpaqueFigVideoCompositorFrame *compositionFrame; // @synthesize compositionFrame=_compositionFrame;
@property(retain, nonatomic) AVVideoCompositionRenderContext *renderContext; // @synthesize renderContext=_renderContext;
@property(retain, nonatomic) AVWeakReference *session; // @synthesize session=_session;
- (void)dealloc;

@end

