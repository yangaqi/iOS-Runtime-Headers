/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocationManagerSingleUpdater : NSObject <MKLocationManagerObserver, MKLocationManagerOperation> {
    BOOL _active;
    double _desiredAccuracy;
    id /* block */ _handler;
    MKLocationManager *_locationManager;
    double _maxLocationAge;
    MKLocationManagerSingleUpdater *_selfReference;
    double _timeout;
    NSTimer *_timeoutTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (void)handleTimeout:(id)arg1;
- (id /* block */)handler;
- (id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(id /* block */)arg3;
- (id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(id /* block */)arg3 timeout:(double)arg4;
- (id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(id /* block */)arg3 timeout:(double)arg4 maxLocationAge:(double)arg5;
- (id)initWithLocationManager:(id)arg1 handler:(id /* block */)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setTimeout:(double)arg1;
- (void)start;
- (double)timeout;

@end
