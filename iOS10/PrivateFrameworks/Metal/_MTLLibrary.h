//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/MTLLibrary-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol MTLDevice;

@interface _MTLLibrary : NSObject <MTLLibrary>
{
    NSString *_label;
    id <MTLDevice> _device;
    NSArray *_functionNames;
    struct MTLLibraryData *_libraryData;
    NSMutableDictionary *_functionDictionary;
    struct MTLLibraryContainer *_cacheEntry;
}

@property(readonly, retain, nonatomic) NSMutableDictionary *functionDictionary; // @synthesize functionDictionary=_functionDictionary;
@property(readonly) struct MTLLibraryData *libraryData; // @synthesize libraryData=_libraryData;
@property(readonly, retain) NSArray *functionNames; // @synthesize functionNames=_functionNames;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly, copy) NSString *description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithLibraryContainer:(struct MTLLibraryContainer *)arg1 device:(id)arg2;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id *)arg3;
- (id)newFunctionWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

