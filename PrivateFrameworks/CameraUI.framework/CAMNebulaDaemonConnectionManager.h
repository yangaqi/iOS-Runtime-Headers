/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMNebulaDaemonConnectionManager : NSObject <CAMNebulaDaemonClientProtocol, NSXPCConnectionDelegate> {
    Protocol *__allowedProtocol;
    NSXPCConnection *__connection;
    NSString *__name;
    NSObject<OS_dispatch_queue> *__queue;
    NSMutableArray *__registeredProtocols;
    NSMutableArray *__registeredTargets;
    NSMutableDictionary *__tasksPerIdentifier;
    <CAMNebulaDaemonConnectionManagerDelegate> *_delegate;
    NSString *_identifier;
}

@property (nonatomic, readonly) Protocol *_allowedProtocol;
@property (nonatomic, readonly) NSXPCConnection *_connection;
@property (nonatomic, readonly, copy) NSString *_name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (nonatomic, readonly) NSMutableArray *_registeredProtocols;
@property (nonatomic, readonly) NSMutableArray *_registeredTargets;
@property (nonatomic, readonly) NSMutableDictionary *_tasksPerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMNebulaDaemonConnectionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

+ (id)_clientProtocolInterface;
+ (id)_daemonProtocolInterface;

- (void).cxx_destruct;
- (id)_allowedProtocol;
- (id)_connection;
- (void)_getProxyForExecutingBlock:(id /* block */)arg1;
- (id)_name;
- (id)_queue;
- (id)_registeredProtocols;
- (id)_registeredTargets;
- (id)_targetsForSelector:(SEL)arg1;
- (id)_tasksPerIdentifier;
- (void)addTarget:(id)arg1 forProtocol:(id)arg2;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (id)delegate;
- (id)description;
- (void)forceStopTimelapseCaptureWithReasons:(int)arg1;
- (id)identifier;
- (id)initWithConnection:(id)arg1 name:(id)arg2 identifier:(id)arg3 queue:(id)arg4 allowedProtocol:(id)arg5;
- (void)setDelegate:(id)arg1;

@end
