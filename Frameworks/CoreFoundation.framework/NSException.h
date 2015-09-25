/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSException : NSObject <NSCoding, NSCopying> {
    NSString *name;
    NSString *reason;
    id reserved;
    NSDictionary *userInfo;
}

@property (readonly, copy) NSArray *callStackReturnAddresses;
@property (readonly, copy) NSArray *callStackSymbols;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *reason;
@property (readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (void)raise:(id)arg1 format:(id)arg2;
+ (void)raise:(id)arg1 format:(id)arg2 arguments:(void*)arg3;

- (BOOL)_installStackTraceKeyIfNeeded;
- (id)callStackReturnAddresses;
- (id)callStackSymbols;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)raise;
- (id)reason;
- (id)userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (void)sfu_errnoRaise:(id)arg1 format:(id)arg2;
+ (void)tsu_raiseWithError:(id)arg1;

- (id)gsu_descriptionWithStacktrace;
- (int)sfu_localErrno;
- (id)tsu_error;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (void)sfu_errnoRaise:(id)arg1 format:(id)arg2;
+ (void)tsu_raiseWithError:(id)arg1;

- (int)sfu_localErrno;
- (id)tsu_error;

@end
