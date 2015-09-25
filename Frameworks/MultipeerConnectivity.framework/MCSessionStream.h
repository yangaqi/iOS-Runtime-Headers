/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCSessionStream : NSObject {
    id /* block */ _completionHandler;
    int _fd;
    NSMutableData *_incomingBuffer;
    NSString *_name;
    MCResourceProgressObserver *_observer;
    MCPeerID *_peerID;
    NSProgress *_progress;
    BOOL _progressUnbounded;
    NSObject<OS_dispatch_source> *_source;
    BOOL _sourceSuspended;
    unsigned int _streamID;
    NSURL *_url;
    MCResourceDownloader *_urlDownloader;
    int state;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) int fd;
@property (nonatomic, retain) NSMutableData *incomingBuffer;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) MCResourceProgressObserver *observer;
@property (nonatomic) MCPeerID *peerID;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic) BOOL progressUnbounded;
@property (nonatomic) NSObject<OS_dispatch_source> *source;
@property (nonatomic) BOOL sourceSuspended;
@property (nonatomic) int state;
@property (nonatomic) unsigned int streamID;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic, retain) MCResourceDownloader *urlDownloader;

- (id /* block */)completionHandler;
- (void)dealloc;
- (int)fd;
- (id)incomingBuffer;
- (id)name;
- (id)observer;
- (id)peerID;
- (id)progress;
- (BOOL)progressUnbounded;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setFd:(int)arg1;
- (void)setIncomingBuffer:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setPeerID:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProgressUnbounded:(BOOL)arg1;
- (void)setSource:(id)arg1;
- (void)setSourceSuspended:(BOOL)arg1;
- (void)setState:(int)arg1;
- (void)setStreamID:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlDownloader:(id)arg1;
- (id)source;
- (BOOL)sourceSuspended;
- (int)state;
- (unsigned int)streamID;
- (id)url;
- (id)urlDownloader;

@end
