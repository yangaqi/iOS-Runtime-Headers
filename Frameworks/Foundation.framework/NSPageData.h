/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPageData : NSData {
    NSDate *_originalFileModDate;
    NSString *_originalFilePath;
    NSData *data;
}

+ (int)_umask;
+ (void)initialize;

- (id)_mappedFile;
- (void)_setOriginalFileInfoFromFileAttributes:(id)arg1;
- (const void*)bytes;
- (id)data;
- (void)dealloc;
- (id)deserializer;
- (id)init;
- (id)initFromSerializerStream:(id)arg1 length:(unsigned int)arg2;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1 withFileAttributes:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithDataNoCopy:(id)arg1;
- (unsigned int)length;
- (unsigned int)writeFd:(int)arg1;
- (unsigned int)writeFile:(id)arg1;
- (unsigned int)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5;

@end
