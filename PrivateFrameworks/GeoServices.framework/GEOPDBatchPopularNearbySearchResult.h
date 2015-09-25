/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBatchPopularNearbySearchResult : PBCodable <NSCopying> {
    NSMutableArray *_popularNearbyResults;
}

@property (nonatomic, retain) NSMutableArray *popularNearbyResults;

- (void)addPopularNearbyResult:(id)arg1;
- (void)clearPopularNearbyResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)popularNearbyResultAtIndex:(unsigned int)arg1;
- (id)popularNearbyResults;
- (unsigned int)popularNearbyResultsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setPopularNearbyResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
