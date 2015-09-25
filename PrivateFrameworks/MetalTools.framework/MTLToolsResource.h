/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsResource : MTLToolsObject <MTLResourceSPI> {
    unsigned int _options;
}

@property (readonly) MTLResourceAllocationInfo *cachedAllocationInfo;
@property (readonly) unsigned int cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned int hash;
@property (copy) NSString *label;
@property (nonatomic, readonly) unsigned int options;
@property int responsibleProcess;
@property (readonly) MTLResourceAllocationInfo *sharedAllocationInfo;
@property (readonly) unsigned int storageMode;
@property (readonly) Class superclass;

- (id)cachedAllocationInfo;
- (unsigned int)cpuCacheMode;
- (id)device;
- (BOOL)isPurgeable;
- (id)label;
- (unsigned int)options;
- (int)responsibleProcess;
- (void)setLabel:(id)arg1;
- (unsigned int)setPurgeableState:(unsigned int)arg1;
- (void)setResponsibleProcess:(int)arg1;
- (id)sharedAllocationInfo;
- (unsigned int)storageMode;
- (void)validateCPUReadable;
- (void)validateCPUWriteable;

@end
