/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFileUnlinker : NSObject {
    NSObject<OS_dispatch_source> *_cachePurgeSource;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_unlinkRootPath;
}

+ (id)fileUnlinker;

- (void).cxx_destruct;
- (void)_purge;
- (void)forcePurgeWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (BOOL)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2;
- (BOOL)renameAndUnlinkInBackgroundItemAtPath:(id)arg1;
- (void)resume;

@end
