/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyRecordAccessOperation : CKDatabaseOperation {
    NSMutableArray *_grantedRecordIDs;
    id /* block */ _recordAccessCompletionBlock;
    id /* block */ _recordAccessGrantedBlock;
    id /* block */ _recordAccessRevokedBlock;
    NSMutableDictionary *_recordErrors;
    NSArray *_recordIDsToGrant;
    NSArray *_recordIDsToRevoke;
    NSMutableArray *_revokedRecordIDs;
}

@property (nonatomic, retain) NSMutableArray *grantedRecordIDs;
@property (nonatomic, copy) id /* block */ recordAccessCompletionBlock;
@property (nonatomic, copy) id /* block */ recordAccessGrantedBlock;
@property (nonatomic, copy) id /* block */ recordAccessRevokedBlock;
@property (nonatomic, retain) NSMutableDictionary *recordErrors;
@property (nonatomic, retain) NSArray *recordIDsToGrant;
@property (nonatomic, retain) NSArray *recordIDsToRevoke;
@property (nonatomic, retain) NSMutableArray *revokedRecordIDs;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (unsigned long long)activityStart;
- (void)fillOutOperationInfo:(id)arg1;
- (id)grantedRecordIDs;
- (id)initWithRecordIDsToGrantAccess:(id)arg1 recordIDsToRevokeAccess:(id)arg2;
- (void)performCKOperation;
- (id /* block */)recordAccessCompletionBlock;
- (id /* block */)recordAccessGrantedBlock;
- (id /* block */)recordAccessRevokedBlock;
- (id)recordErrors;
- (id)recordIDsToGrant;
- (id)recordIDsToRevoke;
- (id)revokedRecordIDs;
- (void)setGrantedRecordIDs:(id)arg1;
- (void)setRecordAccessCompletionBlock:(id /* block */)arg1;
- (void)setRecordAccessGrantedBlock:(id /* block */)arg1;
- (void)setRecordAccessRevokedBlock:(id /* block */)arg1;
- (void)setRecordErrors:(id)arg1;
- (void)setRecordIDsToGrant:(id)arg1;
- (void)setRecordIDsToRevoke:(id)arg1;
- (void)setRevokedRecordIDs:(id)arg1;

@end
