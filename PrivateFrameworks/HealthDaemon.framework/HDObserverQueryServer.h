/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDObserverQueryServer : HDQueryServer {
    NSNumber *_anchor;
    BOOL _deliverOnUnlock;
}

@property (nonatomic, readonly) NSNumber *anchor;
@property (nonatomic, readonly) BOOL deliverOnUnlock;

- (void).cxx_destruct;
- (void)_deliverDataWasUpdatedWithAnchor:(id)arg1;
- (void)_queue_start;
- (void)_queue_stop;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (BOOL)_shouldListenForUpdates;
- (id)anchor;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (BOOL)deliverOnUnlock;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypeWereRemoved:(id)arg1 anchor:(id)arg2;

@end
