//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _MPMediaLibraryEntityPropertyTranslator : NSObject
{
    CDUnknownBlockType _sortTransformer;
    CDUnknownBlockType _valueTransformer;
    shared_ptr_217a6612 _propertiesToFetchMap;
    shared_ptr_217a6612 _propertiesToSortMap;
}

@property(copy, nonatomic) CDUnknownBlockType valueTransformer; // @synthesize valueTransformer=_valueTransformer;
@property(copy, nonatomic) CDUnknownBlockType sortTransformer; // @synthesize sortTransformer=_sortTransformer;
@property(nonatomic) shared_ptr_217a6612 propertiesToSortMap; // @synthesize propertiesToSortMap=_propertiesToSortMap;
@property(nonatomic) shared_ptr_217a6612 propertiesToFetchMap; // @synthesize propertiesToFetchMap=_propertiesToFetchMap;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

