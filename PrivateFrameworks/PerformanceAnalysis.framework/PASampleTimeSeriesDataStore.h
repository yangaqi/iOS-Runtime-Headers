/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleTimeSeriesDataStore : NSObject <NSSecureCoding> {
    double _attemptedSamplingInterval;
    PABinaryLocator *_binaryLocator;
    unsigned int _cpuDuration;
    unsigned int _cpuPercent;
    NSString *_durationNote;
    double _endMachTimestamp;
    double _endWallTimestamp;
    NSString *_event;
    NSString *_eventNote;
    BOOL _expectsLiveProcesses;
    double _extraDuration;
    NSMutableArray *_fanSpeedArray;
    PAGenealogyTracker *_genealogyTracker;
    NSString *_hardwareModel;
    NSString *_kernelVersion;
    NSString *_kextStat;
    NSString *_machineArchitecture;
    PAMountStatusTracker *_mountStatusTracker;
    unsigned int _numActiveCPUs;
    NSMutableDictionary *_oldSymbolHandleCache;
    BOOL _omitSensitiveStrings;
    BOOL _omitThirdPartyProcessStacks;
    NSString *_osBuildVersion;
    NSString *_osProductName;
    NSString *_osProductVersion;
    NSMutableSet *_pidsToTrack;
    BOOL _sampleOnlyMainThreads;
    BOOL _sanitizePaths;
    BOOL _shouldGatherKextStat;
    BOOL _shouldPreemptivelyCacheSymbolicators;
    BOOL _shouldSymbolicate;
    NSString *_signature;
    double _startMachTimestamp;
    double _startWallTimestamp;
    NSString *_stepsNote;
    PASymbolDataStore *_symbolDataStore;
    NSMutableDictionary *_symbolHandleCache;
    NSString *_targetProcessBundleBuildVersion;
    NSString *_targetProcessBundleProjectName;
    NSString *_targetProcessBundleShortVersion;
    NSString *_targetProcessBundleSourceVersion;
    NSString *_targetProcessBundleVersion;
    NSString *_targetProcessCommerceAppID;
    NSString *_targetProcessCommerceExternalID;
    int _targetProcessId;
    PASampleTimeInsensitiveTaskData *_targetTask;
    unsigned long long _targetThreadId;
    NSMutableDictionary *_timeInsensitiveTaskDataDict;
    NSMutableArray *_timeSensitiveSampleDataArray;
    double _timeWhenTransitionedToSamplingAllProcesses;
    unsigned int _wakeupsDuration;
    unsigned int _wakeupsPerSec;
    unsigned int _workQueueHardThreadLimit;
    unsigned int _workQueueSoftThreadLimit;
    PAWSUpdateDataStore *_wsDataStore;
}

@property double attemptedSamplingInterval;
@property unsigned int cpuDuration;
@property unsigned int cpuPercent;
@property (copy) NSString *durationNote;
@property (readonly) double endMachTimestamp;
@property (readonly) double endWallTimestamp;
@property (copy) NSString *event;
@property (copy) NSString *eventNote;
@property BOOL expectsLiveProcesses;
@property double extraDuration;
@property (readonly) PAGenealogyTracker *genealogyTracker;
@property (readonly) NSString *hardwareModel;
@property (readonly) NSString *kernelVersion;
@property (readonly) NSString *kextStat;
@property (readonly) NSString *machineArchitecture;
@property (readonly) PAMountStatusTracker *mountStatusTracker;
@property (readonly) unsigned int numActiveCPUs;
@property (readonly) unsigned long long numSamples;
@property BOOL omitSensitiveStrings;
@property BOOL omitThirdPartyProcessStacks;
@property (readonly) NSString *osBuildVersion;
@property (readonly) NSString *osProductName;
@property (readonly) NSString *osProductVersion;
@property BOOL sampleOnlyMainThreads;
@property (readonly) NSArray *samples;
@property BOOL sanitizePaths;
@property BOOL shouldGatherKextStat;
@property BOOL shouldPreemptivelyCacheSymbolicators;
@property BOOL shouldSymbolicate;
@property BOOL shouldUseDsymForUUIDToFindBinaries;
@property (copy) NSString *signature;
@property (readonly) double startMachTimestamp;
@property (readonly) double startWallTimestamp;
@property (copy) NSString *stepsNote;
@property (readonly) NSString *targetProcessAbsolutePath;
@property (readonly) NSString *targetProcessBundleBuildVersion;
@property (readonly) NSString *targetProcessBundleName;
@property (readonly) NSString *targetProcessBundleProjectName;
@property (readonly) NSString *targetProcessBundleShortVersion;
@property (readonly) NSString *targetProcessBundleSourceVersion;
@property (readonly) NSString *targetProcessBundleVersion;
@property (readonly) NSString *targetProcessCommerceAppID;
@property (readonly) NSString *targetProcessCommerceExternalID;
@property int targetProcessId;
@property (readonly) NSString *targetProcessName;
@property unsigned long long targetThreadId;
@property double timeWhenTransitionedToSamplingAllProcesses;
@property unsigned int wakeupsDuration;
@property unsigned int wakeupsPerSec;
@property (readonly) unsigned int workQueueHardThreadLimit;
@property (readonly) unsigned int workQueueSoftThreadLimit;

+ (BOOL)supportsSecureCoding;

