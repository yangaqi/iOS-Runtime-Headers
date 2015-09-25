/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureStillImageRequest : NSObject {
    id /* block */ _bracketedCaptureCompletionBlock;
    AVCaptureBracketedStillImageSettings *_bracketedSettings;
    id /* block */ _iosurfaceCompletionBlock;
    id /* block */ _sbufCompletionBlock;
    long long _settingsID;
    unsigned long _shutterSoundID;
}

@property (copy) id /* block */ bracketedCaptureCompletionBlock;
@property (retain) AVCaptureBracketedStillImageSettings *bracketedSettings;
@property (copy) id /* block */ iosurfaceCompletionBlock;
@property (copy) id /* block */ sbufCompletionBlock;
@property long long settingsID;
@property unsigned long shutterSoundID;

+ (id)request;

- (id /* block */)bracketedCaptureCompletionBlock;
- (id)bracketedSettings;
- (void)dealloc;
- (id /* block */)iosurfaceCompletionBlock;
- (id /* block */)sbufCompletionBlock;
- (void)setBracketedCaptureCompletionBlock:(id /* block */)arg1;
- (void)setBracketedSettings:(id)arg1;
- (void)setIosurfaceCompletionBlock:(id /* block */)arg1;
- (void)setSbufCompletionBlock:(id /* block */)arg1;
- (void)setSettingsID:(long long)arg1;
- (void)setShutterSoundID:(unsigned long)arg1;
- (long long)settingsID;
- (unsigned long)shutterSoundID;

@end
