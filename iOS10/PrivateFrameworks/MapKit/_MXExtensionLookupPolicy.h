//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/_MXExtensionLookupPolicy-Protocol.h>

@class NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface _MXExtensionLookupPolicy : NSObject <_MXExtensionLookupPolicy>
{
    NSPredicate *_extensionPredicate;
}

@property(retain, nonatomic) NSPredicate *extensionPredicate; // @synthesize extensionPredicate=_extensionPredicate;
- (void).cxx_destruct;
- (id)initWithPredicate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

