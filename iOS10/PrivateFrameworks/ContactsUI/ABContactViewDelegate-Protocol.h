//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>

@class CNCardGroup, CNContactView;

@protocol ABContactViewDelegate <NSObject, UITableViewDelegate>

@optional
- (void)contactView:(CNContactView *)arg1 didSelectItemAtIndex:(long long)arg2 inGroup:(CNCardGroup *)arg3;
- (double)contactView:(CNContactView *)arg1 heightForItemAtIndex:(long long)arg2 inGroup:(CNCardGroup *)arg3;
- (long long)numberOfGroupsInContactView:(CNContactView *)arg1;
@end

