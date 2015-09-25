/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSDocumentProxy : LSResourceProxy <NSSecureCoding> {
    NSString *_MIMEType;
    NSURL *_URL;
    NSString *_containerOwnerApplicationIdentifier;
    NSString *_name;
    BOOL _sourceIsManaged;
    NSString *_typeIdentifier;
}

@property (nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *containerOwnerApplicationIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) BOOL sourceIsManaged;
@property (nonatomic, readonly) NSString *typeIdentifier;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceIsManaged:(BOOL)arg4;
+ (id)documentProxyForURL:(id)arg1 sourceIsManaged:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;

- (id)MIMEType;
- (id)URL;
- (void)bind;
- (id)containerOwnerApplicationIdentifier;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iconStyleDomain;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 name:(id)arg2 type:(id)arg3 MIMEType:(id)arg4 sourceIsManaged:(BOOL)arg5;
- (BOOL)isImageOrVideo;
- (id)name;
- (BOOL)sourceIsManaged;
- (id)typeIdentifier;
- (id)uniqueIdentifier;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (struct CGSize { float x1; float x2; })_defaultStyleSize:(id)arg1;
- (struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_iconVariantDefinitions:(id)arg1;

@end
