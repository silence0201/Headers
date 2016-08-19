//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/SearchUIRichTextItem-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MKSearchUIRichTextItem : NSObject <SearchUIRichTextItem>
{
    NSString *_text;
    NSArray *_formattedTextItems;
    NSString *_formattedTextDelimiter;
    unsigned long long _textMaxLines;
    double _starRating;
    NSArray *_icons;
    NSString *_contentAdvisory;
}

@property(readonly, copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property(readonly, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(readonly, nonatomic) double starRating; // @synthesize starRating=_starRating;
@property(readonly, nonatomic) unsigned long long textMaxLines; // @synthesize textMaxLines=_textMaxLines;
@property(readonly, copy, nonatomic) NSString *formattedTextDelimiter; // @synthesize formattedTextDelimiter=_formattedTextDelimiter;
@property(readonly, copy, nonatomic) NSArray *formattedTextItems; // @synthesize formattedTextItems=_formattedTextItems;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 rating:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

