/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNConnection : NSObject {
    NSDate *_connectedDate;
    void *_session;
    int _sessionType;
    int _status;
}

@property (readonly) NSDate *connectedDate;
@property void*session;
@property (readonly) int sessionType;
@property (readonly) int status;

- (void).cxx_destruct;
- (id)connectedDate;
- (void)dealloc;
- (void)destroySession;
- (id)initWithType:(int)arg1;
- (void)newSessionWithConfigID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void*)session;
- (int)sessionType;
- (void)setSession:(void*)arg1;
- (BOOL)startVPNTunnelAndReturnError:(id*)arg1;
- (BOOL)startVPNTunnelWithOptions:(id)arg1 andReturnError:(id*)arg2;
- (int)status;
- (void)stopVPNTunnel;
- (void)updateSessionInfoWithCompletionHandler:(id /* block */)arg1;

@end
