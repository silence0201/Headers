//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ABSearchOperationsFactory;

__attribute__((visibility("hidden")))
@interface ABAccountDirectory : NSObject
{
    NSString *_identifier;
    NSString *_name;
    id <ABSearchOperationsFactory> _searchOperationsFactory;
}

@property(readonly) id <ABSearchOperationsFactory> searchOperationsFactory; // @synthesize searchOperationsFactory=_searchOperationsFactory;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 searchOperationsFactory:(id)arg3;

@end

