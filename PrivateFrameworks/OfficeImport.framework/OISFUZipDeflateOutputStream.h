/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUZipDeflateOutputStream : NSObject <SFUOutputStream> {
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned int total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned int total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned int adler; 
        unsigned int reserved; 
    } mDeflateStream;
    char *mOutBuffer;
    <SFUOutputStream> *mOutputStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (BOOL)canCreateInputStream;
- (BOOL)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;
- (id)inputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;

@end
