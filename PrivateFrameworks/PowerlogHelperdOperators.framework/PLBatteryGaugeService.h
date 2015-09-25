/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

@interface PLBatteryGaugeService : PLService {
    PLEntryNotificationOperatorComposition *_applicationCallback;
    NSMutableDictionary *_applicationResults;
    NSMutableDictionary *_bundleIDandPidMap;
    id _costElement;
    int _curQueryCount;
    NSDate *_curQueryTime;
    NSMutableDictionary *_entrykeyCallBackMapping;
    NSMutableDictionary *_entrykeyCallBackOnceMapping;
    NSTimer *_exitTimer;
    bool _isTestingRunning;
    int _lastQueryCount;
    NSDate *_lastQueryTime;
    PLEntryNotificationOperatorComposition *_locationCallback;
    NSMutableDictionary *_locationResults;
    NSMutableDictionary *_measurements;
    PLDTCostElement *_networkingCostElement;
    PLEntryNotificationOperatorComposition *_processMonitorCallback;
    NSMutableDictionary *_processMonitorResults;
    PLEntryNotificationOperatorComposition *_processNetworkCallback;
    NSMutableDictionary *_processNetworkResults;
    NSMutableDictionary *_reportedApplication;
    NSMutableDictionary *_reportedLocation;
    NSMutableDictionary *_reportedProcessMonitor;
    NSMutableDictionary *_reportedProcessNetwork;
    NSMutableDictionary *_requestTime;
    PLSemaphore *_responseSemaphore;
    NSMutableDictionary *_responseTime;
    NSMutableDictionary *_returnTime;
    NSSet *_scoringEntities;
    double _startTime;
    double _stopTime;
    NSMutableArray *_trackedProcesses;
    PLXPCResponderOperatorComposition *_xpcResponderBatteryGaugeDT;
}

@property (retain) PLEntryNotificationOperatorComposition *applicationCallback;
@property (retain) NSMutableDictionary *applicationResults;
@property (retain) NSMutableDictionary *bundleIDandPidMap;
@property (retain) id costElement;
@property int curQueryCount;
@property (retain) NSDate *curQueryTime;
@property (retain) NSMutableDictionary *entrykeyCallBackMapping;
@property (retain) NSMutableDictionary *entrykeyCallBackOnceMapping;
@property (retain) NSTimer *exitTimer;
@property bool isTestingRunning;
@property int lastQueryCount;
@property (retain) NSDate *lastQueryTime;
@property (retain) PLEntryNotificationOperatorComposition *locationCallback;
@property (retain) NSMutableDictionary *locationResults;
@property (retain) NSMutableDictionary *measurements;
@property (retain) PLDTCostElement *networkingCostElement;
@property (retain) PLEntryNotificationOperatorComposition *processMonitorCallback;
@property (retain) NSMutableDictionary *processMonitorResults;
@property (retain) PLEntryNotificationOperatorComposition *processNetworkCallback;
@property (retain) NSMutableDictionary *processNetworkResults;
@property (retain) NSMutableDictionary *reportedApplication;
@property (retain) NSMutableDictionary *reportedLocation;
@property (retain) NSMutableDictionary *reportedProcessMonitor;
@property (retain) NSMutableDictionary *reportedProcessNetwork;
@property (retain) NSMutableDictionary *requestTime;
@property (retain) PLSemaphore *responseSemaphore;
@property (retain) NSMutableDictionary *responseTime;
@property (retain) NSMutableDictionary *returnTime;
@property (readonly) NSSet *scoringEntities;
@property double startTime;
@property double stopTime;
@property (retain) NSMutableArray *trackedProcesses;
@property (retain) PLXPCResponderOperatorComposition *xpcResponderBatteryGaugeDT;

+ (void)load;

