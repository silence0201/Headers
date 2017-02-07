//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKDOMObserver-Protocol.h>
#import <ITMLKit/IKJSDOMNodeList-Protocol.h>

@class IKDOMNode, NSArray, NSString;

@interface IKDOMNodeList : IKJSObject <IKDOMObserver, IKJSDOMNodeList>
{
    IKDOMNode *_contextNode;
    CDUnknownBlockType _evaluationBlock;
    NSArray *_nodes;
}

+ (id)nodeListWithAppContext:(id)arg1 contextNode:(id)arg2 xpath:(id)arg3;
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
@property(readonly, copy, nonatomic) CDUnknownBlockType evaluationBlock; // @synthesize evaluationBlock=_evaluationBlock;
@property(retain, nonatomic) IKDOMNode *contextNode; // @synthesize contextNode=_contextNode;
- (void).cxx_destruct;
- (void)_updateNodes;
- (void)domDidUpdateForContextNode:(id)arg1;
- (id)item:(long long)arg1;
@property(readonly, nonatomic) long long length;
- (id)initWithAppContext:(id)arg1 contextNode:(id)arg2 evaluationBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
