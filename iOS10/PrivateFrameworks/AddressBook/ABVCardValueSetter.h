//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ABVCardValueSetter : NSObject
{
}

- (void)setValueInTemporaryCache:(id)arg1 forProperty:(unsigned int)arg2;
- (id)fullName;
- (id)imageData;
- (_Bool)setImageData:(id)arg1;
- (_Bool)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (void *)valueForProperty:(unsigned int)arg1;
- (_Bool)setValue:(void *)arg1 forProperty:(unsigned int)arg2;
- (_Bool)propertyIsValidForPerson:(unsigned int)arg1;

@end

