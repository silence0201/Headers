//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

@interface ICNFMCManagedObjectContextManager : NSObject
{
    NSManagedObjectContext *_context;
}

+ (void)attachContextManagerWithOptions:(unsigned long long)arg1 toContext:(id)arg2;
@property(readonly, nonatomic) __weak NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_contextDidSave:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1 context:(id)arg2;

@end

