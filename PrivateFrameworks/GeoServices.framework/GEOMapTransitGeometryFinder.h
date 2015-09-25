/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapTransitGeometryFinder : GEOMapRequest {
    GEOMapTileFinder *_tileFinder;
    unsigned long long _transitID;
}

- (void)cancel;
- (void)dealloc;
- (void)findTransitGeometryWithHandler:(id /* block */)arg1;
- (id)initWithMap:(id)arg1 transitID:(unsigned long long)arg2 coordinate:(struct { double x1; double x2; })arg3;

@end
