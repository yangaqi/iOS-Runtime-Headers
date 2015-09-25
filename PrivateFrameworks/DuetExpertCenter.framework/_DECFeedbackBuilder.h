/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECFeedbackBuilder : NSObject {
    id /* block */ _feedbackHandler;
    NSMutableArray *_monitoredResults;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_resetMonitoredResults;
- (void)addMonitoredResult:(id)arg1;
- (id)initWithFeedbackHandler:(id /* block */)arg1;
- (void)receiveFeedback:(id)arg1 resultIdentifier:(id)arg2 metadata:(id)arg3 engaged:(BOOL)arg4;

@end
