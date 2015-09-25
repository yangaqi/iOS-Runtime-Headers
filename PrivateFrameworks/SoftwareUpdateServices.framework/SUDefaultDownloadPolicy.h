/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUDefaultDownloadPolicy : NSObject <SUDownloadPolicy> {
    SUCarrierDownloadPolicyProperties *_carrierPolicy;
    BOOL _cellularCapable;
    SUDescriptor *_descriptor;
    SUNetworkMonitor *_networkMonitor;
}

@property (nonatomic, retain) SUCarrierDownloadPolicyProperties *carrierPolicy;
@property (getter=isCellularCapable, nonatomic) BOOL cellularCapable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SUDescriptor *descriptor;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SUNetworkMonitor *networkMonitor;
@property (readonly) Class superclass;

- (BOOL)_isCellularCapable;
- (BOOL)_isDownloadableForNetworkType:(int)arg1 error:(int*)arg2 cellularFeesApply:(BOOL*)arg3 powerRequired:(BOOL*)arg4;
- (id)_stringForBool:(BOOL)arg1;
- (id)carrierPolicy;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (BOOL)hasEnoughDiskSpace;
- (id)initWithDescriptor:(id)arg1;
- (BOOL)isCellularCapable;
- (BOOL)isDownloadAllowableForCellular;
- (BOOL)isDownloadAllowableForCellular2G;
- (BOOL)isDownloadAllowableForCellularRoaming;
- (BOOL)isDownloadAllowableForWiFi;
- (BOOL)isDownloadFreeForCellular;
- (BOOL)isDownloadable;
- (BOOL)isDownloadableForCurrentNetworkConditions:(int*)arg1 cellularFeesApply:(BOOL*)arg2;
- (BOOL)isDownloadableForCurrentNetworkConditions:(int*)arg1 cellularFeesApply:(BOOL*)arg2 powerRequired:(BOOL*)arg3;
- (BOOL)isPowerRequired;
- (BOOL)isSamePolicy:(id)arg1;
- (id)networkMonitor;
- (void)setCarrierPolicy:(id)arg1;
- (void)setCellularCapable:(BOOL)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setNetworkMonitor:(id)arg1;

@end
