//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdate/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface SUDownloadProduct : NSObject <NSSecureCoding>
{
    NSArray *downloadURLs;
    BOOL _adminInitiated;
    NSString *_productKey;
    NSArray *_packageIdentifiers;
    NSString *_displayName;
    long long _downloadSize;
    long long _adminAction;
    long long _restartTimeInterval;
}

+ (BOOL)supportsSecureCoding;
@property BOOL adminInitiated; // @synthesize adminInitiated=_adminInitiated;
@property long long restartTimeInterval; // @synthesize restartTimeInterval=_restartTimeInterval;
@property long long adminAction; // @synthesize adminAction=_adminAction;
@property(readonly) long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSArray *packageIdentifiers; // @synthesize packageIdentifiers=_packageIdentifiers;
@property(readonly) NSString *productKey; // @synthesize productKey=_productKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithProduct:(id)arg1;

@end

