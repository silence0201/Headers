//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (ISS_DAVAdditions)
+ (id)ISS_URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
+ (id)ISS_URLWithDirtyString:(id)arg1;
+ (int)ISS_classicPortForScheme:(id)arg1;
- (id)ISS_initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
- (id)ISS_URLWithoutPassword;
- (id)ISS_URLWithoutUsername;
- (id)ISS_URLWithUsername:(id)arg1;
- (id)ISS_uri;
- (id)ISS_initWithDirtyString:(id)arg1;
@end

