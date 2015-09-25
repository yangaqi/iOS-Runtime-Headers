/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
 */

@interface UNNotificationAuthorizationAlertController : NSObject {
    NSMutableSet *_bundleIdentifersForActiveAlerts;
    NSMutableDictionary *_bundleIdentifiersToResultBlocks;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_main_requestUserAuthorizationForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(id /* block */)arg3;
- (void)_queue_addAlertActiveForBundleIdentifier:(id)arg1;
- (void)_queue_addResultBlock:(id /* block */)arg1 forBundleIdentifier:(id)arg2;
- (BOOL)_queue_isAlertActiveForBundleIdentifier:(id)arg1;
- (void)_queue_removeAlertActiveForBundleIdentifier:(id)arg1;
- (void)_queue_sendResponse:(int)arg1 forBundleIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)requestAuthorizationForBundleIdentifier:(id)arg1 withResult:(id /* block */)arg2;

@end
