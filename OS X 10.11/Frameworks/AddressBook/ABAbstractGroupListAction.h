//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABUserInterfaceAction-Protocol.h>

@class ABGroupListController, NSString;
@protocol ABGroupHelperFactory;

__attribute__((visibility("hidden")))
@interface ABAbstractGroupListAction : NSObject <ABUserInterfaceAction>
{
    ABGroupListController *_groupListController;
    id <ABGroupHelperFactory> _helperFactory;
}

- (void)performWithSender:(id)arg1;
- (BOOL)validateWithMenuItem:(id)arg1;
- (void)dealloc;
- (id)initWithGroupListController:(id)arg1 helperFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
