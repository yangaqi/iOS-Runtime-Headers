/* Generated by RuntimeBrowser.
 */

@protocol IDSConnectionDelegate <NSObject>

@optional

- (void)connection:(IDSConnection *)arg1 devicesChanged:(NSArray *)arg2;
- (void)connection:(IDSConnection *)arg1 identifier:(NSString *)arg2 didSendWithSuccess:(BOOL)arg3 error:(NSError *)arg4 context:(IDSMessageContext *)arg5;
- (void)connection:(IDSConnection *)arg1 identifier:(NSString *)arg2 hasBeenDeliveredWithContext:(id)arg3;
- (void)connection:(IDSConnection *)arg1 incomingAccessoryData:(NSData *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingAccessoryReportMessage:(NSString *)arg2 accessoryID:(NSString *)arg3 controllerID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)connection:(IDSConnection *)arg1 incomingData:(NSData *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingMessage:(NSDictionary *)arg2 fromID:(NSString *)arg3;
- (void)connection:(IDSConnection *)arg1 incomingMessage:(NSDictionary *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingProtobuf:(IDSProtobuf *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 isActiveChanged:(BOOL)arg2;
- (void)connection:(IDSConnection *)arg1 nearbyDevicesChanged:(NSArray *)arg2;

@end
