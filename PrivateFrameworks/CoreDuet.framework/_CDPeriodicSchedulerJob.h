/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPeriodicSchedulerJob : NSObject {
    NSObject<OS_xpc_object> *_executionCriteria;
    id /* block */ _handler;
    NSString *_jobName;
    int _period;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) NSObject<OS_xpc_object> *executionCriteria;
@property (readonly) id /* block */ handler;
@property (readonly) NSString *jobName;
@property (readonly) int period;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)jobWithPeriod:(int)arg1 schedulerJobName:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)executionCriteria;
- (id /* block */)handler;
- (id)init;
- (id)initWithPeriod:(int)arg1 schedulerJobName:(id)arg2 handler:(id /* block */)arg3;
- (id)initWithPeriod:(int)arg1 schedulerJobName:(id)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (id)jobName;
- (int)period;
- (id)queue;

@end
