//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CXCallDirectoryIdentificationEntry : NSObject <NSSecureCoding>
{
    NSString *_extensionIdentifier;
    NSString *_localizedExtensionName;
    NSString *_localizedExtensionContainingAppName;
    NSString *_localizedLabel;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *localizedLabel; // @synthesize localizedLabel=_localizedLabel;
@property(copy, nonatomic) NSString *localizedExtensionContainingAppName; // @synthesize localizedExtensionContainingAppName=_localizedExtensionContainingAppName;
@property(copy, nonatomic) NSString *localizedExtensionName; // @synthesize localizedExtensionName=_localizedExtensionName;
@property(copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

