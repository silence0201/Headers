//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, UIColor, _UIDocumentPickerNSURLWrapper;

@protocol _UIDocumentPickerExtensionViewController <NSObject>
- (void)_setTintColor:(UIColor *)arg1;
- (void)_documentPickerDidDismiss;
- (void)_prepareWithExtensionInfo:(NSDictionary *)arg1 completionHandler:(void (^)(unsigned int))arg2;
- (void)_setUploadURLWrapper:(_UIDocumentPickerNSURLWrapper *)arg1;
- (void)_setPickerMode:(unsigned long long)arg1;
- (void)_setPickableTypes:(NSArray *)arg1;
@end

