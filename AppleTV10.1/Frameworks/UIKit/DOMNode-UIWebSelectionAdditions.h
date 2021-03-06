//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/DOMNode.h>

#import <UIKit/UIWebSelectionBlock-Protocol.h>

@class NSString;

@interface DOMNode (UIWebSelectionAdditions) <UIWebSelectionBlock>
- (id)lastDescendantOfAboutTheSameWidthOrHeight;
- (id)firstDescendantOfAboutTheSameWidthOrHeight;
- (id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(struct CGRect)arg1 withDescentDirection:(int)arg2;
- (id)enclosingDocument;
- (struct CGRect)boundingRectAndInsideFixedPosition:(int *)arg1;
- (struct CGRect)boundingRect;
- (_Bool)canShrinkDirectlyToTextOnly;
- (id)rangeOfContents;
- (_Bool)containsRange:(id)arg1;
- (id)asDomRange;
- (id)asDomNode;
- (_Bool)rendersAsBlock;
- (id)largerParent;
- (_Bool)strictlyContainsBlock:(id)arg1;
- (_Bool)containsBlock:(id)arg1;
- (_Bool)isSameBlock:(id)arg1;
- (_Bool)hasCustomLineHeight;
- (_Bool)selectable;
- (id)parentBlock;
- (id)webFrame;
- (id)enclosingElementIncludingSelf;
- (id)asElement;
- (_Bool)strictlyContainsNode:(id)arg1;
- (_Bool)containsNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

