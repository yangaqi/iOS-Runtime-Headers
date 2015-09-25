/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavdDefaults : NSObject

@property (nonatomic, readonly) unsigned int accessValueThresholdToUpdateCacheEntries;
@property (nonatomic, readonly) double averageWalkingSpeed;
@property (nonatomic, readonly) double defaultExpirationOffset;
@property (nonatomic, readonly) double exitRegionSize;
@property (nonatomic, readonly) double fastWalkingSpeed;
@property (nonatomic, readonly) double hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds;
@property (nonatomic, readonly) double hypothesisResponseStaleToRefreshThresholdInSeconds;
@property (nonatomic, readonly) double hypothesisShouldPersistThresholdInSeconds;
@property (nonatomic, readonly) unsigned int initialClientInitiatedHypothesisCacheAccessValue;
@property (nonatomic, readonly) unsigned int initialSelfInitiatedHypothesisCacheAccessValue;
@property (nonatomic, readonly) double locationFreshnessThreshold;
@property (nonatomic, readonly) double locationUpdateTimerInterval;
@property (nonatomic, readonly) double locationUpdatesDesiredAccuracyForDriving;
@property (nonatomic, readonly) double locationUpdatesDesiredAccuracyForWalking;
@property (nonatomic, readonly) double locationUpdatesDesiredAccuracyWhileStationaryForDriving;
@property (nonatomic, readonly) double locationUpdatesDesiredAccuracyWhileStationaryForWalking;
@property (nonatomic, readonly) int maximumNumberOfDestinationsToMonitor;
@property (nonatomic, readonly) unsigned int maximumNumberOfEntriesInTheCacheUnderMemoryPressure;
@property (nonatomic, readonly) unsigned int maximumNumberOfProcessingLoopRepeats;
@property (nonatomic, readonly) double maximumRefreshIntervalLeeway;
@property (nonatomic, readonly) double maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds;
@property (nonatomic, readonly) double minimumDistanceToCompareAgainstLocationAccuracy;
@property (nonatomic, readonly) double minimumDistanceToGetLocationUpdatesInMeters;
@property (nonatomic, readonly) double minimumExpirationOffset;
@property (nonatomic, readonly) double minimumTimeBetweenConsecutiveLocationUpdatesInSeconds;
@property (nonatomic, readonly) double minimumTimerTimeStampFudge;
@property (nonatomic, readonly) double predictionsWatchdogInterval;
@property (nonatomic, readonly) unsigned int refreshEquationConstA;
@property (nonatomic, readonly) unsigned int refreshEquationConstB;
@property (nonatomic, readonly) unsigned int refreshEquationConstC;
@property (nonatomic, readonly) double refreshTimeIntervalBackoffBase;
@property (nonatomic, readonly) double refreshTimeIntervalBackoffMax;
@property (nonatomic, readonly) double refreshTimeIntervalToUseIfError;
@property (nonatomic, readonly) BOOL shouldUseServerSideETAs;
@property (nonatomic, readonly) double slowWalkingSpeed;
@property (nonatomic, readonly) double staleLocationUseTimerInterval;

+ (id)sharedInstance;

- (unsigned int)accessValueThresholdToUpdateCacheEntries;
- (double)averageWalkingSpeed;
- (double)defaultExpirationOffset;
- (double)exitRegionSize;
- (double)fastWalkingSpeed;
- (double)hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds;
- (double)hypothesisResponseStaleToRefreshThresholdInSeconds;
- (double)hypothesisShouldPersistThresholdInSeconds;
- (unsigned int)initialClientInitiatedHypothesisCacheAccessValue;
- (unsigned int)initialSelfInitiatedHypothesisCacheAccessValue;
- (double)locationFreshnessThreshold;
- (double)locationUpdateTimerInterval;
- (double)locationUpdatesDesiredAccuracyForDriving;
- (double)locationUpdatesDesiredAccuracyForWalking;
- (double)locationUpdatesDesiredAccuracyWhileStationaryForDriving;
- (double)locationUpdatesDesiredAccuracyWhileStationaryForWalking;
- (int)maximumNumberOfDestinationsToMonitor;
- (unsigned int)maximumNumberOfEntriesInTheCacheUnderMemoryPressure;
- (unsigned int)maximumNumberOfProcessingLoopRepeats;
- (double)maximumRefreshIntervalLeeway;
- (double)maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds;
- (double)minimumDistanceToCompareAgainstLocationAccuracy;
- (double)minimumDistanceToGetLocationUpdatesInMeters;
- (double)minimumExpirationOffset;
- (double)minimumTimeBetweenConsecutiveLocationUpdatesInSeconds;
- (double)minimumTimerTimeStampFudge;
- (double)predictionsWatchdogInterval;
- (unsigned int)refreshEquationConstA;
- (unsigned int)refreshEquationConstB;
- (unsigned int)refreshEquationConstC;
- (double)refreshTimeIntervalBackoffBase;
- (double)refreshTimeIntervalBackoffMax;
- (double)refreshTimeIntervalToUseIfError;
- (BOOL)shouldUseServerSideETAs;
- (double)slowWalkingSpeed;
- (double)staleLocationUseTimerInterval;

@end
