/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemErrorLog : NSObject <NSCopying> {
    AVPlayerItemErrorLogInternal *_playerItemErrorLog;
}

@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) unsigned int extendedLogDataStringEncoding;

- (id)_errorLogArray;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)events;
- (id)extendedLogData;
- (unsigned int)extendedLogDataStringEncoding;
- (void)finalize;
- (id)init;
- (id)initWithLogArray:(id)arg1;

@end
