//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPQuerySourceObserver-Protocol.h>

@class MSPQuerySource, NSArray, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface MSPQuery : NSObject <MSPQuerySourceObserver>
{
    MSPQuerySource *_source;
    NSMapTable *_unmappedContentsMap;
    NSArray *_contents;
    NSArray *_unmappedContents;
    CDUnknownBlockType _changeHandler;
    NSObject<OS_dispatch_queue> *_changeHandlerQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *changeHandlerQueue; // @synthesize changeHandlerQueue=_changeHandlerQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(readonly, nonatomic) NSArray *unmappedContents; // @synthesize unmappedContents=_unmappedContents;
@property(readonly) NSArray *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
- (id)unmappedObjectForContentsObject:(id)arg1;
- (void)setChangeHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)_didChangeSourceWithContents:(id)arg1 unmappedContents:(id)arg2 map:(id)arg3 forContext:(id)arg4;
- (id)_initWithSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

