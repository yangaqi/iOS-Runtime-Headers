/* Generated by RuntimeBrowser.
 */

@protocol CAMTimelapseControllerDelegate <NSObject>

@required

- (void)timelapseController:(CAMTimelapseController *)arg1 generatedThumbnailImage:(UIImage *)arg2 forAssetUUID:(NSString *)arg3 inCaptureSession:(unsigned short)arg4;
- (void)timelapseController:(CAMTimelapseController *)arg1 persistedPlaceholderResult:(CAMTimelapsePlaceholderResult *)arg2;
- (void)timelapseControllerStarted:(CAMTimelapseController *)arg1;
- (void)timelapseControllerStopped:(CAMTimelapseController *)arg1;

@end
