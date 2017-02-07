//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NKIssue, NSData, NSDictionary, NSString, NSURLConnection, NSURLRequest;

@interface NKAssetDownload : NSObject
{
    NKIssue *_issue;
    NSString *_identifier;
    NSData *_userInfoData;
    NSURLRequest *_request;
    NSURLConnection *_connection;
    _Bool _attemptedConnection;
    _Bool _isDecodingValid;
}

@property _Bool attemptedConnection; // @synthesize attemptedConnection=_attemptedConnection;
@property(retain) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain) NSData *userInfoData; // @synthesize userInfoData=_userInfoData;
@property(copy) NSURLRequest *URLRequest; // @synthesize URLRequest=_request;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)downloadWithDelegate:(id)arg1;
- (void)_connectionBackgroundDownloadPostCompleted:(id)arg1;
- (void)_connectionBackgroundDownloadPreCompleted:(id)arg1;
- (_Bool)_isDecodingValid;
- (void)_cancel;
- (_Bool)_attemptedConnection;
- (id)_connection;
- (void)_setIssue:(id)arg1;
- (void)_issueWasRemovedFromLibrary;
@property(copy) NSDictionary *userInfo;
- (void)setIssue:(id)arg1;
@property(readonly) __weak NKIssue *issue; // @synthesize issue=_issue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithURLRequest:(id)arg1 issue:(id)arg2;

@end

