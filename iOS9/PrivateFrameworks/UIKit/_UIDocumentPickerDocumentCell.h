//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIDocumentPickerCell.h>

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDocumentCell : _UIDocumentPickerCell
{
    _Bool _enabled;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_showPickableDiagnostic;
- (void)updateThumbnail;
- (void)updateContents;
- (void)reloadItem:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;

@end

