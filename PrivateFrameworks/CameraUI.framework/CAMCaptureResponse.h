/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureResponse : NSObject {
    unsigned short _sessionIdentifier;
    int _type;
}

@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly) int type;

- (id)init;
- (id)initWithType:(int)arg1 captureSession:(unsigned short)arg2;
- (void)releaseCachedImages;
- (unsigned short)sessionIdentifier;
- (int)type;

@end
