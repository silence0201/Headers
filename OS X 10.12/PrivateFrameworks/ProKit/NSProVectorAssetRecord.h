//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSProVectorAssetRecord : NSObject
{
    struct CGPDFPage *_page;
    struct CGDisplayList *_displayList;
}

+ (id)vectorRecordWithPage:(struct CGPDFPage *)arg1;
@property(readonly) struct CGPDFPage *page; // @synthesize page=_page;
@property(readonly) struct CGDisplayList *displayList; // @dynamic displayList;
- (void)finalize;
- (void)dealloc;
- (id)initWithPage:(struct CGPDFPage *)arg1;

@end

