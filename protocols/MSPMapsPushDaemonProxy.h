/* Generated by RuntimeBrowser.
 */

@protocol MSPMapsPushDaemonProxy

@required

- (void)checkin;
- (void)clearBulletinWithRecordID:(NSString *)arg1;
- (void)clearCurrentAnnouncement;
- (void)clearTrafficConditionsBulletin;
- (void)fetchCurrentAnnouncement:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOAnnouncement *, void*
- (void)fetchDevicePushToken:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)fetchProblemStatus;
- (void)registerForTopic;
- (void)resetShownAnnouncements;
- (void)showTrafficConditionsBulletinWithTitle:(NSString *)arg1 message:(NSString *)arg2 actionURL:(NSURL *)arg3;
- (void)simulateAnnouncement:(GEOAnnouncement *)arg1;
- (void)simulateProblemResolution;

@end
