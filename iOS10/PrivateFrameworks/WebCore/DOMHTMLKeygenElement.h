//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, DOMNodeList, DOMValidityState, NSString;

@interface DOMHTMLKeygenElement : DOMHTMLElement
{
}

- (void)setCustomValidity:(id)arg1;
- (_Bool)checkValidity;
@property(readonly) DOMNodeList *labels;
@property(readonly, copy) NSString *validationMessage;
@property(readonly) DOMValidityState *validity;
@property(readonly) _Bool willValidate;
@property(readonly, copy) NSString *type;
@property(copy) NSString *name;
@property(copy) NSString *keytype;
@property(readonly) DOMHTMLFormElement *form;
@property _Bool disabled;
@property(copy) NSString *challenge;
@property _Bool autofocus;

@end
