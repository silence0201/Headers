//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PodcastProducerASL : NSObject
{
    struct _PCPLogContext *pcpLogContext;
}

+ (id)logger:(id)arg1;
- (int)logDebug:(id)arg1;
- (int)logInfo:(id)arg1;
- (int)logNotice:(id)arg1;
- (int)logWarn:(id)arg1;
- (int)logError:(id)arg1;
- (int)logCrit:(id)arg1;
- (int)logAlert:(id)arg1;
- (int)logEmergency:(id)arg1;
- (int)logMsg:(id)arg1 level:(int)arg2 arguments:(struct __va_list_tag [1])arg3;
- (void)cleanup;
- (void)finalize;
- (void)dealloc;
- (id)initWithIdentity:(id)arg1;

@end
