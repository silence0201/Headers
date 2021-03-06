//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MessageUI/MFMessageBodyConsumableInnerTextNode-Protocol.h>
#import <MessageUI/MFMessageBodyTreeNode-Protocol.h>

@class NSMutableArray, NSString;

@interface _MFParsedHTMLNode : NSObject <MFMessageBodyTreeNode, MFMessageBodyConsumableInnerTextNode>
{
    NSMutableArray *_childNodes;
    _MFParsedHTMLNode *_parentNode;
    _MFParsedHTMLNode *_nextSibling;
    NSString *_htmlString;
    unsigned long long _startLocation;
    unsigned long long _endLocation;
}

@property(nonatomic) unsigned long long endLocation; // @synthesize endLocation=_endLocation;
@property(nonatomic) unsigned long long startLocation; // @synthesize startLocation=_startLocation;
@property(retain, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
@property(nonatomic) _MFParsedHTMLNode *nextSibling; // @synthesize nextSibling=_nextSibling;
@property(nonatomic) _MFParsedHTMLNode *parentNode; // @synthesize parentNode=_parentNode;
- (id)recursiveDescription;
- (void)addRecursiveDescriptionWithLevel:(unsigned long long)arg1 toString:(id)arg2;
- (void)collectDescendanceIntoArray:(id)arg1;
- (id)copyMutableConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
@property(readonly, nonatomic) NSString *tagName;
@property(readonly, nonatomic) _MFParsedHTMLNode *lastChild;
@property(readonly, nonatomic) _MFParsedHTMLNode *firstChild;
@property(readonly, nonatomic) _Bool hasChildNodes;
- (void)appendChild:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

