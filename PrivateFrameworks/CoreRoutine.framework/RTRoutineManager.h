/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTRoutineManager : NSObject <RTFrameworkProtocol> {
    id /* block */ _RTPredicatedApplicationsHandler;
    RTEventAgentHelper *_eventAgentHelper;
    id /* block */ _nextPredictedLocationsOfInterestHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_restorationIdentifier;
    NSMutableDictionary *_scenarioTriggerHandlers;
    id /* block */ _visitHandler;
    NSXPCConnection *_xpcConnection;
}

@property (nonatomic, copy) id /* block */ RTPredicatedApplicationsHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RTEventAgentHelper *eventAgentHelper;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id /* block */ nextPredictedLocationsOfInterestHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *restorationIdentifier;
@property (nonatomic, copy) NSMutableDictionary *scenarioTriggerHandlers;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ visitHandler;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)defaultManager;
+ (id)modeOfTransportationToString:(int)arg1;
+ (id)routineModeToString:(int)arg1;

- (void).cxx_destruct;
- (id /* block */)RTPredicatedApplicationsHandler;
- (void)_createConnection;
- (void)clearRoutine;
- (void)createConnection;
- (void)dealloc;
- (id)eventAgentHelper;
- (void)fetchAllLocationsOfInterestWithHandler:(id /* block */)arg1;
- (void)fetchBBPluginSupportedWithHandler:(id /* block */)arg1;
- (void)fetchLocationOfInterestAtCachedLocationWithHandler:(id /* block */)arg1;
- (void)fetchLocationOfInterestAtCurrentLocationWithHandler:(id /* block */)arg1;
- (void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchLocationsOfInterestOfType:(int)arg1 withHandler:(id /* block */)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(id /* block */)arg3;
- (void)fetchMonitoredScenarioTriggerTypesWithHandler:(id /* block */)arg1;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(id /* block */)arg4;
- (void)fetchNextPredictedLocationsOfInterestWithHandler:(id /* block */)arg1;
- (void)fetchPathToDiagnosticFilesWithHandler:(id /* block */)arg1;
- (void)fetchPredictedConditionsForAction:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)fetchPredictedExitDatesWithHandler:(id /* block */)arg1;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchRoutineEnabledWithHandler:(id /* block */)arg1;
- (void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(id /* block */)arg2;
- (void)handleDaemonStart;
- (id)init;
- (id)initWithRestorationIdentifier:(id)arg1;
- (id /* block */)nextPredictedLocationsOfInterestHandler;
- (void)onNextPredictedLocationsOfInterest:(id)arg1 withError:(id)arg2;
- (void)onPredictedApplications:(id)arg1 error:(id)arg2;
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (id)queue;
- (id)restorationIdentifier;
- (id)scenarioTriggerHandlers;
- (void)setEventAgentHelper:(id)arg1;
- (void)setNextPredictedLocationsOfInterestHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setRTPredicatedApplicationsHandler:(id /* block */)arg1;
- (void)setRestorationIdentifier:(id)arg1;
- (void)setRoutineEnabled:(BOOL)arg1;
- (void)setScenarioTriggerHandlers:(id)arg1;
- (void)setVisitHandler:(id /* block */)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)startMonitoringForPredictedApplicationsWithHandler:(id /* block */)arg1;
- (void)startMonitoringNextPredictedLocationsOfInterestWithHandler:(id /* block */)arg1;
- (void)startMonitoringScenarioTriggerOfType:(unsigned int)arg1 withHandler:(id /* block */)arg2;
- (void)startMonitoringVisitsWithHandler:(id /* block */)arg1;
- (void)stopMonitoringForPredictedApplications;
- (void)stopMonitoringNextPredictedLocationsOfInterest;
- (void)stopMonitoringScenarioTriggerOfType:(unsigned int)arg1;
- (void)stopMonitoringVisits;
- (id /* block */)visitHandler;
- (id)xpcConnection;

@end
