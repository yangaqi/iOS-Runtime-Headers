/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVInterface : NSObject {
    id _delegate;
}

@property (nonatomic, readonly) id _controller;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly) unsigned long long capabilitiesOfCPU;
@property (nonatomic, readonly) unsigned long long capabilitiesOfNetwork;
@property (nonatomic, readonly) id controller;
@property id delegate;
@property (nonatomic, readonly) BOOL isAVInterfaceReady;
@property (nonatomic) void*localVideoBackLayer;
@property (nonatomic) void*localVideoLayer;
@property (nonatomic) unsigned int maxBitrate;
@property (nonatomic, readonly) unsigned int overallChatState;
@property (nonatomic) BOOL shouldKeepCameraRunning;
@property (nonatomic, readonly) BOOL supportsLayers;
@property (nonatomic, readonly) BOOL supportsRelay;
@property (nonatomic, readonly) BOOL systemCanAudioChat;
@property (nonatomic, readonly) BOOL systemCanVideoChat;
@property (nonatomic, readonly) BOOL systemSupportsBackFacingCamera;
@property (nonatomic, readonly) BOOL systemSupportsFrontFacingCamera;

+ (id)alloc;
+ (id)sharedInstance;

- (void)_avChatDealloc:(id)arg1;
- (int)_checkNetworkForChat:(id)arg1 requiresWifi:(BOOL)arg2;
- (void)_conferenceEnded:(id)arg1;
- (void)_conferenceWillStart:(id)arg1;
- (id)_controller;
- (void)_notifyAboutPotentialCallForChat:(id)arg1;
- (int)_runPingTestForChat:(id)arg1;
- (BOOL)_submitEndCallMetric:(id)arg1 forCallID:(int)arg2;
- (BOOL)_submitLoggingInformation:(id)arg1 forChat:(id)arg2;
- (id)avChat:(id)arg1 IPAndPortDataWithCallerIP:(id)arg2 callerSIPPort:(unsigned int)arg3 shouldFindExternalIP:(BOOL)arg4;
- (id)avChat:(id)arg1 IPAndPortDataWithCallerIPAndPortData:(id)arg2 shouldFindExternalIP:(BOOL)arg3;
- (int)avChat:(id)arg1 endConferenceForUserID:(id)arg2;
- (BOOL)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(BOOL)arg4 callInfo:(id)arg5;
- (void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2;
- (void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(struct CGSize { float x1; float x2; })arg2 localPortraitAspectRatio:(struct CGSize { float x1; float x2; })arg3;
- (void)avChat:(id)arg1 setMute:(BOOL)arg2;
- (void)avChat:(id)arg1 setPaused:(BOOL)arg2;
- (void)avChat:(id)arg1 setRemoteMute:(BOOL)arg2;
- (void)avChat:(id)arg1 setSendingAudio:(BOOL)arg2;
- (void)avChat:(id)arg1 setSendingVideo:(BOOL)arg2;
- (void)avChat:(id)arg1 setValidatedIdentity:(struct __SecIdentity { }*)arg2;
- (unsigned long long)capabilities;
- (unsigned long long)capabilitiesOfCPU;
- (unsigned long long)capabilitiesOfNetwork;
- (void)chatRelayedStatusChanged:(id)arg1;
- (void)chatStateUpdated;
- (void)cleanupAVInterface;
- (id)controller;
- (void)dealloc;
- (id)delegate;
- (void)endAVConferenceWithChat:(id)arg1 callID:(int)arg2;
- (int)endConferenceForAVChat:(id)arg1;
- (void)endInterruptionForChat:(id)arg1;
- (id)getNatIPFromICEData:(id)arg1;
- (void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)initAVInterface;
- (BOOL)isAVInterfaceReady;
- (BOOL)isMuteForAVChat:(id)arg1;
- (BOOL)isPausedForAVChat:(id)arg1;
- (BOOL)isRemoteMuteForAVChat:(id)arg1;
- (BOOL)isSendingAudioForAVChat:(id)arg1;
- (BOOL)isSendingVideoForAVChat:(id)arg1;
- (void*)localVideoBackLayer;
- (void*)localVideoLayer;
- (unsigned int)maxBitrate;
- (id)natTypeForAVChat:(id)arg1;
- (unsigned int)overallChatState;
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2;
- (void*)remoteVideoBackLayerForChat:(id)arg1;
- (void*)remoteVideoLayerForChat:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setMaxBitrate:(unsigned int)arg1;
- (void)setRemoteVideoBackLayer:(void*)arg1 forChat:(id)arg2;
- (void)setRemoteVideoLayer:(void*)arg1 forChat:(id)arg2;
- (void)setRemoteVideoLayersFromChat:(id)arg1 toChat:(id)arg2;
- (void)setRemoteVideoPresentationSize:(struct CGSize { float x1; float x2; })arg1 forChat:(id)arg2;
- (void)setRemoteVideoPresentationState:(unsigned int)arg1 forChat:(id)arg2;
- (void)setShouldKeepCameraRunning:(BOOL)arg1;
- (BOOL)shouldKeepCameraRunning;
- (void)startInterruptionForChat:(id)arg1;
- (void)startInterruptionForChat:(id)arg1 withSource:(id)arg2;
- (BOOL)startPreviewWithError:(id*)arg1;
- (BOOL)stopPreview;
- (BOOL)supportsLayers;
- (BOOL)supportsRelay;
- (BOOL)systemCanAudioChat;
- (BOOL)systemCanVideoChat;
- (BOOL)systemSupportsBackFacingCamera;
- (BOOL)systemSupportsFrontFacingCamera;
- (void)unsetDelegate:(id)arg1;
- (void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2;
- (void)updateInterruptionForChat:(id)arg1;

@end
