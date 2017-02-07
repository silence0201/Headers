//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreFoundation/NSSecureCoding-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface ISSignInPromptResponse : NSObject <NSSecureCoding>
{
    long long returnCode;
    NSString *username;
    NSString *password;
    NSNumber *suppressionCheckboxState;
    NSDictionary *serverResponse;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSDictionary *serverResponse; // @synthesize serverResponse;
@property(retain) NSNumber *suppressionCheckboxState; // @synthesize suppressionCheckboxState;
@property(retain) NSString *password; // @synthesize password;
@property(retain) NSString *username; // @synthesize username;
@property long long returnCode; // @synthesize returnCode;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