- (void).cxx_destruct;
- (id)DTQueryResponse:(id)arg1;
- (id)applicationCallback;
- (id)applicationResults;
- (id)bundleIDandPidMap;
- (id)clearStateRoutine:(id)arg1;
- (id)compileSnapshotResponse;
- (double)computeLocationCostWithWifiCost:(int)arg1 withGpsCost:(int)arg2 withCellCost:(int)arg3 withSkyhookCost:(int)arg4;
- (double)computeNetworkingCostWithWifiIn:(int)arg1 withWifiOut:(int)arg2 withCellIn:(int)arg3 withCellOut:(int)arg4;
- (id)convertRawUsageToScore:(id)arg1;
- (id)costElement;
- (int)curQueryCount;
- (id)curQueryTime;
- (void)dataReceivedFrom:(id)arg1;
- (id)entrykeyCallBackMapping;
- (id)entrykeyCallBackOnceMapping;
- (id)exitTimer;
- (id)extractAndSetProcessIdentifierWithPayload:(id)arg1;
- (id)extractAndTranslateProcessIdentifier:(id)arg1;
- (id)getObjectInMeasurementsWithPid:(int)arg1 withCategory:(id)arg2 withKey:(id)arg3;
- (id)init;
- (void)initOperatorDependancies;
- (void)initResponseSemaphore;
- (bool)isTestingRunning;
- (int)lastQueryCount;
- (id)lastQueryTime;
- (void)listAllRunningPidsWithBuffer:(int*)arg1 withSizeOfBuffer:(int)arg2;
- (id)locationCallback;
- (id)locationResults;
- (int)matchingPidWithProcessName:(id)arg1 withBundleID:(id)arg2;
- (id)measurements;
- (id)networkingCostElement;
- (void)parseApplicationResults:(id)arg1;
- (void)parseLocationResults:(id)arg1;
- (void)parseProcessMonitorResults:(id)arg1;
- (void)parseProcessNetworkResults:(id)arg1;
- (id)pauseRoutineWithPayload:(id)arg1;
- (id)processMonitorCallback;
- (id)processMonitorResults;
- (id)processNetworkCallback;
- (id)processNetworkResults;
- (id)reportedApplication;
- (id)reportedLocation;
- (id)reportedProcessMonitor;
- (id)reportedProcessNetwork;
- (void)requestDataFrom:(id)arg1 withType:(int)arg2;
- (id)requestTime;
- (void)resetExitTimer;
- (id)responseSemaphore;
- (id)responseTime;
- (id)resumeRoutineWithPayload:(id)arg1;
- (id)returnTime;
- (id)scoringEntities;
- (void)selfExit:(id)arg1;
- (void)setApplicationCallback:(id)arg1;
- (void)setApplicationResults:(id)arg1;
- (void)setBundleIDandPidMap:(id)arg1;
- (void)setCostElement:(id)arg1;
- (void)setCurQueryCount:(int)arg1;
- (void)setCurQueryTime:(id)arg1;
- (void)setEntrykeyCallBackMapping:(id)arg1;
- (void)setEntrykeyCallBackOnceMapping:(id)arg1;
- (void)setExitTimer:(id)arg1;
- (void)setIsTestingRunning:(bool)arg1;
- (void)setLastActiveStartTimeAndLastSuspendTimeWithPid:(int)arg1 withAppState:(int)arg2 withCurrentTime:(id)arg3;
- (void)setLastQueryCount:(int)arg1;
- (void)setLastQueryTime:(id)arg1;
- (void)setLocationCallback:(id)arg1;
- (void)setLocationResults:(id)arg1;
- (void)setMeasurements:(id)arg1;
- (void)setNetworkingCostElement:(id)arg1;
- (void)setObjectInMeasurementsWithObject:(id)arg1 withPid:(int)arg2 withCategory:(id)arg3 withKey:(id)arg4;
- (void)setProcessMonitorCallback:(id)arg1;
- (void)setProcessMonitorResults:(id)arg1;
- (void)setProcessNetworkCallback:(id)arg1;
- (void)setProcessNetworkResults:(id)arg1;
- (void)setReportedApplication:(id)arg1;
- (void)setReportedLocation:(id)arg1;
- (void)setReportedProcessMonitor:(id)arg1;
- (void)setReportedProcessNetwork:(id)arg1;
- (void)setRequestTime:(id)arg1;
- (void)setResponseSemaphore:(id)arg1;
- (void)setResponseTime:(id)arg1;
- (void)setReturnTime:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStopTime:(double)arg1;
- (void)setTrackedProcesses:(id)arg1;
- (void)setXpcResponderBatteryGaugeDT:(id)arg1;
- (id)startRoutineWithPayload:(id)arg1;
- (double)startTime;
- (id)stopRoutineWithPayload:(id)arg1;
- (double)stopTime;
- (void)testGaugeService;
- (void)testGaugeServiceSingleInstance:(id)arg1;
- (id)trackedProcesses;
- (void)translateProcessIdentifierWithInput:(id)arg1;
- (void)triggerAllData;
- (id)xpcResponderBatteryGaugeDT;

@end
