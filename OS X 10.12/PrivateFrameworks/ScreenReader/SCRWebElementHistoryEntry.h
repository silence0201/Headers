//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SCRWebElementHistoryEntry : NSObject
{
    struct __AXUIElement *_axElement;
    struct __AXUIElement *_webAreaAXElement;
    NSDictionary *_storageDictionary;
}

@property(retain, nonatomic) NSDictionary *storageDictionary; // @synthesize storageDictionary=_storageDictionary;
@property(nonatomic) struct __AXUIElement *webAreaAXElement; // @synthesize webAreaAXElement=_webAreaAXElement;
@property(nonatomic) struct __AXUIElement *axElement; // @synthesize axElement=_axElement;
- (void)dealloc;

@end
