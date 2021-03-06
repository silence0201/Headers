//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableData, NSNumber;

@interface CoreWiFiWPSTLVs : NSObject
{
    NSData *rawTLVs;
    BOOL isValid;
    NSNumber *apChannel;
    NSNumber *associationState;
    NSNumber *authenticationType;
    NSNumber *authenticationTypeFlags;
    NSData *authenticator;
    NSNumber *configMethods;
    NSNumber *configurationError;
    NSData *confirmationURL4;
    NSData *confirmationURL6;
    NSNumber *connectionType;
    NSNumber *connectionTypeFlags;
    NSMutableArray *credentials;
    NSData *deviceName;
    NSNumber *devicePasswordID;
    NSData *enrolleeHash1;
    NSData *enrolleeHash2;
    NSData *enrolleeSNonce1;
    NSData *enrolleeSNonce2;
    NSData *encryptedSettings;
    NSMutableData *decryptedSettings;
    NSNumber *encryptionType;
    NSNumber *encryptionTypeFlags;
    NSData *enrolleeNonce;
    NSNumber *featureID;
    NSData *identity;
    NSData *identityProof;
    NSData *keyWrapAuthenticator;
    NSData *keyIdentifier;
    NSData *MACAddress;
    NSData *manufacturer;
    NSNumber *messageType;
    NSData *modelName;
    NSData *modelNumber;
    NSNumber *networkIndex;
    NSData *networkKey;
    NSNumber *networkKeyIndex;
    NSData *updatedDeviceName;
    NSData *updatedPassword;
    NSData *oobDevicePassword;
    NSNumber *osVersion;
    NSNumber *powerLevel;
    NSNumber *pskCurrent;
    NSNumber *pskMax;
    NSData *publicKey;
    NSNumber *radioEnabled;
    NSNumber *rebootRequest;
    NSNumber *registrarCurrent;
    NSNumber *registrarEstablished;
    NSData *registrarList;
    NSNumber *registrarMax;
    NSData *registrarNonce;
    NSNumber *requestType;
    NSNumber *responseType;
    NSNumber *rfBands;
    NSData *registrarHash1;
    NSData *registrarHash2;
    NSData *registrarSNonce1;
    NSData *registrarSNonce2;
    NSNumber *selectedRegistrar;
    NSData *serialNumber;
    NSNumber *wpsSetupState;
    NSData *ssid;
    NSNumber *totalNetworks;
    NSData *enrolleeUUID;
    NSData *registrarUUID;
    NSMutableArray *vendorExtensions;
    NSNumber *version;
    NSData *x509CertificateRequest;
    NSData *x509Certificate;
    NSData *EAPIdentity;
    NSData *messageCounter;
    NSData *publicKeyHash;
    NSData *rekeyKey;
    NSNumber *keyLifetime;
    NSNumber *permittedConfigMethods;
    NSNumber *selectedRegistrarConfigMethods;
    NSMutableArray *primaryDeviceTypes;
    NSMutableArray *secondaryDeviceTypes;
    NSNumber *portableDevice;
    NSNumber *apSetupLocked;
    NSData *applicationExtension;
    NSData *EAPType;
    NSData *initializationVector;
    NSNumber *keyProvidedAutomatically;
    NSNumber *enabled8021X;
    NSData *appSessionKey;
    NSNumber *wepTransmitKey;
}

