/* Generated by RuntimeBrowser.
 */

@protocol RPDaemonProtocol <NSObject>

@required

- (oneway void)clientDidBecomeActiveWithBundleID:(NSString *)arg1;
- (oneway void)clientDidResignActiveWithBundleID:(NSString *)arg1;
- (oneway void)discardRecordingWithHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)pauseRecording;
- (oneway void)resumeRecordingWithWindowLayerContextID:(unsigned int)arg1;
- (oneway void)startRecordingWindowLayerContextID:(void *)arg1 windowSize:(void *)arg2 microphoneEnabled:(void *)arg3 withHandler:(void *)arg4; // needs 4 arg types, found 10: unsigned int, struct CGSize { float x1; float x2; }, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, BOOL, void*
- (oneway void)stopRecordingWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*

@end
