/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSMediaStreamDaemon : MSDaemon {
    <MSMediaStreamDaemonDelegate> *_delegate;
    NSCountedSet *_retainedObjects;
}

@property (nonatomic) <MSMediaStreamDaemonDelegate> *delegate;

- (void).cxx_destruct;
- (id)_boundDeleterForPersonID:(id)arg1;
- (id)_boundPublisherForPersonID:(id)arg1;
- (id)_boundServerSideConfigManagerForPersonID:(id)arg1;
- (id)_boundSharingManagerForPersonID:(id)arg1;
- (id)_boundSubscriberForPersonID:(id)arg1;
- (id)_findShareWithPersonID:(id)arg1 inArray:(id)arg2;
- (void)_removeShareWithPersonID:(id)arg1 inArray:(id)arg2;
- (void)_setShares:(id)arg1 forPersonID:(id)arg2;
- (void)abortAllActivityForPersonID:(id)arg1;
- (void)computeHashForAsset:(id)arg1 personID:(id)arg2;
- (id)delegate;
- (void)deleteAssetCollections:(id)arg1 forPersonID:(id)arg2;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (void)didExceedPublishQuotaForPersonID:(id)arg1 retryDate:(id)arg2;
- (void)didIdle;
- (void)didReceiveAuthenticationFailureForPersonID:(id)arg1;
- (void)didReceiveAuthenticationSuccessForPersonID:(id)arg1;
- (void)didReceiveGlobalResetSyncForPersonID:(id)arg1;
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)arg1;
- (void)didReceiveNewShareState:(id)arg1 oldShareState:(id)arg2 forPersonID:(id)arg3;
- (void)didReceivePushNotificationForPersonID:(id)arg1;
- (void)didReceiveServerSideConfigurationVersion:(id)arg1 forPersonID:(id)arg2;
- (void)didUnidle;
- (BOOL)enqueueAssetCollection:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (void)forgetPersonID:(id)arg1;
- (BOOL)hasOutstandingActivity;
- (id)init;
- (id)invitationFromPushNotificationUserInfo:(id)arg1 outSourcePersonID:(id*)arg2 outTargetPersonID:(id*)arg3;
- (id)invitationStringsFromInvitation:(id)arg1 targetPersonID:(id)arg2;
- (BOOL)isInRetryState;
- (BOOL)mayDownloadPersonID:(id)arg1;
- (void)modifyShare:(id)arg1 forPersonID:(id)arg2;
- (id)nextActivityDate;
- (id)notificationStringsForShareStateTransitionOldShares:(id)arg1 newShares:(id)arg2;
- (id)ownSubscribedStreamForPersonID:(id)arg1;
- (BOOL)personIDHasOutstandingPublications:(id)arg1;
- (BOOL)personIDIsAcceptingInvitations:(id)arg1;
- (void)pollForSubscriptionUpdatesForPersonID:(id)arg1;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)arg1;
- (void)reenqueueQuarantinedActivitiesWithReason:(id)arg1;
- (void)refreshServerSideConfigurationForPersonID:(id)arg1;
- (void)refreshShareStatesForPersonID:(id)arg1;
- (void)removeShare:(id)arg1 forPersonID:(id)arg2;
- (void)resetSubscriberSyncForPersonID:(id)arg1;
- (void)respondToInvitation:(id)arg1 forPersonID:(id)arg2 accept:(BOOL)arg3;
- (void)retryOutstandingActivities;
- (void)sendInvitations:(id)arg1 forPersonID:(id)arg2;
- (id)serverSideConfigurationForPersonID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)sharesForPersonID:(id)arg1;
- (void)showInvitationFailureAlertForPersonID:(id)arg1 failures:(id)arg2;
- (void)start;
- (void)stop;
- (void)stopAllActivities;
- (id)subscribedStreamsForPersonID:(id)arg1;

@end
