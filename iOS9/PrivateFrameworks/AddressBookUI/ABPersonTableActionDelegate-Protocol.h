//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBookUI/ABStyleProviding-Protocol.h>
#import <AddressBookUI/NSObject-Protocol.h>

@class ABPersonTableAction, ABPropertyGroup, UIButton;

@protocol ABPersonTableActionDelegate <NSObject, ABStyleProviding>

@optional
- (void)action:(ABPersonTableAction *)arg1 willShowButton:(UIButton *)arg2 forValueAtIndex:(long long)arg3 inPropertyGroup:(ABPropertyGroup *)arg4;
- (void)presentDifferentiationSheetForAction:(ABPersonTableAction *)arg1;
@end

