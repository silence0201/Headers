//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BookKit/NSObject-Protocol.h>

@class NSDictionary, NSError;

@protocol BKAgentServiceDelegate <NSObject>
- (void)bookLibraryDidAttemptSave:(BOOL)arg1 error:(NSError *)arg2;
- (void)bookLibraryUpdated:(NSDictionary *)arg1;
- (void)bookMetadata:(NSDictionary *)arg1 changed:(long long)arg2;
@end
