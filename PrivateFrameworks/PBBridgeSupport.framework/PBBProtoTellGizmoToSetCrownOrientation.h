/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoTellGizmoToSetCrownOrientation : PBCodable <NSCopying> {
    BOOL _crownOrientationRight;
    struct { 
        unsigned int crownOrientationRight : 1; 
    } _has;
}

@property (nonatomic) BOOL crownOrientationRight;
@property (nonatomic) BOOL hasCrownOrientationRight;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)crownOrientationRight;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCrownOrientationRight;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCrownOrientationRight:(BOOL)arg1;
- (void)setHasCrownOrientationRight:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
