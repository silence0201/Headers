//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BKItemFormatManager : NSObject
{
    NSMutableDictionary *_formattingDictionary;
    NSMutableDictionary *_itemClassAttributes;
    NSMutableDictionary *_itemEntries;
}

- (id)itemValueAtIndex:(long long)arg1 forItem:(id)arg2 withDefaultAttributes:(id)arg3;
- (id)itemLabelAtIndex:(long long)arg1 forItem:(id)arg2 withDefaultAttributes:(id)arg3;
- (long long)itemAttributeCountForItem:(id)arg1;
- (id)itemKeysForItem:(id)arg1;
- (id)formatEntryForItem:(id)arg1;
- (void)dealloc;
- (void)updateFormattingDictionary:(id)arg1;
- (id)init;

@end

