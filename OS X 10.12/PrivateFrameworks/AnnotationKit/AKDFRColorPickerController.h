//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKColorChooserUserInterfaceItem-Protocol.h>

@class NSColor, NSString;

@interface AKDFRColorPickerController : NSObject <AKColorChooserUserInterfaceItem>
{
    long long _tag;
    NSColor *_color;
}

@property(copy) NSColor *color; // @synthesize color=_color;
@property long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

