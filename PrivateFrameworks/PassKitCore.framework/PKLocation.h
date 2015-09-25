/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKLocation : NSObject <NSSecureCoding> {
    NSNumber *_altitude;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_maxDistance;
    NSString *_name;
    NSString *_relevantText;
}

@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *relevantText;

+ (BOOL)supportsSecureCoding;

- (id)CLLocation;
- (double)altitude;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAltitude;
- (BOOL)hasEqualCoordinatesToLocation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (double)latitude;
- (double)longitude;
- (double)maxDistance;
- (id)name;
- (id)relevantText;
- (void)setAltitude:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMaxDistance:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRelevantText:(id)arg1;

@end
