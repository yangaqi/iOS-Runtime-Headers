/* Generated by RuntimeBrowser.
 */

@protocol BWBracketSettingsProvider <NSObject>

@required

- (int)bracketCountForBracketingMode:(int)arg1 withCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned int x11; long long x12; }*)arg2 stillImageSettings:(FigCaptureStillImageSettings *)arg3;
- (BWBracketSettings *)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned int x11; long long x12; }*)arg2 stillImageSettings:(FigCaptureStillImageSettings *)arg3;
- (int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg1;

@end
