/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTIDSDevice : NSObject <BLTAbstractIDSDevice> {
    IDSDevice *_device;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isConnected;
@property (nonatomic, readonly) BOOL isDefaultPairedDevice;
@property (nonatomic, readonly) BOOL isNearby;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithIDSDevice:(id)arg1;
- (BOOL)isConnected;
- (BOOL)isDefaultPairedDevice;
- (BOOL)isNearby;

@end
