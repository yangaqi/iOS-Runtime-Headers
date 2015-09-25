/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEExtensionTunnelProviderHostContext : NEExtensionProviderHostContext <NEExtensionTunnelProviderHostProtocol, NEExtensionTunnelProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)didSetReasserting:(BOOL)arg1;
- (void)establishIPCWithCompletionHandler:(id /* block */)arg1;
- (void)handleIPCDetached;
- (void)setTunnelConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;

@end
