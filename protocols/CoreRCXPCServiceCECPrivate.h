/* Generated by RuntimeBrowser.
 */

@protocol CoreRCXPCServiceCECPrivate

@required

- (void)fakeCreateCECBusAsync:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CoreCECBus *, NSError *, void*
- (void)fakeCreateRemoteCECDeviceAsync:(void *)arg1 bus:(void *)arg2 logicalAddress:(void *)arg3 physicalAddress:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: unsigned int, CoreCECBus *, unsigned char, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CoreCECDevice *, NSError *, void*
- (void)fakeRemoveCECBusAsync:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CoreCECBus *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fakeRemoveCECDeviceAsync:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CoreCECDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fakeSetCECBusLinkStateAsync:(void *)arg1 linkState:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CoreCECBus *, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fakeSetCECDeviceLogicalAddressAsync:(void *)arg1 logicalAddress:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CoreCECDevice *, unsigned char, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CoreCECDevice *, NSError *, void*

@end
