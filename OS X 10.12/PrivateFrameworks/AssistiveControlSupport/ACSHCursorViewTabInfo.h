//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage;

@interface ACSHCursorViewTabInfo : NSObject
{
    BOOL _isSelected;
    BOOL _isAvailable;
    NSImage *_image;
    unsigned long long _identifier;
}

@property(nonatomic) BOOL isAvailable; // @synthesize isAvailable=_isAvailable;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void)dealloc;
- (id)description;

@end
