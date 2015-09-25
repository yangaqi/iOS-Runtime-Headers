/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECDevice : CoreRCDevice {
    unsigned int _cecVersion;
    unsigned int _deckStatus;
    unsigned int _deviceType;
    BOOL _isActiveSource;
    unsigned char _logicalAddress;
    unsigned int _physicalAddress;
    unsigned int _powerStatus;
    BOOL _systemAudioControlEnabled;
    unsigned int _vendorID;
}

@property (nonatomic) unsigned int cecVersion;
@property (nonatomic) unsigned int deckStatus;
@property (nonatomic) unsigned int deviceType;
@property (nonatomic) BOOL isActiveSource;
@property (nonatomic) unsigned char logicalAddress;
@property (nonatomic) unsigned int physicalAddress;
@property (nonatomic) unsigned int powerStatus;
@property (nonatomic, readonly) BOOL systemAudioControlEnabled;
@property (nonatomic) unsigned int vendorID;

+ (BOOL)supportsSecureCoding;

- (unsigned int)cecVersion;
- (void)deckControlCommandHasBeenReceived:(unsigned int)arg1 fromDevice:(id)arg2;
- (BOOL)deckControlCommandWithMode:(unsigned int)arg1 target:(id)arg2 error:(id*)arg3;
- (void)deckControlPlayHasBeenReceived:(unsigned int)arg1 fromDevice:(id)arg2;
- (BOOL)deckControlPlayWithMode:(unsigned int)arg1 target:(id)arg2 error:(id*)arg3;
- (BOOL)deckControlRefreshStatus:(id)arg1 requestType:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)deckControlSetDeckStatus:(unsigned int)arg1 error:(id*)arg2;
- (void)deckControlStatusHasBeenUpdated:(unsigned int)arg1 fromDevice:(id)arg2;
- (unsigned int)deckStatus;
- (id)delegate;
- (id)description;
- (unsigned int)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (void)featureAbort:(id)arg1;
- (id)initWithBus:(id)arg1 local:(BOOL)arg2;
- (id)initWithBus:(id)arg1 local:(BOOL)arg2 logicalAddress:(unsigned char)arg3 physicalAddress:(unsigned int)arg4 deviceType:(unsigned int)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (BOOL)isActiveSource;
- (unsigned char)logicalAddress;
- (BOOL)makeActiveSourceWithTVMenus:(BOOL)arg1 error:(id*)arg2;
- (id)mergeProperties;
- (void)notifyDelegateActiveSourceStatusHasChanged;
- (void)notifyDelegateDeckControlCommandHasBeenReceived:(id)arg1 command:(unsigned int)arg2;
- (void)notifyDelegateDeckControlPlayHasBeenReceived:(id)arg1 playMode:(unsigned int)arg2;
- (void)notifyDelegateDeckControlStatusHasBeenUpdated:(id)arg1 deckInfo:(unsigned int)arg2;
- (void)notifyDelegateFeatureAbort:(id)arg1;
- (void)notifyDelegateShouldAssertActiveSource;
- (void)notifyDelegateStandbyRequestHasBeenReceived:(id)arg1;
- (BOOL)performStandbyWithTargetDevice:(id)arg1 error:(id*)arg2;
- (unsigned int)physicalAddress;
- (unsigned int)powerStatus;
- (BOOL)refreshDevices:(id*)arg1;
- (BOOL)refreshProperties:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3;
- (BOOL)refreshPropertiesOfDevice:(id)arg1 error:(id*)arg2;
- (BOOL)requestActiveSource:(id*)arg1;
- (BOOL)resignActiveSource:(id*)arg1;
- (void)setCecVersion:(unsigned int)arg1;
- (void)setDeckStatus:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceType:(unsigned int)arg1;
- (void)setIsActiveSource:(BOOL)arg1;
- (void)setLogicalAddress:(unsigned char)arg1;
- (void)setPhysicalAddress:(unsigned int)arg1;
- (void)setPowerStatus:(unsigned int)arg1;
- (BOOL)setPowerStatus:(unsigned int)arg1 error:(id*)arg2;
- (BOOL)setSystemAudioControlEnabled:(BOOL)arg1 error:(id*)arg2;
- (void)setVendorID:(unsigned int)arg1;
- (void)shouldAssertActiveSource;
- (void)standbyRequestHasBeenReceived:(id)arg1;
- (BOOL)systemAudioControlEnabled;
- (BOOL)systemAudioModeRequest:(unsigned int)arg1 error:(id*)arg2;
- (unsigned int)vendorID;

@end
