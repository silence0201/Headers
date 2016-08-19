//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL, UIColor, UIImage;

@interface UIPasteboard : NSObject
{
    NSString *_name;
}

+ (void)removePasteboardWithName:(id)arg1;
+ (id)pasteboardWithUniqueName;
+ (id)pasteboardWithName:(id)arg1 create:(_Bool)arg2;
+ (id)generalPasteboard;
+ (id)_printPasteboard;
+ (id)_findPasteboard;
@property(copy, nonatomic) NSArray *items;
@property(readonly, nonatomic) long long numberOfItems;
@property(readonly, nonatomic) long long changeCount;
@property(nonatomic, getter=isPersistent) _Bool persistent;
- (void)_addItems:(id)arg1 oldPasteboardTypes:(id)arg2;
- (void)addItems:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (_Bool)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)valueForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1;
- (_Bool)containsPasteboardTypes:(id)arg1;
- (id)pasteboardTypes;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)init;
@property(copy, nonatomic) NSArray *colors;
@property(copy, nonatomic) UIColor *color;
@property(copy, nonatomic) NSArray *images;
@property(copy, nonatomic) UIImage *image;
@property(copy, nonatomic) NSArray *URLs;
@property(copy, nonatomic) NSURL *URL;
@property(copy, nonatomic) NSArray *strings;
@property(copy, nonatomic) NSString *string;
- (void)_pasteboardChanged:(id)arg1;
- (id)_initWithName:(id)arg1 system:(_Bool)arg2 create:(_Bool)arg3;

@end
