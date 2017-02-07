//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (SafariSharedExtras)
+ (void)safari_enumeratePossibleURLsForUserTypedString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (struct _NSRange)safari_hostAndPortRangeFromUserTypedString:(id)arg1;
+ (id)safari_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)safari_URLWithDataAsString:(id)arg1;
+ (id)safari_URLWithUserTypedString:(id)arg1;
- (id)safari_userVisibleHostWithoutWWWSubdomain;
- (id)safari_userVisibleHost;
- (id)safari_userVisibleString;
- (id)safari_originalDataAsString;
- (id)safari_displayNameWithTitle:(id)arg1;
- (BOOL)safari_hasCharactersBeyondPath;
- (id)safari_canonicalURL;
- (id)safari_URLByDeletingScheme;
- (id)safari_URLByDeletingPort;
- (id)safari_URLByReplacingQueryWithString:(id)arg1;
- (id)safari_URLByReplacingSchemeWithString:(id)arg1;
- (id)safari_URLByReplacingHostWithString:(id)arg1;
- (id)_safari_URLByReplacingComponent:(long long)arg1 withString:(id)arg2;
- (id)_safari_URLByReplacingComponent:(long long)arg1 includingSeparators:(BOOL)arg2 withString:(id)arg3;
- (BOOL)safari_hasSameOriginAsURL:(id)arg1;
- (BOOL)safari_isDataURL;
- (BOOL)safari_isHTTPFamilyURL;
- (BOOL)safari_hasScheme:(id)arg1;
- (id)safari_path;
@end
