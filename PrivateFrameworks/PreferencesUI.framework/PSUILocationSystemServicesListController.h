/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUILocationSystemServicesListController : PSUILocationServicesListController {
    RTRoutineManager *_routineManager;
}

@property (nonatomic, retain) RTRoutineManager *routineManager;

+ (id)locationBasedAlertBundlesForSystemVersion:(id)arg1;

- (void).cxx_destruct;
- (id)_areLocationBasedAlertsAuthorized;
- (id)_locationBasedAlertBundles;
- (void)_performConsistencyCheck;
- (id)_productImprovementByBundlePath;
- (id)_readAddressCorrectionAuthorizationStatus:(id)arg1;
- (void)_setAddressCorrectionAuthorizationStatus:(id)arg1 specifier:(id)arg2;
- (void)_setLocationBasedAlertsAuthorized:(id)arg1;
- (void)_showAddressCorrectionPage;
- (id)coreRoutineEnabledStatus:(id)arg1;
- (id)init;
- (id)isStatusEnabled:(id)arg1;
- (id)routineManager;
- (void)setRoutineManager:(id)arg1;
- (void)setStatusEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (void)startLocationStatusUpdates;
- (void)stopLocationStatusUpdates;

@end
