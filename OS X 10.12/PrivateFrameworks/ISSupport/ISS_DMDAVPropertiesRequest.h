//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DMDAVPropertiesRequest : ISS_DAVRequest
{
}

+ (id)propFindRequestWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4;
+ (id)propPatchWithSession:(id)arg1 URI:(id)arg2 updatingProps:(id)arg3 inNameSpace:(id)arg4 withContext:(id)arg5;
- (void)_initForPropFindWithDepth:(id)arg1 lookingForProps:(id)arg2;
- (void)_initForPropPatchUpdatingProps:(id)arg1 inNameSpace:(id)arg2 withContext:(id)arg3;
- (id)initPropFindWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4;
- (id)initPropPatchWithSession:(id)arg1 URI:(id)arg2 updatingProps:(id)arg3 inNameSpace:(id)arg4 withContext:(id)arg5;

@end
