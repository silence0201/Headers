//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSImage, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ReadingListFetcherInfo : NSObject
{
    struct URL _urlWK;
    struct String _titleWK;
    struct String _previewTextWK;
    struct String _siteNameWK;
    struct URL _mainImageURLWK;
    struct Image _mainImageWK;
    struct Data _webArchiveDataWK;
    struct Boolean _readerAvailableWK;
}

@property(nonatomic, getter=isReaderAvailableWK) struct Boolean readerAvailableWK; // @synthesize readerAvailableWK=_readerAvailableWK;
@property(nonatomic) struct Data webArchiveDataWK; // @synthesize webArchiveDataWK=_webArchiveDataWK;
@property(nonatomic) struct Image mainImageWK; // @synthesize mainImageWK=_mainImageWK;
@property(nonatomic) struct URL mainImageURLWK; // @synthesize mainImageURLWK=_mainImageURLWK;
@property(nonatomic) struct String siteNameWK; // @synthesize siteNameWK=_siteNameWK;
@property(nonatomic) struct String previewTextWK; // @synthesize previewTextWK=_previewTextWK;
@property(nonatomic) struct String titleWK; // @synthesize titleWK=_titleWK;
@property(nonatomic) struct URL urlWK; // @synthesize urlWK=_urlWK;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isReaderAvailable) BOOL readerAvailable;
@property(readonly, nonatomic) NSData *webArchiveData;
@property(readonly, nonatomic) NSImage *mainImage;
@property(readonly, nonatomic) NSURL *mainImageURL;
@property(readonly, nonatomic) NSString *siteName;
@property(readonly, nonatomic) NSString *previewText;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) struct Dictionary dictionaryRepresentationWK;
- (id)initWithDictionary:(struct Dictionary)arg1;

@end

