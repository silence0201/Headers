//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ILMediaBrowserObjectSearchAndSelectionState : NSObject
{
    NSArray *searchKeys;
    NSString *searchString;
}

@property(copy) NSString *searchString; // @synthesize searchString;
@property(copy) NSArray *searchKeys; // @synthesize searchKeys;
- (id)findMatchingMenuItemInSearchMenu:(id)arg1;
- (void)dealloc;

@end
