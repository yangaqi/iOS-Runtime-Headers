/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABExperimentAssignment : PBCodable <NSCopying> {
    struct { 
        unsigned int placeRequestType : 1; 
        unsigned int serviceType : 1; 
    } _has;
    int _placeRequestType;
    NSString *_querySubstring;
    int _serviceType;
}

@property (nonatomic) BOOL hasPlaceRequestType;
@property (nonatomic, readonly) BOOL hasQuerySubstring;
@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) int placeRequestType;
@property (nonatomic, retain) NSString *querySubstring;
@property (nonatomic) int serviceType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPlaceRequestType;
- (BOOL)hasQuerySubstring;
- (BOOL)hasServiceType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)placeRequestType;
- (id)querySubstring;
- (BOOL)readFrom:(id)arg1;
- (int)serviceType;
- (void)setHasPlaceRequestType:(BOOL)arg1;
- (void)setHasServiceType:(BOOL)arg1;
- (void)setPlaceRequestType:(int)arg1;
- (void)setQuerySubstring:(id)arg1;
- (void)setServiceType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
