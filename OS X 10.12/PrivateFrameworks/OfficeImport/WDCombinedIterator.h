//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/WDIterator.h>

__attribute__((visibility("hidden")))
@interface WDCombinedIterator : WDIterator
{
    WDIterator *mParentIterator;
    WDIterator *mChildIterator;
}

@property(retain, nonatomic) WDIterator *childIterator; // @synthesize childIterator=mChildIterator;
- (id)next;
- (BOOL)hasNext;
- (id)newChildIteratorFrom:(id)arg1;
- (id)childIteratorFrom:(id)arg1;
- (void)dealloc;
- (id)initWithParentIterator:(id)arg1;
- (void)incrementChildIterator;

@end
