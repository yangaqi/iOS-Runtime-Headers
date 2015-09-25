/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSageFillData : NSObject <TSCH3DSageFillData> {
    TSCH3DFillSetIdentifier *mIdentifier;
    NSObject<TSCH3DSageFillImageDataSource> *mImageSource;
    NSArray *mLayersProperties;
    NSDictionary *mProperties;
}

+ (id)TSPImageDataFromTexture:(id)arg1;
+ (id)dataWithFillSetIdentifier:(id)arg1;
+ (id)dataWithProperties:(id)arg1 layersProperties:(id)arg2 identifier:(id)arg3 imageSource:(id)arg4;
+ (id)textureWithImageData:(id)arg1;

- (struct ColorResult { BOOL x1; struct Color { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; })colorFromRedKey:(id)arg1 greenKey:(id)arg2 blueKey:(id)arg3;
- (struct Color { float x1; float x2; float x3; float x4; })colorFromRedKey:(id)arg1 greenKey:(id)arg2 blueKey:(id)arg3 defaultGray:(float)arg4;
- (void)dealloc;
- (struct Color { float x1; float x2; float x3; float x4; })diffuse;
- (struct Color { float x1; float x2; float x3; float x4; })emissive;
- (id)fillSetIdentifier;
- (id)initWithProperties:(id)arg1 layersProperties:(id)arg2 identifier:(id)arg3 imageSource:(id)arg4;
- (BOOL)isLayerEnabledForIndex:(unsigned int)arg1;
- (int)layerBlendModeForIndex:(unsigned int)arg1;
- (unsigned int)layerCount;
- (BOOL)layerIsEnvironmentMapForIndex:(unsigned int)arg1;
- (id)layerLightenPercentageForIndex:(unsigned int)arg1;
- (float)layerRotationForIndex:(unsigned int)arg1;
- (float)layerScaleForIndex:(unsigned int)arg1;
- (int)layerTilingModeForIndex:(unsigned int)arg1;
- (struct Color { float x1; float x2; float x3; float x4; })makeGray:(float)arg1;
- (id)objectForKey:(id)arg1 index:(unsigned int)arg2;
- (float)opacity;
- (id)p_optimizedMipmapPathFromOriginalPath:(id)arg1;
- (float)shininess;
- (struct Color { float x1; float x2; float x3; float x4; })specular;
- (id)textureForIndex:(unsigned int)arg1;

@end
