//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet;

@interface CXCallDirectorySanitizer : NSObject
{
    NSCharacterSet *_phoneNumbersCharacterSet;
    NSCharacterSet *_nonPhoneNumbersCharacterSet;
    NSCharacterSet *_phoneNumbersIgnoredCharacterSet;
}

@property(readonly, nonatomic) NSCharacterSet *phoneNumbersIgnoredCharacterSet; // @synthesize phoneNumbersIgnoredCharacterSet=_phoneNumbersIgnoredCharacterSet;
@property(readonly, nonatomic) NSCharacterSet *nonPhoneNumbersCharacterSet; // @synthesize nonPhoneNumbersCharacterSet=_nonPhoneNumbersCharacterSet;
@property(readonly, nonatomic) NSCharacterSet *phoneNumbersCharacterSet; // @synthesize phoneNumbersCharacterSet=_phoneNumbersCharacterSet;
- (void).cxx_destruct;
- (id)canonicalizedPhoneNumber:(id)arg1;
- (id)init;

@end

