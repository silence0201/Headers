//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/NSObject-Protocol.h>

@class WLKServerConfigurationRequestOperation;

@protocol WLKServerConfigurationRequestOperationDelegate <NSObject>
- (void)applicationConfigRequestOperationDidFail:(WLKServerConfigurationRequestOperation *)arg1;
- (void)applicationConfigRequestOperationDidFinish:(WLKServerConfigurationRequestOperation *)arg1;
@end
