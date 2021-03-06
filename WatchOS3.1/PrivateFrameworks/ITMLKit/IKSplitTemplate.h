//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class IKDOMFeatureNavigationDocument, NSString;

@interface IKSplitTemplate : IKViewElement
{
    NSString *_displayMode;
    IKDOMFeatureNavigationDocument *_leftNavigationDocument;
    IKDOMFeatureNavigationDocument *_rightNavigationDocument;
}

+ (id)supportedFeatures;
@property(readonly, nonatomic) IKDOMFeatureNavigationDocument *rightNavigationDocument; // @synthesize rightNavigationDocument=_rightNavigationDocument;
@property(readonly, nonatomic) IKDOMFeatureNavigationDocument *leftNavigationDocument; // @synthesize leftNavigationDocument=_leftNavigationDocument;
@property(copy, nonatomic) NSString *displayMode; // @synthesize displayMode=_displayMode;
- (void).cxx_destruct;
- (id)_featureWithName:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

