//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/PQLInjecting-Protocol.h>

@class NSData, NSString, PQLRawInjection;

@interface CPLPrequeliteType : NSObject <PQLInjecting>
{
    PQLRawInjection *_injection;
    Class _objcClass;
}

+ (id)stringType;
+ (id)dataType;
+ (id)integerType;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;
@property(readonly, nonatomic) NSData *sql;
- (Class)objcClass;
- (id)initWithTypeName:(const char *)arg1 objcClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

