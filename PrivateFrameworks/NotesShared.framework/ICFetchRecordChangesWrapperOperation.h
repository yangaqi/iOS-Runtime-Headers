/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICFetchRecordChangesWrapperOperation : NSOperation {
    NSMutableSet *_completionHandlers;
    NSOperationQueue *_operationQueue;
    CKRecordZoneID *_recordZoneID;
}

@property (nonatomic, retain) NSMutableSet *completionHandlers;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) CKRecordZoneID *recordZoneID;

- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)arg1;
- (void)cancel;
- (id)completionHandlers;
- (id)init;
- (id)initWithRecordZoneID:(id)arg1;
- (void)main;
- (id)operationQueue;
- (id)recordZoneID;
- (void)setCompletionHandlers:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setRecordZoneID:(id)arg1;

@end
