//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSPrintInfoDictionaryProxy;

@interface NSPrintInfoAdditionalIVars : NSObject
{
    struct OpaquePMPrintSession *printSession;
    struct OpaquePMPageFormat *pageFormat;
    struct OpaquePMPrintSettings *printSettings;
    NSData *flattenedPageFormatData;
    NSData *flattenedPrintSettingsData;
    BOOL printSessionIsReconciled;
    BOOL pageFormatIsReconciled;
    BOOL printSettingsIsReconciled;
    BOOL pageFormatIsValidated;
    BOOL printSettingsIsValidated;
    NSPrintInfoDictionaryProxy *attributesDictionaryProxy;
    NSPrintInfoDictionaryProxy *printSettingsDictionaryProxy;
    BOOL printerWasSetExplicitly;
}

@end

