//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GenerationalStorage/GSLibraryProtocol-Protocol.h>

@class GSPermanentStorage, NSString;
@protocol GSAdditionStoring;

__attribute__((visibility("hidden")))
@interface GSSystemManagedLibrary : NSObject <GSLibraryProtocol>
{
    GSPermanentStorage *_ps;
    NSString *_clientID;
}

- (BOOL)generationsRemove:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 clientID:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *nameSpace;
@property(readonly, nonatomic) NSObject<GSAdditionStoring> *storage;

@end
