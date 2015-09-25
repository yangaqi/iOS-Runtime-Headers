/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputContext : NSObject <NSSecureCoding> {
    AVOutputContextInternal *_outputContext;
}

@property (nonatomic, readonly) NSString *deviceName;

+ (struct OpaqueFigEndpointPicker { }*)copySystemVideoPicker;
+ (id)outputContext;
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (BOOL)supportsSecureCoding;

- (void)_addFigEndpointPickerNotifications;
- (long)_configureFigEndpointPickerWithFeature:(unsigned int)arg1 options:(id)arg2;
- (void)_handlePickerServerConnectionDiedNotification;
- (void)_removeFigEndpointPickerNotifications;
- (id)_weakReference;
- (int)applicationProcessID;
- (id)contextUUID;
- (void)dealloc;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextUUID:(id)arg1;
- (id)initWithFeature:(unsigned int)arg1 options:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)outputDevice;
- (void)setApplicationProcessID:(int)arg1;
- (BOOL)setOutputDevice:(id)arg1 forFeatures:(unsigned int)arg2;

@end
