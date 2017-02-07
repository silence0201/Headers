//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface UNSNotificationActionRecord : NSObject
{
    _Bool _authenticationRequired;
    _Bool _destructive;
    _Bool _foreground;
    NSString *_actionType;
    NSString *_identifier;
    NSString *_textInputButtonTitle;
    NSArray *_textInputButtonTitleLocalizationArguments;
    NSString *_textInputButtonTitleLocalizationKey;
    NSString *_textInputPlaceholder;
    NSArray *_textInputPlaceholderLocalizationArguments;
    NSString *_textInputPlaceholderLocalizationKey;
    NSString *_title;
    NSArray *_titleLocalizationArguments;
    NSString *_titleLocalizationKey;
}

@property(copy, nonatomic) NSString *titleLocalizationKey; // @synthesize titleLocalizationKey=_titleLocalizationKey;
@property(copy, nonatomic) NSArray *titleLocalizationArguments; // @synthesize titleLocalizationArguments=_titleLocalizationArguments;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *textInputPlaceholderLocalizationKey; // @synthesize textInputPlaceholderLocalizationKey=_textInputPlaceholderLocalizationKey;
@property(copy, nonatomic) NSArray *textInputPlaceholderLocalizationArguments; // @synthesize textInputPlaceholderLocalizationArguments=_textInputPlaceholderLocalizationArguments;
@property(copy, nonatomic) NSString *textInputPlaceholder; // @synthesize textInputPlaceholder=_textInputPlaceholder;
@property(copy, nonatomic) NSString *textInputButtonTitleLocalizationKey; // @synthesize textInputButtonTitleLocalizationKey=_textInputButtonTitleLocalizationKey;
@property(copy, nonatomic) NSArray *textInputButtonTitleLocalizationArguments; // @synthesize textInputButtonTitleLocalizationArguments=_textInputButtonTitleLocalizationArguments;
@property(copy, nonatomic) NSString *textInputButtonTitle; // @synthesize textInputButtonTitle=_textInputButtonTitle;
@property(nonatomic, getter=isForeground) _Bool foreground; // @synthesize foreground=_foreground;
@property(nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
@property(nonatomic, getter=isAuthenticationRequired) _Bool authenticationRequired; // @synthesize authenticationRequired=_authenticationRequired;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
