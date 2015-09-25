/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPListLabelGeometry : NSObject {
    float mBaselineOffset;
    float mScale;
    BOOL mScaleWithText;
}

@property (nonatomic) float baselineOffset;
@property (nonatomic) float scale;
@property (nonatomic) BOOL scaleWithText;

+ (id)listLabelGeometry;

- (float)baselineOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithScale:(float)arg1 scaleWithText:(BOOL)arg2 baselineOffset:(float)arg3;
- (BOOL)isEqual:(id)arg1;
- (float)scale;
- (BOOL)scaleWithText;
- (void)setBaselineOffset:(float)arg1;
- (void)setScale:(float)arg1;
- (void)setScaleWithText:(BOOL)arg1;

@end
