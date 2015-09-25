/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFVideoAdjustments : PFAssetAdjustments {
    float _slowMotionRate;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    } _slowMotionTimeRange;
}

@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } slowMotionRampIn;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } slowMotionRampOut;
@property (nonatomic, readonly) float slowMotionRate;
@property (nonatomic) float slowMotionRate;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } slowMotionTimeRange;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } slowMotionTimeRange;

+ (float)defaultSlowMotionRateForNominalFrameRate:(float)arg1;
+ (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })defaultSlowMotionTimeRangeForDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
+ (id)defaultVideoAdjustmentsURLForVideoURL:(id)arg1;
+ (BOOL)isRecognizedFormatWithIdentifier:(id)arg1 version:(id)arg2;

- (id)_adjustmentsObjectFromNSKeyedArchiverData:(id)arg1;
- (id)_dictionaryFromSlowMotionTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 rate:(float)arg2;
- (BOOL)_isValidSlowMotionTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 rate:(float)arg2;
- (BOOL)_parseAppleVideoDataBlobDictionary:(id)arg1 forSlowMotionTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2 rate:(float*)arg3;
- (BOOL)_parseLegacySLMDictionary:(id)arg1 forSlowMotionTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2 rate:(float*)arg3;
- (BOOL)_parseVersionedDataForSlowMotionTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 rate:(float*)arg2;
- (void)_updateDerivedPropertiesFromVersionedData;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })convertToOriginalTimeFromScaledTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forExport:(BOOL)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })convertToScaledTimeFromOriginalTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forExport:(BOOL)arg2;
- (id)description;
- (BOOL)hasSlowMotionAdjustments;
- (id)initWithPropertyListDictionary:(id)arg1;
- (id)initWithSlowMotionTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 rate:(float)arg2;
- (BOOL)isRecognizedFormat;
- (void)setSlowMotionRate:(float)arg1;
- (void)setSlowMotionTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })slowMotionRampIn;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })slowMotionRampOut;
- (float)slowMotionRate;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })slowMotionTimeRange;

@end
