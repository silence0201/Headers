//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSView;
@protocol ABCardCollectionRowView;

__attribute__((visibility("hidden")))
@interface ABShadowTextViewPostalAddressValuePasteHelper : NSObject
{
    NSView<ABCardCollectionRowView> *_datumView;
}

+ (BOOL)pasteString:(id)arg1 intoAddressDatumView:(id)arg2;
- (void)setValue:(id)arg1 onFieldWithTag:(long long)arg2;
- (void)setAddress:(id)arg1;
- (void)dealloc;
- (id)initWithAddressDatumView:(id)arg1;

@end
