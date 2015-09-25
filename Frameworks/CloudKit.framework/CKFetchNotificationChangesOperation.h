/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchNotificationChangesOperation : CKOperation {
    id /* block */ _fetchNotificationChangesCompletionBlock;
    BOOL _moreComing;
    id /* block */ _notificationChangedBlock;
    CKServerChangeToken *_previousServerChangeToken;
    CKServerChangeToken *_resultServerChangeToken;
    unsigned int _resultsLimit;
}

@property (nonatomic, copy) id /* block */ fetchNotificationChangesCompletionBlock;
@property (nonatomic) BOOL moreComing;
@property (nonatomic, copy) id /* block */ notificationChangedBlock;
@property (nonatomic, copy) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic, retain) CKServerChangeToken *resultServerChangeToken;
@property (nonatomic) unsigned int resultsLimit;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (unsigned long long)activityStart;
- (id /* block */)fetchNotificationChangesCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithPreviousServerChangeToken:(id)arg1;
- (BOOL)moreComing;
- (id /* block */)notificationChangedBlock;
- (void)performCKOperation;
- (id)previousServerChangeToken;
- (id)resultServerChangeToken;
- (unsigned int)resultsLimit;
- (void)setFetchNotificationChangesCompletionBlock:(id /* block */)arg1;
- (void)setMoreComing:(BOOL)arg1;
- (void)setNotificationChangedBlock:(id /* block */)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setResultServerChangeToken:(id)arg1;
- (void)setResultsLimit:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (void)ic_removeAllCompletionBlocks;

@end
