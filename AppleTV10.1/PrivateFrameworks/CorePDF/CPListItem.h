//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class CPList;

@interface CPListItem : NSObject <CPDisposable>
{
    CPList *list;
    int number;
    struct __CFArray *paragraphs;
}

@property(nonatomic) int number; // @synthesize number;
@property(retain, nonatomic) CPList *list; // @synthesize list;
- (void)addParagraph:(id)arg1;
- (id)paragraphAtIndex:(unsigned int)arg1;
- (unsigned int)paragraphCount;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)init;

@end
