//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

@interface _WKActivatedElementInfo : NSObject
{
    struct RetainPtr<NSURL> _URL;
    struct RetainPtr<NSString> _title;
    struct CGPoint _interactionLocation;
    struct RefPtr<WebKit::ShareableBitmap> _image;
    struct RetainPtr<UIImage> _uiImage;
    long long _type;
    struct CGRect _boundingRect;
}

@property(readonly, nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIImage *image;
@property(readonly, nonatomic) struct CGPoint _interactionLocation;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSURL *URL;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 location:(struct CGPoint)arg3 title:(id)arg4 rect:(struct CGRect)arg5 image:(struct ShareableBitmap *)arg6;

@end

