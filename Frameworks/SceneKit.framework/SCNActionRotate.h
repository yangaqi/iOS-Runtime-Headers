/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionRotate : SCNAction {
    struct SCNCActionRotate { int (**x1)(); float x2; id /* block */ x3; id x4; double x5; double x6; float x7; float x8; double x9; bool x10; bool x11; id /* block */ x12; struct __CFString {} *x13; int x14; float x15; float x16; float x17; float x18; float x19; struct __C3DQuaternion { float x_20_1_1; float x_20_1_2; float x_20_1_3; float x_20_1_4; } x20; struct __C3DQuaternion { float x_21_1_1; float x_21_1_2; float x_21_1_3; float x_21_1_4; } x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; } *_mycaction;
}

+ (id)rotateByAngle:(float)arg1 aroundAxis:(struct SCNVector3 { float x1; float x2; float x3; })arg2 duration:(double)arg3;
+ (id)rotateByX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4;
+ (id)rotateToAxisAngle:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1 duration:(double)arg2;
+ (id)rotateToX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4;
+ (id)rotateToX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4 shortestUnitArc:(BOOL)arg5;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isRelative;
- (id)parameters;
- (id)reversedAction;

@end
