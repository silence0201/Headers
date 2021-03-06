//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <DataDetectors/ABNameView-Protocol.h>

@class ABCardViewStyleProvider, NSString;

__attribute__((visibility("hidden")))
@interface DDNameView : NSView <ABNameView>
{
    ABCardViewStyleProvider *_styleProvider;
}

@property(retain) ABCardViewStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
- (void)dealloc;
- (void)commitEditing;
- (void)reloadData;
- (void)setDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

