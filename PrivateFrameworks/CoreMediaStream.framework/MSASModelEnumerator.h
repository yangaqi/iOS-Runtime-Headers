/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASModelEnumerator : NSEnumerator {
    struct sqlite3 { } *_db;
    id /* block */ _stepBlock;
    struct sqlite3_stmt { } *_stmt;
}

@property (nonatomic) struct sqlite3 { }*db;
@property (nonatomic, copy) id /* block */ stepBlock;
@property (nonatomic) struct sqlite3_stmt { }*stmt;

+ (id)enumeratorWithDatabase:(struct sqlite3 { }*)arg1 query:(id)arg2 stepBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (struct sqlite3 { }*)db;
- (void)dealloc;
- (id)init;
- (id)initWithDatabase:(struct sqlite3 { }*)arg1 query:(id)arg2 stepBlock:(id /* block */)arg3;
- (id)nextObject;
- (void)setDb:(struct sqlite3 { }*)arg1;
- (void)setStepBlock:(id /* block */)arg1;
- (void)setStmt:(struct sqlite3_stmt { }*)arg1;
- (id /* block */)stepBlock;
- (struct sqlite3_stmt { }*)stmt;

@end
