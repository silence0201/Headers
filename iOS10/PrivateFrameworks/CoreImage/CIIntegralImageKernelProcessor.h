//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIImageProcessorKernel.h>

__attribute__((visibility("hidden")))
@interface CIIntegralImageKernelProcessor : CIImageProcessorKernel
{
}

+ (_Bool)synchronizeInputs;
+ (int)outputFormat;
+ (int)formatForInputAtIndex:(int)arg1;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 output:(struct CGRect)arg3;
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;

@end

