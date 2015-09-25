/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingSyncState : NSObject <NSCopying> {
    BOOL _canClearOutOfSyncToken;
    NSUUID *_outOfSyncToken;
}

@property (nonatomic, readonly) NSUUID *outOfSyncToken;
@property (getter=isRecordingOutOfSync, nonatomic, readonly) BOOL recordingOutOfSync;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithOutOfSyncToken:(id)arg1 canClearOutOfSyncToken:(BOOL)arg2;
- (BOOL)isRecordingLocallyOutOfSyncUsingLocalOutOfSyncToken:(id)arg1;
- (BOOL)isRecordingOutOfSync;
- (id)outOfSyncToken;
- (id)recordingSyncStateByMarkingRecordingAsOutOfSync:(BOOL)arg1 withLocalOutOfSyncToken:(id)arg2;

@end
