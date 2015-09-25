/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISVitalityInput : ISInput {
    BOOL __isPerformingVitalityInputChanges;
    BOOL __wasScrubbing;
    double _playRate;
    double _scrubOffset;
    BOOL _scrubbing;
}

@property (setter=_setPerformingVitalityInputChanges:, nonatomic) BOOL _isPerformingVitalityInputChanges;
@property (setter=_setWasScrubbing:, nonatomic) BOOL _wasScrubbing;
@property (nonatomic) double playRate;
@property (nonatomic) double scrubOffset;
@property (getter=isScrubbing, nonatomic) BOOL scrubbing;

- (BOOL)_isPerformingVitalityInputChanges;
- (void)_setPerformingVitalityInputChanges:(BOOL)arg1;
- (void)_setWasScrubbing:(BOOL)arg1;
- (void)_updateVitalityValues;
- (BOOL)_wasScrubbing;
- (int)inputType;
- (BOOL)isScrubbing;
- (void)performVitalityInputChanges:(id /* block */)arg1;
- (double)playRate;
- (double)scrubOffset;
- (void)setPlayRate:(double)arg1;
- (void)setScrubOffset:(double)arg1;
- (void)setScrubbing:(BOOL)arg1;

@end
