/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSession : NSObject

@property (copy) NSDictionary *_atsState;
@property (copy) id /* block */ _connBlock;
@property BOOL _isSharedSession;
@property (copy) NSURLSessionConfiguration *_local_immutable_configuration;
@property (copy) NSString *_uuid;
@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (retain) <NSURLSessionDelegate> *delegate;
@property (retain) NSOperationQueue *delegateQueue;
@property BOOL invalid;
@property (copy) NSString *sessionDescription;
@property (readonly, retain) NSObject<OS_dispatch_queue> *workQueue;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (void)_getActiveSessionIdentifiersWithCompletionHandler:(id /* block */)arg1;
+ (void)_obliterateAllBackgroundSessionsWithCompletionHandler:(id /* block */)arg1;
+ (void)_releaseProcessAssertionForSessionIdentifier:(id)arg1;
+ (void)_sendPendingCallbacksForSessionIdentifier:(id)arg1;
+ (id)_sharedSessionForConnection;
+ (id)sessionWithConfiguration:(id)arg1;
+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
+ (id)sharedSession;

- (id)_AVAssetDownloadTaskWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (struct __CFDictionary { }*)_copyATSState;
- (id)_copyConfiguration;
- (id)_downloadTaskWithRequest:(id)arg1 downloadFilePath:(id)arg2;
- (void)addDelegateBlock:(id /* block */)arg1;
- (id)assetDownloadTaskWithURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (BOOL)can_delegate_AVAssetDownloadTask_didLoadTimeRange;
- (BOOL)can_delegate_AVAssetDownloadTask_didReceiveDownloadToken;
- (BOOL)can_delegate_AVAssetDownloadTask_didResolveMediaSelection;
- (BOOL)can_delegate_AVAssetDownloadTask_didWriteData;
- (BOOL)can_delegate_betterRouteDiscoveredForStreamTask;
- (BOOL)can_delegate_companionAvailabilityChanged;
- (BOOL)can_delegate_dataTask_didBecomeDownloadTask;
- (BOOL)can_delegate_dataTask_didBecomeStreamTask;
- (BOOL)can_delegate_dataTask_didReceiveData;
- (BOOL)can_delegate_dataTask_didReceiveResponse;
- (BOOL)can_delegate_dataTask_willCacheResponse;
- (BOOL)can_delegate_didFinishEventsForBackgroundURLSession;
- (BOOL)can_delegate_didReceiveChallenge;
- (BOOL)can_delegate_downloadTaskNeedsDownloadDirectory;
- (BOOL)can_delegate_downloadTask_didFinishDownloadingToURL;
- (BOOL)can_delegate_downloadTask_didReceiveResponse;
- (BOOL)can_delegate_downloadTask_didResumeAtOffset;
- (BOOL)can_delegate_downloadTask_didWriteData;
- (BOOL)can_delegate_openFileAtPath;
- (BOOL)can_delegate_readClosedForStreamTask;
- (BOOL)can_delegate_streamTask_didBecomeInputStream_outputStream;
- (BOOL)can_delegate_task_actually_didCompleteWithError;
- (BOOL)can_delegate_task_conditionalRequirementsChanged;
- (BOOL)can_delegate_task_didCompleteWithError;
- (BOOL)can_delegate_task_didReceiveChallenge;
- (BOOL)can_delegate_task_didSendBodyData;
- (BOOL)can_delegate_task_isWaitingForConnection;
- (BOOL)can_delegate_task_isWaitingForConnectionWithError;
- (BOOL)can_delegate_task_isWaitingForConnectionWithReason;
- (BOOL)can_delegate_task_needNewBodyStream;
- (BOOL)can_delegate_task_willPerformHTTPRedirection;
- (BOOL)can_delegate_task_willSendRequestForEstablishedConnection;
- (BOOL)can_delegate_willRetryBackgroundDataTask;
- (BOOL)can_delegate_writeClosedForStreamTask;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataTaskWithHTTPGetRequest:(id)arg1;
- (id)dataTaskWithHTTPGetRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dataTaskWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dataTaskWithURL:(id)arg1;
- (id)dataTaskWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didLoadTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didResolveMediaSelection:(id)arg2;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)delegate_betterRouteDiscoveredForStreamTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)delegate_companionAvailabilityChanged:(BOOL)arg1;
- (void)delegate_dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_dataTask:(id)arg1 didBecomeStreamTask:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_dataTask:(id)arg1 didReceiveData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_didFinishEventsForBackgroundURLSession;
- (void)delegate_didReceiveChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)delegate_downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_downloadTask:(id)arg1 didReceiveResponse:(id)arg2;
- (void)delegate_downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)delegate_downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 completionHandler:(id /* block */)arg5;
- (id)delegate_downloadTaskNeedsDownloadDirectory:(id)arg1;
- (int)delegate_openFileAtPath:(id)arg1 mode:(int)arg2;
- (void)delegate_readClosedForStreamTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)delegate_streamTask:(id)arg1 didBecomeInputStream:(id)arg2 outputStream:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)delegate_task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_task:(id)arg1 conditionalRequirementsChanged:(BOOL)arg2;
- (void)delegate_task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)delegate_task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)delegate_task:(id)arg1 isWaitingForConnectionWithError:(id)arg2;
- (void)delegate_task:(id)arg1 isWaitingForConnectionWithReason:(long long)arg2;
- (void)delegate_task:(id)arg1 needNewBodyStream:(id /* block */)arg2;
- (void)delegate_task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)delegate_task_isWaitingForConnection:(id)arg1;
- (void)delegate_willRetryBackgroundDataTask:(id)arg1 withError:(id)arg2;
- (void)delegate_writeClosedForStreamTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)downloadTaskWithURL:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)finalizeDelegateWithError:(id)arg1;
- (void)finishTasksAndInvalidate;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (void)getAllTasksWithCompletionHandler:(id /* block */)arg1;
- (void)getTasksWithCompletionHandler:(id /* block */)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)invalidateAndCancel;
- (BOOL)isBackgroundSession;
- (void)remote_externalAuthenticator_task:(id)arg1 getAuthHeadersForResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetWithCompletionHandler:(id /* block */)arg1;
- (id)streamTaskWithHostName:(id)arg1 port:(int)arg2;
- (id)streamTaskWithNetService:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)uploadTaskWithStreamedRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_sharedSession;

- (void)safari_downloadFirstValidImageWithURLs:(id)arg1 completionHandler:(id /* block */)arg2;

@end
