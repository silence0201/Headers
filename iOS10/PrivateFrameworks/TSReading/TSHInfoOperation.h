//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSHListPropertiesOperation.h>

@interface TSHInfoOperation : TSHListPropertiesOperation
{
}

- (id)etag;
- (id)contentLength;
- (_Bool)isCollection;
- (id)modified;
- (id)created;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 delegate:(id)arg5;
- (id)initWithAccount:(id)arg1 andPath:(id)arg2 delegate:(id)arg3;

@end
