//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNContactChangesNotifier, CNContactStore, CNContactsEnvironment, CNUIAccountsFacade, CNUIContactsEnvironmentServicesProvider, CNUIFMFFacade, CNUIIDSAvailabilityProvider, CNUIMeContactMonitor, PRPersonaStore, _DECConsumer;
@protocol CNSchedulerProvider, CNUIPRLikenessResolver, CNUIPlaceholderProviderFactory, CNUIUserActionDiscoveringEnvironment;

@interface CNUIContactsEnvironment : NSObject
{
    long long _duetConsumer_once;
    long long _accountsFacade_once;
    long long _fmfFacade_once;
    long long _personaStore_once;
    long long _contactStore_once;
    long long _defaultSchedulerProvider_once;
    long long _placeholderProviderFactory_once;
    long long _meMonitor_once;
    long long _cachingLikenessResolver_once;
    long long _actionDiscoveringEnvironment_once;
    long long _idsAvailabilityProvider_once;
    long long _contactChangesNotifier_once;
    CNUIContactsEnvironmentServicesProvider *_servicesProvider;
    CNUIAccountsFacade *_accountsFacade;
    CNUIFMFFacade *_fmfFacade;
    PRPersonaStore *_personaStore;
    id <CNSchedulerProvider> _defaultSchedulerProvider;
    CNContactStore *_contactStore;
    id <CNUIPlaceholderProviderFactory> _placeholderProviderFactory;
    CNUIMeContactMonitor *_meMonitor;
    id <CNUIPRLikenessResolver> _cachingLikenessResolver;
    id <CNUIUserActionDiscoveringEnvironment> _actionDiscoveringEnvironment;
    CNUIIDSAvailabilityProvider *_idsAvailabilityProvider;
    CNContactChangesNotifier *_contactChangesNotifier;
    CNContactsEnvironment *_cnEnvironment;
}

+ (id)currentEnvironment;
@property(readonly, nonatomic) CNContactsEnvironment *cnEnvironment; // @synthesize cnEnvironment=_cnEnvironment;
@property(retain, nonatomic) CNContactChangesNotifier *contactChangesNotifier; // @synthesize contactChangesNotifier=_contactChangesNotifier;
@property(retain, nonatomic) CNUIIDSAvailabilityProvider *idsAvailabilityProvider; // @synthesize idsAvailabilityProvider=_idsAvailabilityProvider;
@property(retain, nonatomic) id <CNUIUserActionDiscoveringEnvironment> actionDiscoveringEnvironment; // @synthesize actionDiscoveringEnvironment=_actionDiscoveringEnvironment;
@property(retain, nonatomic) id <CNUIPRLikenessResolver> cachingLikenessResolver; // @synthesize cachingLikenessResolver=_cachingLikenessResolver;
@property(retain, nonatomic) CNUIMeContactMonitor *meMonitor; // @synthesize meMonitor=_meMonitor;
@property(retain, nonatomic) id <CNUIPlaceholderProviderFactory> placeholderProviderFactory; // @synthesize placeholderProviderFactory=_placeholderProviderFactory;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) id <CNSchedulerProvider> defaultSchedulerProvider; // @synthesize defaultSchedulerProvider=_defaultSchedulerProvider;
@property(retain, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property(retain, nonatomic) CNUIFMFFacade *fmfFacade; // @synthesize fmfFacade=_fmfFacade;
@property(retain, nonatomic) CNUIAccountsFacade *accountsFacade; // @synthesize accountsFacade=_accountsFacade;
@property(readonly, nonatomic) CNUIContactsEnvironmentServicesProvider *servicesProvider; // @synthesize servicesProvider=_servicesProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) _DECConsumer *duetConsumer;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)init;

@end