+ (id)packageTLV:(unsigned long long)arg1 withDeviceTypeArray:(id)arg2;
+ (id)packageTLV:(unsigned long long)arg1 withNumber32:(id)arg2;
+ (id)packageTLV:(unsigned long long)arg1 withNumber16:(id)arg2;
+ (id)packageTLV:(unsigned long long)arg1 withNumber8:(id)arg2;
+ (id)packageTLV:(unsigned long long)arg1 withData:(id)arg2;
+ (id)packageTLV:(unsigned long long)arg1 withString:(id)arg2;
+ (id)packageTLV:(unsigned long long)arg1 withBytes:(const void *)arg2 withLength:(unsigned long long)arg3;
+ (id)parseDataElement8021XEnabled:(char *)arg1 withLength:(unsigned long long)arg2;
+ (id)parseDataElementKeyProvidedAutomatically:(char *)arg1 withLength:(unsigned long long)arg2;
+ (id)parseDataElementEAPType:(char *)arg1 withLength:(unsigned long long)arg2;
+ (id)parseDataElementEAPIdentitity:(char *)arg1 withLength:(unsigned long long)arg2;
+ (id)parseDataElementSSID:(char *)arg1 withLength:(unsigned long long)arg2;
+ (id)parseDataElementNetworkKeyIndex:(char *)arg1 withLength:(unsigned long long)arg2;
+ (id)parseDataElementNetworkKey:(char *)arg1 withLength:(unsigned long long)arg2;
+ (id)parseDataElementNetworkIndex:(char *)arg1 withLength:(unsigned long long)arg2;
+ (id)parseDataElementMACAddress:(char *)arg1 withLength:(unsigned long long)arg2;
+ (id)parseDataElementEncryptionType:(char *)arg1 withLength:(unsigned long long)arg2;
+ (id)parseDataElementAuthenticationType:(char *)arg1 withLength:(unsigned long long)arg2;
@property(retain, nonatomic) NSNumber *wepTransmitKey; // @synthesize wepTransmitKey;
@property(retain, nonatomic) NSData *appSessionKey; // @synthesize appSessionKey;
@property(retain, nonatomic) NSNumber *enabled8021X; // @synthesize enabled8021X;
@property(retain, nonatomic) NSNumber *keyProvidedAutomatically; // @synthesize keyProvidedAutomatically;
@property(retain, nonatomic) NSData *initializationVector; // @synthesize initializationVector;
@property(retain, nonatomic) NSData *EAPType; // @synthesize EAPType;
@property(retain, nonatomic) NSData *applicationExtension; // @synthesize applicationExtension;
@property(retain, nonatomic) NSNumber *apSetupLocked; // @synthesize apSetupLocked;
@property(retain, nonatomic) NSNumber *portableDevice; // @synthesize portableDevice;
@property(retain, nonatomic) NSMutableArray *secondaryDeviceTypes; // @synthesize secondaryDeviceTypes;
@property(retain, nonatomic) NSMutableArray *primaryDeviceTypes; // @synthesize primaryDeviceTypes;
@property(retain, nonatomic) NSNumber *selectedRegistrarConfigMethods; // @synthesize selectedRegistrarConfigMethods;
@property(retain, nonatomic) NSNumber *permittedConfigMethods; // @synthesize permittedConfigMethods;
@property(retain, nonatomic) NSNumber *keyLifetime; // @synthesize keyLifetime;
@property(retain, nonatomic) NSData *rekeyKey; // @synthesize rekeyKey;
@property(retain, nonatomic) NSData *publicKeyHash; // @synthesize publicKeyHash;
@property(retain, nonatomic) NSData *messageCounter; // @synthesize messageCounter;
@property(retain, nonatomic) NSData *EAPIdentity; // @synthesize EAPIdentity;
@property(retain, nonatomic) NSData *x509Certificate; // @synthesize x509Certificate;
@property(retain, nonatomic) NSData *x509CertificateRequest; // @synthesize x509CertificateRequest;
@property(retain, nonatomic) NSNumber *version; // @synthesize version;
@property(retain, nonatomic) NSMutableArray *vendorExtensions; // @synthesize vendorExtensions;
@property(retain, nonatomic) NSData *registrarUUID; // @synthesize registrarUUID;
@property(retain, nonatomic) NSData *enrolleeUUID; // @synthesize enrolleeUUID;
@property(retain, nonatomic) NSNumber *totalNetworks; // @synthesize totalNetworks;
@property(retain, nonatomic) NSData *ssid; // @synthesize ssid;
@property(retain, nonatomic) NSNumber *wpsSetupState; // @synthesize wpsSetupState;
@property(retain, nonatomic) NSData *serialNumber; // @synthesize serialNumber;
@property(retain, nonatomic) NSNumber *selectedRegistrar; // @synthesize selectedRegistrar;
@property(retain, nonatomic) NSData *registrarSNonce2; // @synthesize registrarSNonce2;
@property(retain, nonatomic) NSData *registrarSNonce1; // @synthesize registrarSNonce1;
@property(retain, nonatomic) NSData *registrarHash2; // @synthesize registrarHash2;
@property(retain, nonatomic) NSData *registrarHash1; // @synthesize registrarHash1;
@property(retain, nonatomic) NSNumber *rfBands; // @synthesize rfBands;
@property(retain, nonatomic) NSNumber *responseType; // @synthesize responseType;
@property(retain, nonatomic) NSNumber *requestType; // @synthesize requestType;
@property(retain, nonatomic) NSData *registrarNonce; // @synthesize registrarNonce;
@property(retain, nonatomic) NSNumber *registrarMax; // @synthesize registrarMax;
@property(retain, nonatomic) NSData *registrarList; // @synthesize registrarList;
@property(retain, nonatomic) NSNumber *registrarEstablished; // @synthesize registrarEstablished;
@property(retain, nonatomic) NSNumber *registrarCurrent; // @synthesize registrarCurrent;
@property(retain, nonatomic) NSNumber *rebootRequest; // @synthesize rebootRequest;
@property(retain, nonatomic) NSNumber *radioEnabled; // @synthesize radioEnabled;
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey;
@property(retain, nonatomic) NSNumber *pskMax; // @synthesize pskMax;
@property(retain, nonatomic) NSNumber *pskCurrent; // @synthesize pskCurrent;
@property(retain, nonatomic) NSNumber *powerLevel; // @synthesize powerLevel;
@property(retain, nonatomic) NSNumber *osVersion; // @synthesize osVersion;
@property(retain, nonatomic) NSData *oobDevicePassword; // @synthesize oobDevicePassword;
@property(retain, nonatomic) NSData *updatedPassword; // @synthesize updatedPassword;
@property(retain, nonatomic) NSData *updatedDeviceName; // @synthesize updatedDeviceName;
@property(retain, nonatomic) NSNumber *networkKeyIndex; // @synthesize networkKeyIndex;
@property(retain, nonatomic) NSData *networkKey; // @synthesize networkKey;
@property(retain, nonatomic) NSNumber *networkIndex; // @synthesize networkIndex;
@property(retain, nonatomic) NSData *modelNumber; // @synthesize modelNumber;
@property(retain, nonatomic) NSData *modelName; // @synthesize modelName;
@property(retain, nonatomic) NSNumber *messageType; // @synthesize messageType;
@property(retain, nonatomic) NSData *manufacturer; // @synthesize manufacturer;
@property(retain, nonatomic) NSData *MACAddress; // @synthesize MACAddress;
@property(retain, nonatomic) NSData *keyIdentifier; // @synthesize keyIdentifier;
@property(retain, nonatomic) NSData *keyWrapAuthenticator; // @synthesize keyWrapAuthenticator;
@property(retain, nonatomic) NSData *identityProof; // @synthesize identityProof;
@property(retain, nonatomic) NSData *identity; // @synthesize identity;
@property(retain, nonatomic) NSNumber *featureID; // @synthesize featureID;
@property(retain, nonatomic) NSData *enrolleeNonce; // @synthesize enrolleeNonce;
@property(retain, nonatomic) NSNumber *encryptionTypeFlags; // @synthesize encryptionTypeFlags;
@property(retain, nonatomic) NSNumber *encryptionType; // @synthesize encryptionType;
@property(retain, nonatomic) NSMutableData *decryptedSettings; // @synthesize decryptedSettings;
@property(retain, nonatomic) NSData *encryptedSettings; // @synthesize encryptedSettings;
@property(retain, nonatomic) NSData *enrolleeSNonce2; // @synthesize enrolleeSNonce2;
@property(retain, nonatomic) NSData *enrolleeSNonce1; // @synthesize enrolleeSNonce1;
@property(retain, nonatomic) NSData *enrolleeHash2; // @synthesize enrolleeHash2;
@property(retain, nonatomic) NSData *enrolleeHash1; // @synthesize enrolleeHash1;
@property(retain, nonatomic) NSNumber *devicePasswordID; // @synthesize devicePasswordID;
@property(retain, nonatomic) NSData *deviceName; // @synthesize deviceName;
@property(retain, nonatomic) NSMutableArray *credentials; // @synthesize credentials;
@property(retain, nonatomic) NSNumber *connectionTypeFlags; // @synthesize connectionTypeFlags;
@property(retain, nonatomic) NSNumber *connectionType; // @synthesize connectionType;
@property(retain, nonatomic) NSData *confirmationURL6; // @synthesize confirmationURL6;
@property(retain, nonatomic) NSData *confirmationURL4; // @synthesize confirmationURL4;
@property(retain, nonatomic) NSNumber *configurationError; // @synthesize configurationError;
@property(retain, nonatomic) NSNumber *configMethods; // @synthesize configMethods;
@property(retain, nonatomic) NSData *authenticator; // @synthesize authenticator;
@property(retain, nonatomic) NSNumber *authenticationTypeFlags; // @synthesize authenticationTypeFlags;
@property(retain, nonatomic) NSNumber *authenticationType; // @synthesize authenticationType;
@property(retain, nonatomic) NSNumber *associationState; // @synthesize associationState;
@property(retain, nonatomic) NSNumber *apChannel; // @synthesize apChannel;
@property(readonly, nonatomic) BOOL isValid; // @synthesize isValid;
@property(readonly, retain, nonatomic) NSData *rawTLVs; // @synthesize rawTLVs;
- (id)wepTransmitKeyTLV;
- (id)appSessionKeyTLV;
- (id)enabled8021XTLV;
- (id)keyProvidedAutomaticallyTLV;
- (id)initializationVectorTLV;
- (id)EAPTypeTLV;
- (id)applicationExtensionTLV;
- (id)apSetupLockedTLV;
- (id)portableDeviceTLV;
- (id)secondaryDeviceTypesTLV;
- (id)primaryDeviceTypesTLV;
- (id)selectedRegistrarConfigMethodsTLV;
- (id)permittedConfigMethodsTLV;
- (id)keyLifetimeTLV;
- (id)rekeyKeyTLV;
- (id)publicKeyHashTLV;
- (id)messageCounterTLV;
- (id)EAPIdentityTLV;
- (id)x509CertificateTLV;
- (id)x509CertificateRequestTLV;
- (id)versionTLV;
- (id)vendorExtensionsTLV;
- (id)registrarUUIDTLV;
- (id)enrolleeUUIDTLV;
- (id)totalNetworksTLV;
- (id)ssidTLV;
- (id)wpsSetupStateTLV;
- (id)serialNumberTLV;
- (id)selectedRegistrarTLV;
- (id)registrarSNonce2TLV;
- (id)registrarSNonce1TLV;
- (id)registrarHash2TLV;
- (id)registrarHash1TLV;
- (id)rfBandsTLV;
- (id)responseTypeTLV;
- (id)requestTypeTLV;
- (id)registrarNonceTLV;
- (id)registrarMaxTLV;
- (id)registrarListTLV;
- (id)registrarEstablishedTLV;
- (id)registrarCurrentTLV;
- (id)rebootRequestTLV;
- (id)radioEnabledTLV;
- (id)publicKeyTLV;
- (id)pskMaxTLV;
- (id)pskCurrentTLV;
- (id)powerLevelTLV;
- (id)osVersionTLV;
- (id)oobDevicePasswordTLV;
- (id)updatedPasswordTLV;
- (id)updatedDeviceNameTLV;
- (id)networkKeyIndexTLV;
- (id)networkKeyTLV;
- (id)networkIndexTLV;
- (id)modelNumberTLV;
- (id)modelNameTLV;
- (id)messageTypeTLV;
- (id)manufacturerTLV;
- (id)MACAddressTLV;
- (id)keyIdentifierTLV;
- (id)keyWrapAuthenticatorTLV;
- (id)identityProofTLV;
- (id)identityTLV;
- (id)featureIDTLV;
- (id)enrolleeNonceTLV;
- (id)encryptionTypeFlagsTLV;
- (id)encryptionTypeTLV;
- (id)encryptedSettingsTLV;
- (id)enrolleeSNonce2TLV;
- (id)enrolleeSNonce1TLV;
- (id)enrolleeHash2TLV;
- (id)enrolleeHash1TLV;
- (id)devicePasswordIDTLV;
- (id)deviceNameTLV;
- (id)credentialTLV;
- (id)connectionTypeFlagsTLV;
- (id)connectionTypeTLV;
- (id)confirmationURL6TLV;
- (id)confirmationURL4TLV;
- (id)configurationErrorTLV;
- (id)configMethodsTLV;
- (id)authenticatorTLV;
- (id)authenticationTypeFlagsTLV;
- (id)authenticationTypeTLV;
- (id)associationStateTLV;
- (id)apChannelTLV;
- (void)parseDataElementWEPTransmitKey:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementAppSessionKey:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementInitializationVector:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementApplicationExtension:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementAPSetupLocked:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementPortableDevice:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementSecondaryDeviceTypeList:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementPrimaryDeviceType:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementSelectedRegistrarConfigMethods:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementPermittedConfigMethods:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementKeyLifetime:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementRekeyKey:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementPublicKeyHash:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementMessageCounter:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementX509Certificate:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementX509CertificateRequest:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementVersion:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementVendorExtension:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementUUIDR:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementUUIDE:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementTotalNetworks:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementWiFiProtectedSetupState:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementSerialNumber:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementSelectedRegistrar:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementRSNonce2:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementRSNonce1:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementRHash2:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementRHash1:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementRFBands:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementResponseType:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementRequestType:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementRegistrarNonce:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementRegistrarMax:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementRegistrarList:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementRegistrarEstablished:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementRegistrarCurrent:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementReboot:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementRadioEnabled:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementPublicKey:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementPSKMax:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementPSKCurrent:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementPowerLevel:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementOSVersion:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementOOBDevicePassword:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementNewPassword:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementNewDeviceName:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementModelNumber:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementModelName:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementMessageType:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementManufacturer:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementKeyIdentifier:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementKeyWrapAuthenticator:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementIdentityProof:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementIdentity:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementFeatureID:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementEnrolleeNonce:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementEncryptionTypeFlags:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementEncryptedSettings:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementESNonce2:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementESNonce1:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementEHash2:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementEHash1:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementDevicePasswordID:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementDeviceName:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementCredential:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementConnectionTypeFlags:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementConnectionType:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementConfirmationURL6:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementConfirmationURL4:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementConfigurationError:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementConfigMethods:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementAuthenticator:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementAuthenticationTypeFlags:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementAssociationState:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseDataElementAPChannel:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)parseBuffer:(id)arg1;
- (void)parseDecryptedSettings;
- (void)parseRawData;
- (id)description;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

