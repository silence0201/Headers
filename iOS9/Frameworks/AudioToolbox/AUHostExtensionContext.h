//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <AudioToolbox/AUAudioUnitHostProtocol-Protocol.h>

@class AUAudioUnit_XH, NSExtension, NSUUID;
@protocol AUAudioUnitXPCProtocol;

@interface AUHostExtensionContext : NSExtensionContext <AUAudioUnitHostProtocol>
{
    NSExtension *_extension;
    NSUUID *_requestIdentifier;
    AUAudioUnit_XH *_audioUnit;
    id <AUAudioUnitXPCProtocol> _remote;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(nonatomic) id <AUAudioUnitXPCProtocol> remote; // @synthesize remote=_remote;
@property(nonatomic) AUAudioUnit_XH *audioUnit; // @synthesize audioUnit=_audioUnit;
@property(retain, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void)recordParameterEvents:(id)arg1;
- (void)parameterChanged:(unsigned long long)arg1 value:(float)arg2;
- (void)propertiesChanged:(id)arg1;
- (void)dealloc;

@end

