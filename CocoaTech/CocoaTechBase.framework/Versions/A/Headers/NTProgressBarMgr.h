//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTSimpleTimerProtocol.h"

@class NSLock, NSMutableArray, NTSimpleTimer;

@interface NTProgressBarMgr : NSObject <NTSimpleTimerProtocol>
{
    NSLock *_threadLock;
    NSMutableArray *_progressBars;
    NTSimpleTimer *_updateTimer;
}

+ (void)initialize;
+ (id)sharedInstance;
- (id)init;
- (id)newProgressBar:(id)arg1 indeterminate:(BOOL)arg2 stoppable:(BOOL)arg3;
- (void)dealloc;
- (void)delegate_simpleTimerNotification:(id)arg1;

@end

