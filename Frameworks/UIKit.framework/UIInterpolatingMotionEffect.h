/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInterpolatingMotionEffect : UIMotionEffect {
    float _horizontalAccelerationBoostFactor;
    NSString *_keyPath;
    id _maximumRelativeValue;
    id _minimumRelativeValue;
    int _type;
    float _verticalAccelerationBoostFactor;
}

@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, retain) id maximumRelativeValue;
@property (nonatomic, retain) id minimumRelativeValue;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (float)_horizontalAccelerationBoostFactor;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (void)_setHorizontalAccelerationBoostFactor:(float)arg1;
- (void)_setKeyPath:(id)arg1;
- (void)_setType:(int)arg1;
- (void)_setVerticalAccelerationBoostFactor:(float)arg1;
- (float)_verticalAccelerationBoostFactor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 type:(int)arg2;
- (id)keyPath;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { float x1; float x2; })arg1;
- (id)maximumRelativeValue;
- (id)minimumRelativeValue;
- (void)setMaximumRelativeValue:(id)arg1;
- (void)setMinimumRelativeValue:(id)arg1;
- (int)type;

@end
