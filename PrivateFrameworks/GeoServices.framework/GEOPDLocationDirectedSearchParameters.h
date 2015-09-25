/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocationDirectedSearchParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int maxResults : 1; 
        unsigned int sortOrder : 1; 
    } _has;
    unsigned int _maxResults;
    GEOLatLng *_searchLocation;
    NSString *_searchString;
    int _sortOrder;
    GEOPDViewportInfo *_viewportInfo;
}

@property (nonatomic) BOOL hasMaxResults;
@property (nonatomic, readonly) BOOL hasSearchLocation;
@property (nonatomic, readonly) BOOL hasSearchString;
@property (nonatomic) BOOL hasSortOrder;
@property (nonatomic, readonly) BOOL hasViewportInfo;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, retain) GEOLatLng *searchLocation;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic) int sortOrder;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMaxResults;
- (BOOL)hasSearchLocation;
- (BOOL)hasSearchString;
- (BOOL)hasSortOrder;
- (BOOL)hasViewportInfo;
- (unsigned int)hash;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)searchLocation;
- (id)searchString;
- (void)setHasMaxResults:(BOOL)arg1;
- (void)setHasSortOrder:(BOOL)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setSearchLocation:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setViewportInfo:(id)arg1;
- (int)sortOrder;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
