//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMPPCore/XMPPNode.h>

@class NSMutableString;

@interface XMPPTextContentNode : XMPPNode
{
    NSMutableString *_text;
}

- (id)text;
- (void)addText:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 attributes:(id)arg2 initialText:(id)arg3;
- (id)initWithName:(id)arg1 attributes:(id)arg2;

@end

