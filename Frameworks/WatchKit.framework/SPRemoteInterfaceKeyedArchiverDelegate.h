/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPRemoteInterfaceKeyedArchiverDelegate : NSObject <NSKeyedArchiverDelegate> {
    BOOL _imageIsNamed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL imageIsNamed;
@property (readonly) Class superclass;

- (void)archiver:(id)arg1 didEncodeObject:(id)arg2;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (BOOL)imageIsNamed;
- (void)setImageIsNamed:(BOOL)arg1;

@end
