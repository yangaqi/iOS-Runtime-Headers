/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

@interface AppLaunchStatsLaunchQueue : NSObject <DuetLoggerProtocol> {
    NSDate *ageWifiChargerQueue;
    long long allowedAppLaunchCap;
    id /* block */ highPriorityBlock;
    NSMutableArray *highPriorityPushQueue;
    NSMutableArray *highPriorityRetryList;
    bool inBatterySaverMode;
    NSDate *lastRetryTrigTime;
    NSObject<OS_dispatch_queue> *launchQueue;
    id /* block */ lowPriorityBlock;
    NSMutableArray *lowPriorityPushQueue;
    NSMutableArray *lowPriorityRetryList;
    bool pushHigh;
    NSMutableArray *reservationStationList;
    unsigned long long scheduleLaunchQueue;
    NSMutableArray *trendingQueue;
    NSMutableArray *whatToLaunchQueue;
    id /* block */ wifiChargerCheck;
    long long wifiChargerDuration;
    NSMutableArray *wifiChargerQueue;
}

- (void).cxx_destruct;
- (bool)acquireReservationStation:(id)arg1;
- (void)addToHighPriorityQueue:(id)arg1 withLaunchBlock:(id /* block */)arg2;
- (void)addToLaunchQueue:(id)arg1 withQueueType:(int)arg2 withItem:(id /* block */)arg3;
- (void)addToLowPriorityQueue:(id)arg1 withLaunchBlock:(id /* block */)arg2;
- (bool)confirmReservationStation:(id)arg1 seqNum:(long long)arg2 type:(int)arg3 release:(id /* block */)arg4;
- (void)doDispatchQueuedLPLaunches;
- (void)doDispatchQueuedLaunches;
- (void)enableWifiChargerQueue:(id /* block */)arg1;
- (id)init;
- (int)launchObject:(id)arg1;
- (void)logAll:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)logLight:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (bool)refillWifiChargerQueue;
- (void)releaseReservationStation:(id)arg1 seqNum:(long long)arg2;
- (int)reservationStationsFree;
- (void)setBatterySaverMode:(bool)arg1;
- (void)setLaunchCapacity:(unsigned long long)arg1;
- (void)updateWifiChargerDate;
- (bool)wifiChargeQueueAllowedToProceed;

@end
