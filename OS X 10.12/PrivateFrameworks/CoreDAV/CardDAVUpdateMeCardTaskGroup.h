//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CoreDAV/CoreDAVPropPatchTaskDelegate-Protocol.h>

@class NSString, NSURL;

@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate>
{
    NSURL *_homeURL;
    NSURL *_cardURL;
}

@property(readonly, nonatomic) NSURL *homeURL; // @synthesize homeURL=_homeURL;
@property(readonly, nonatomic) NSURL *cardURL; // @synthesize cardURL=_cardURL;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)startTaskGroup;
- (id)_newPropPatchTask;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 homeURL:(id)arg3 cardURL:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

