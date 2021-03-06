//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMachPort;

@interface SimDevicePasteboardConnection : NSObject
{
    NSMachPort *_pasteboardSupportPort;
}

@property (retain, nonatomic) NSMachPort *pasteboardSupportPort;
- (void).cxx_destruct;
- (void)refreshPasteboard;
- (id)convertDataWithType:(id)arg1 data:(id)arg2 toType:(id)arg3 error:(id *)arg4;
- (id)readDataWithType:(id)arg1 itemIndex:(unsigned long long)arg2 changeCount:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)writeDataArray:(id)arg1 dataProviderPort:(id)arg2 error:(id *)arg3;
- (id)readDataArrayWithTypes:(id)arg1 changeCount:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)subscribeWithCallbackPort:(id)arg1 changeCount:(unsigned long long *)arg2 itemsDatatypes:(id *)arg3 error:(id *)arg4;
- (id)createPasteboardSupportPortWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end
