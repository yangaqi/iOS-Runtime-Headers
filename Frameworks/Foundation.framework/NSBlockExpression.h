/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBlockExpression : NSExpression {
    NSArray *_arguments;
    id /* block */ _block;
}

- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (id)arguments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)expressionBlock;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned int)arg1 block:(id /* block */)arg2 arguments:(id)arg3;
- (id)predicateFormat;

@end
