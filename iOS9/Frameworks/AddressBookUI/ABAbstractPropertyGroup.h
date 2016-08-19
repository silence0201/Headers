//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ABUIPerson, NSArray;
@protocol ABStyleProvider;

@interface ABAbstractPropertyGroup : NSObject
{
    NSArray *_people;
    id <ABStyleProvider> _styleProvider;
    _Bool _hasChanges;
    ABUIPerson *_preinsertedPerson;
}

@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
@property(retain, nonatomic) ABUIPerson *preinsertedPerson; // @synthesize preinsertedPerson=_preinsertedPerson;
@property(retain, nonatomic) NSArray *people; // @synthesize people=_people;
- (_Bool)canSave;
- (void)reloadFromModel;
- (void)updateRecord;
- (int)property;
- (void)dealloc;
- (id)init;

@end

