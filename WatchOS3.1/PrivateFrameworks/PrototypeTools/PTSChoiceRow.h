//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTSRow.h>

@class NSArray;

@interface PTSChoiceRow : PTSRow
{
    NSArray *_possibleValues;
    NSArray *_possibleTitles;
    NSArray *_possibleShortTitles;
}

@property(copy, nonatomic) NSArray *possibleShortTitles; // @synthesize possibleShortTitles=_possibleShortTitles;
@property(copy, nonatomic) NSArray *possibleTitles; // @synthesize possibleTitles=_possibleTitles;
@property(copy, nonatomic) NSArray *possibleValues; // @synthesize possibleValues=_possibleValues;
- (void).cxx_destruct;
- (void)updateWithRow:(id)arg1;
- (id)init;
- (id)possibleShortTitles:(id)arg1;
- (id)possibleValues:(id)arg1 titles:(id)arg2;
- (Class)rowTableViewCellClass;

@end
