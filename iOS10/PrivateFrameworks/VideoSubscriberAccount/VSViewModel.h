//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface VSViewModel : NSObject
{
    unsigned long long _viewState;
    unsigned long long _validationState;
    NSError *_error;
    NSString *_title;
    unsigned long long _deleteAccountState;
}

@property(nonatomic) unsigned long long deleteAccountState; // @synthesize deleteAccountState=_deleteAccountState;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long validationState; // @synthesize validationState=_validationState;
@property(nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;
- (void).cxx_destruct;

@end

