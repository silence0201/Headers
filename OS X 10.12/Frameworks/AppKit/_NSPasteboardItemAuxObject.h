//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface _NSPasteboardItemAuxObject : NSObject
{
    NSMutableArray *_orderedTypes;
    NSMutableDictionary *_dataByType;
    NSMutableDictionary *_providersByType;
}

- (void)dealloc;
- (id)providersByType;
- (id)dataByType;
- (id)orderedTypes;

@end
