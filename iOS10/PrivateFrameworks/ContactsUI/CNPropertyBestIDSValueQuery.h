//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNPropertyGroupItem, CNPropertyIDSRequest, NSArray, NSMutableArray;
@protocol CNPropertyBestIDSValueQueryDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyBestIDSValueQuery : NSObject
{
    NSMutableArray *_validIDSItems;
    id <CNPropertyBestIDSValueQueryDelegate> _delegate;
    NSArray *_propertyItems;
    CNPropertyIDSRequest *_idsRequest;
}

@property(retain, nonatomic) CNPropertyIDSRequest *idsRequest; // @synthesize idsRequest=_idsRequest;
@property(retain, nonatomic) NSArray *propertyItems; // @synthesize propertyItems=_propertyItems;
@property(nonatomic) __weak id <CNPropertyBestIDSValueQueryDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *validIDSItems; // @synthesize validIDSItems=_validIDSItems;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNPropertyGroupItem *bestIDSProperty;
- (void)cancel;
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2;

@end

