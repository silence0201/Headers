//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/TVSXMLNode.h>

@class NSData, TVSXMLElement;

@interface TVSXMLDocument : TVSXMLNode
{
}

- (_Bool)adoptNode:(id)arg1 error:(id *)arg2;
- (id)makeDocumentFragmentWithData:(id)arg1 error:(id *)arg2;
- (id)makeDocumentFragment;
- (id)makeElementNamed:(id)arg1;
@property(readonly, nonatomic) NSData *XMLData;
- (void)setDOMRootElement:(id)arg1;
@property(retain, nonatomic) TVSXMLElement *rootElement;
- (void)dealloc;
- (id)initWithRootElement:(id)arg1;
- (id)init;
- (id)initWithData:(id)arg1 error:(id *)arg2;

@end