- (void)_asynchronouslyCacheSymbolicatorForPid:(int)arg1;
- (void)addPidToSampledPids:(int)arg1;
- (void)addPidsWithNameToSampledPids:(id)arg1;
- (void)addStackshot:(id)arg1;
- (double)attemptedSamplingInterval;
- (void)cacheSymbolInformationForAllSymbols;
- (id)cachedSymbolHandleForAddress:(unsigned long long)arg1 inPid:(int)arg2;
- (id)copySymbolicationInfoForPid:(int)arg1;
- (unsigned int)cpuDuration;
- (unsigned int)cpuPercent;
- (void)dealloc;
- (void)doneSamplingLiveSystem;
- (id)durationNote;
- (void)encodeWithCoder:(id)arg1;
- (double)endMachTimestamp;
- (double)endWallTimestamp;
- (id)event;
- (id)eventNote;
- (BOOL)expectsLiveProcesses;
- (double)extraDuration;
- (id)fanSpeedClosestToMachTime:(double)arg1;
- (void)flushAllCachedSymbolInformation;
- (void)flushAllSymbolicators;
- (void)flushCachedSymbolicatorForTask:(id)arg1;
- (void)gatherHardwareModel;
- (void)gatherKernelVersion;
- (void)gatherKextStat;
- (void)gatherMachineArchitecture;
- (void)gatherNonTimeCriticalDataFromLiveSystem;
- (void)gatherNumActiveCPUs;
- (void)gatherOccasionalLiveDataForMachTime:(double)arg1;
- (void)gatherOsVersions;
- (void)gatherWorkQueueHardThreadLimit;
- (void)gatherWorkQueueSoftThreadLimit;
- (id)genealogyTracker;
- (id)hardwareModel;
- (BOOL)hasSampleOnOrAfterTime:(double)arg1 returningFirstIndex:(unsigned int*)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)kernelVersion;
- (id)kextStat;
- (id)machineArchitecture;
- (id)mountStatusTracker;
- (id)newArrayOfSamplesForSampleIndexRangeStart:(unsigned int)arg1 end:(unsigned int)arg2;
- (id)newArrayOfSamplesForTimeRangeWithMachStartTime:(double)arg1 andEndTime:(double)arg2;
- (id)newArrayOfSamplesForTimeRangeWithWallClockStartTime:(double)arg1 andEndTime:(double)arg2;
- (unsigned int)numActiveCPUs;
- (unsigned long long)numSamples;
- (BOOL)omitSensitiveStrings;
- (BOOL)omitThirdPartyProcessStacks;
- (id)osBuildVersion;
- (id)osProductName;
- (id)osProductVersion;
- (void)printFrameRateReportWithStartSampleIndex:(unsigned int)arg1 andEndIndex:(unsigned int)arg2 andStartDisplayIndex:(unsigned int)arg3 toStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg4;
- (BOOL)sampleOnlyMainThreads;
- (void)sampleTrackedPidsNow;
- (id)samples;
- (BOOL)sanitizePaths;
- (void)setAttemptedSamplingInterval:(double)arg1;
- (void)setCpuDuration:(unsigned int)arg1;
- (void)setCpuPercent:(unsigned int)arg1;
- (void)setDurationNote:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setEventNote:(id)arg1;
- (void)setExpectsLiveProcesses:(BOOL)arg1;
- (void)setExtraDuration:(double)arg1;
- (void)setOmitSensitiveStrings:(BOOL)arg1;
- (void)setOmitThirdPartyProcessStacks:(BOOL)arg1;
- (void)setSampleOnlyMainThreads:(BOOL)arg1;
- (void)setSanitizePaths:(BOOL)arg1;
- (void)setShouldGatherKextStat:(BOOL)arg1;
- (void)setShouldPreemptivelyCacheSymbolicators:(BOOL)arg1;
- (void)setShouldSymbolicate:(BOOL)arg1;
- (void)setShouldUseDsymForUUIDToFindBinaries:(BOOL)arg1;
- (void)setSignature:(id)arg1;
- (void)setStepsNote:(id)arg1;
- (void)setTargetProcessId:(int)arg1;
- (void)setTargetThreadId:(unsigned long long)arg1;
- (void)setTimeWhenTransitionedToSamplingAllProcesses:(double)arg1;
- (void)setWakeupsDuration:(unsigned int)arg1;
- (void)setWakeupsPerSec:(unsigned int)arg1;
- (BOOL)shouldGatherKextStat;
- (BOOL)shouldPreemptivelyCacheSymbolicators;
- (BOOL)shouldSymbolicate;
- (BOOL)shouldUseDsymForUUIDToFindBinaries;
- (id)signature;
- (double)startMachTimestamp;
- (double)startWallTimestamp;
- (void)startingSamplingLiveSystem;
- (id)stepsNote;
- (id)symbolHandleForAddress:(unsigned long long)arg1 inLivingPid:(int)arg2;
- (id)symbolHandleForAddress:(unsigned long long)arg1 inSampleTask:(id)arg2;
- (id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 inSampleTask:(id)arg3;
- (id)targetProcessAbsolutePath;
- (id)targetProcessBundleBuildVersion;
- (id)targetProcessBundleName;
- (id)targetProcessBundleProjectName;
- (id)targetProcessBundleShortVersion;
- (id)targetProcessBundleSourceVersion;
- (id)targetProcessBundleVersion;
- (id)targetProcessCommerceAppID;
- (id)targetProcessCommerceExternalID;
- (int)targetProcessId;
- (id)targetProcessName;
- (id)targetTask;
- (unsigned long long)targetThreadId;
- (id)timeInsensitiveTaskDataForStackshotTask:(id)arg1;
- (double)timeWhenTransitionedToSamplingAllProcesses;
- (unsigned int)wakeupsDuration;
- (unsigned int)wakeupsPerSec;
- (unsigned int)workQueueHardThreadLimit;
- (unsigned int)workQueueSoftThreadLimit;

@end
