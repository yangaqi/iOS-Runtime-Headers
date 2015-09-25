/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFill : TSDFill {
    TSDFill *_cachedImageFill;
    struct CGSize { 
        float width; 
        float height; 
    } _cachedImageFillSize;
    TSDFill *_fallbackFill;
    TSCH3DFillSetIdentifier *_identifier;
    TSCH3DLightingModel *_lightingModel;
    NSNumber *_percentage;
}

@property (nonatomic, retain) TSCH3DFillSetIdentifier *identifier;
@property (readonly) TSCH3DLightingModel *lightingModel;
@property (nonatomic, retain) NSNumber *percentage;
@property (nonatomic, readonly) float percentageValue;

+ (id)fill;
+ (id)fillWithIdentifier:(id)arg1;
+ (id)fillWithLightingModel:(id)arg1 identifier:(id)arg2;
+ (id)fillWithSageFillData:(id)arg1;
+ (id)instanceWithArchive:(const struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[1]; int x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 unarchiver:(id)arg2;
+ (id)lightingModelWithSageFillData:(id)arg1;

- (void)assignQuicklookColorToMaterialDiffuseColorForLightingModel:(id)arg1;
- (id)convertToSimpleTSDFillWithSize:(unsigned int)arg1 context:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (int)fillType;
- (BOOL)hasCompleteData;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)identifierReferencesUnavailableLocalBundle;
- (id)init;
- (id)initWithArchive:(const struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[1]; int x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 unarchiver:(id)arg2;
- (id)initWithLightingModel:(id)arg1 identifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOpaque;
- (id)lightenByPercent:(float)arg1;
- (id)lightingModel;
- (void)nonatomicallySetLightingModel:(id)arg1;
- (id)p_convertToTSDFillWithSize:(unsigned int)arg1 technique:(int)arg2;
- (id)p_convertToTSDFillWithSize:(unsigned int)arg1 technique:(int)arg2 context:(id)arg3;
- (id)p_iconFill;
- (id)p_imageFillForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (id)p_imageFillForSize:(struct CGSize { float x1; float x2; })arg1 context:(id)arg2;
- (id)p_lazyLightingModel;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 naturalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3 isPDF:(BOOL)arg4;
- (void)paintRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)percentage;
- (float)percentageValue;
- (id)referenceColor;
- (id)renderingLightingModelWithLightings:(id)arg1;
- (id)sageFillData;
- (void)saveToArchive:(struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[1]; int x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 archiver:(id)arg2;
- (void)setFallbackFill:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPercentage:(id)arg1;
- (BOOL)tsch_hasAllResources;

@end
