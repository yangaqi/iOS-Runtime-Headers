/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureRequest : NSObject <CAMDistinctPersistenceCopying, NSCopying> {
    NSMutableDictionary *__parameterStorage;
    unsigned int _assertionIdentifier;
    int _captureDevice;
    int _captureMode;
    int _captureOrientation;
    BOOL _capturedFromPhotoBooth;
    unsigned int _deferredPersistenceOptions;
    NSURL *_localDestinationURL;
    CLLocation *_location;
    int _persistenceOptions;
    NSString *_persistenceUUID;
    int _physicalButtonType;
    unsigned short _sessionIdentifier;
    BOOL _shouldDelayRemotePersistence;
    BOOL _shouldExtractDiagnosticsFromMetadata;
    BOOL _shouldPersistDiagnosticsToSidecar;
    int _type;
}

@property (nonatomic, readonly, copy) NSDictionary *_customParameterStorage;
@property (nonatomic, readonly) NSMutableDictionary *_parameterStorage;
@property (nonatomic, readonly) unsigned int assertionIdentifier;
@property (nonatomic, readonly) int captureDevice;
@property (nonatomic, readonly) int captureMode;
@property (nonatomic, readonly) int captureOrientation;
@property (nonatomic, readonly) BOOL capturedFromPhotoBooth;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int deferredPersistenceOptions;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSURL *localDestinationURL;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) int persistenceOptions;
@property (nonatomic, readonly, copy) NSString *persistenceUUID;
@property (nonatomic, readonly) int physicalButtonType;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly) BOOL shouldDelayRemotePersistence;
@property (nonatomic, readonly) BOOL shouldExtractDiagnosticsFromMetadata;
@property (nonatomic, readonly) BOOL shouldPersistDiagnosticsToSidecar;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)_customParameterStorage;
- (id)_parameterStorage;
- (unsigned int)assertionIdentifier;
- (int)captureDevice;
- (int)captureMode;
- (int)captureOrientation;
- (BOOL)capturedFromPhotoBooth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)deferredPersistenceOptions;
- (id)distinctPersistenceCopy;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2;
- (id)initWithType:(int)arg1;
- (id)localDestinationURL;
- (id)location;
- (id)parameterForKey:(id)arg1;
- (int)persistenceOptions;
- (id)persistenceUUID;
- (int)physicalButtonType;
- (unsigned short)sessionIdentifier;
- (BOOL)shouldDelayRemotePersistence;
- (BOOL)shouldExtractDiagnosticsFromMetadata;
- (BOOL)shouldPersistDiagnosticsToSidecar;
- (int)type;

@end
