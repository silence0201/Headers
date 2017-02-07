//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSString, WKBackForwardListItem;

@interface WKBackForwardList : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebBackForwardList> _list;
}

@property(readonly) struct Object *_apiObject;
@property(readonly, copy, nonatomic) NSArray *forwardList;
@property(readonly, copy, nonatomic) NSArray *backList;
- (id)itemAtIndex:(long long)arg1;
@property(readonly, nonatomic) WKBackForwardListItem *forwardItem;
@property(readonly, nonatomic) WKBackForwardListItem *backItem;
@property(readonly, nonatomic) WKBackForwardListItem *currentItem;
- (void)dealloc;
- (void)_clear;
- (void)_removeAllItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

