//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SearchUITableLayoutInfo : NSObject
{
    NSArray *_columnWidths;
    NSArray *_columnSpacing;
    long long _firstTrailingIndex;
    NSArray *_columnAlignments;
}

@property(retain) NSArray *columnAlignments; // @synthesize columnAlignments=_columnAlignments;
@property long long firstTrailingIndex; // @synthesize firstTrailingIndex=_firstTrailingIndex;
@property(retain) NSArray *columnSpacing; // @synthesize columnSpacing=_columnSpacing;
@property(retain) NSArray *columnWidths; // @synthesize columnWidths=_columnWidths;
- (void).cxx_destruct;

@end
