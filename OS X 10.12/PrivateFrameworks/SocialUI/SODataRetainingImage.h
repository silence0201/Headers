//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImage.h>

@class NSData, NSString;

@interface SODataRetainingImage : NSImage
{
    NSString *_fileExtension;
    NSData *_originalData;
}

+ (BOOL)canInitWithPasteboard:(id)arg1;
@property(retain) NSData *originalData; // @synthesize originalData=_originalData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPasteboard:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;

@end
