//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MUCGPDFAnnotationAdaptor : NSObject
{
}

+ (id)_concreteDictionaryRepresentationOfAKAnnotation:(id)arg1;
+ (id)_concreteAKAnnotationWithCGPDFAnnotation:(struct CGPDFAnnotation *)arg1 ofPage:(struct CGPDFPage *)arg2;
+ (id)pdfDictionaryRepresentationOfAKAnnotation:(id)arg1;
+ (id)newPlaceholderAKAnnotationWithCGPDFAnnotation:(struct CGPDFAnnotation *)arg1 ofPage:(struct CGPDFPage *)arg2;
+ (id)newAKAnnotationWithCGPDFAnnotation:(struct CGPDFAnnotation *)arg1 ofPage:(struct CGPDFPage *)arg2;
+ (id)supportedAnnotationTypes;

@end
