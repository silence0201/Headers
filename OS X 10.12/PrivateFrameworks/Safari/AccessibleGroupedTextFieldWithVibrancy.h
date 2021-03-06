//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/TextFieldWithVibrancy.h>

__attribute__((visibility("hidden")))
@interface AccessibleGroupedTextFieldWithVibrancy : TextFieldWithVibrancy
{
    BOOL _primaryElement;
    long long _siblingGroupingId;
}

@property(nonatomic, getter=isPrimaryElement) BOOL primaryElement; // @synthesize primaryElement=_primaryElement;
@property(nonatomic) long long siblingGroupingId; // @synthesize siblingGroupingId=_siblingGroupingId;
- (id)accessibilityAttributeValue:(id)arg1;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityValue;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

@end

