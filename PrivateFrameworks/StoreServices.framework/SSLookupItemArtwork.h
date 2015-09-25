/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLookupItemArtwork : NSObject {
    NSDictionary *_dictionary;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) NSDictionary *lookupDictionary;
@property (nonatomic, readonly) int width;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)URL;
- (id)URLWithHeight:(int)arg1 width:(int)arg2;
- (id)URLWithHeight:(int)arg1 width:(int)arg2 cropStyle:(id)arg3 format:(id)arg4;
- (id)URLWithHeight:(int)arg1 width:(int)arg2 format:(id)arg3;
- (void)dealloc;
- (BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 forColorKind:(id)arg5;
- (int)height;
- (id)initWithLookupDictionary:(id)arg1;
- (id)lookupDictionary;
- (int)width;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)MP_colorForColorKind:(id)arg1;

@end
