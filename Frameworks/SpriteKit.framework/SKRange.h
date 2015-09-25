/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKRange : NSObject <NSCoding, NSCopying> {
    float _lowerLimit;
    float _upperLimit;
}

@property float lowerLimit;
@property float upperLimit;

+ (id)rangeWithConstantValue:(float)arg1;
+ (id)rangeWithLowerLimit:(float)arg1;
+ (id)rangeWithLowerLimit:(float)arg1 upperLimit:(float)arg2;
+ (id)rangeWithNoLimits;
+ (id)rangeWithUpperLimit:(float)arg1;
+ (id)rangeWithValue:(float)arg1 variance:(float)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLowerLimit:(float)arg1 upperLimit:(float)arg2;
- (float)lowerLimit;
- (void)setLowerLimit:(float)arg1;
- (void)setUpperLimit:(float)arg1;
- (float)upperLimit;

@end
